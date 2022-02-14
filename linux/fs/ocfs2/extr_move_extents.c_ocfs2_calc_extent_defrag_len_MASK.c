
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u32 *VAR_1,
      u32 VAR_2, int *VAR_3)
{
 if ((*VAR_0 + *VAR_1) < VAR_2) {



  *VAR_1 += *VAR_0;
 } else if (*VAR_1 == 0) {



  *VAR_3 = 1;
 } else {
  *VAR_0 = VAR_2 - *VAR_1;
  *VAR_1 = 0;
 }
}
