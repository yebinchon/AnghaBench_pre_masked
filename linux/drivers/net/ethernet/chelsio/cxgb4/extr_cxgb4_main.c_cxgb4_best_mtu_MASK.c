
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

unsigned int FUNC_0(const unsigned short *VAR_1, unsigned short VAR_2,
       unsigned int *VAR_3)
{
 unsigned int VAR_4 = 0;

 while (VAR_4 < VAR_0 - 1 && VAR_1[VAR_4 + 1] <= VAR_2)
  ++VAR_4;
 if (VAR_3)
  *VAR_3 = VAR_4;
 return VAR_1[VAR_4];
}
