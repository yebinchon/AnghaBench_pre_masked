
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;



u8 *FUNC_0(u8 *VAR_0, int VAR_1, uint *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 u8 *VAR_6;

 if (VAR_3 < 1)
  return ((void*)0);

 VAR_6 = VAR_0;
 VAR_5 = 0;
 *VAR_2 = 0;
 while (1) {
  if (*VAR_6 == VAR_1) {
   *VAR_2 = *(VAR_6 + 1);
   return VAR_6;
  } else {
   VAR_4 = *(VAR_6 + 1);
   VAR_6 += (VAR_4 + 2);
   VAR_5 += (VAR_4 + 2);
  }
  if (VAR_5 >= VAR_3)
   break;
 }
 return ((void*)0);
}
