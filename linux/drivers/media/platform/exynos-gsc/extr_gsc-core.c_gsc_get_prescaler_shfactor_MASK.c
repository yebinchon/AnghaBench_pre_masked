
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



void FUNC_0(u32 VAR_0, u32 VAR_1, u32 *VAR_2)
{
 if (VAR_0 == 4 && VAR_1 == 4)
  *VAR_2 = 4;
 else if ((VAR_0 == 4 && VAR_1 == 2) ||
   (VAR_0 == 2 && VAR_1 == 4))
  *VAR_2 = 3;
 else if ((VAR_0 == 4 && VAR_1 == 1) ||
   (VAR_0 == 1 && VAR_1 == 4) ||
   (VAR_0 == 2 && VAR_1 == 2))
  *VAR_2 = 2;
 else if (VAR_0 == 1 && VAR_1 == 1)
  *VAR_2 = 0;
 else
  *VAR_2 = 1;
}
