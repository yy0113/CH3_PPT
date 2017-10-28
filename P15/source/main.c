#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("Enter three intergers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("Max is: %d\n", maximum(num1, num2, num3));
	system("pause");
	return 0;

}

int maximum(int x, int y, int z)
{
	int M = x;
	if (y>M)
	{
		M = y;
	}
	if (z>M)
	{
		M = z;
	}
	return M;
}


