
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(u16 VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 int VAR_5;

 if (VAR_3)
  *VAR_3 = VAR_2;
 if (VAR_4)
  *VAR_4 = 0;
 if (VAR_2 == VAR_0)
  return 0;
 for (VAR_5 = 0; VAR_5 < 16; VAR_5 += 4)
  if (VAR_2 & (0xf << VAR_5))
   break;
 if (VAR_5 == 16)
  return 0;
 if (VAR_3)
  *VAR_3 = VAR_2 & (0xfff0 << VAR_5);
 if (VAR_4)
  *VAR_4 = (VAR_2 >> VAR_5) & 0xf;
 for (VAR_5 += 4; VAR_5 < 16; VAR_5 += 4)
  if ((VAR_2 & (0xf << VAR_5)) == 0)
   return -VAR_1;
 return 0;
}
