
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

u16 FUNC_1(u16 VAR_1, u8 VAR_2)
{

 if (FUNC_0(VAR_2 == 0 || VAR_2 > 0xf))
  return VAR_0;

 if (VAR_1 == 0)
  return VAR_2 << 12;

 if ((VAR_1 & 0x0fff) == 0)
  return VAR_1 | (VAR_2 << 8);

 if ((VAR_1 & 0x00ff) == 0)
  return VAR_1 | (VAR_2 << 4);

 if ((VAR_1 & 0x000f) == 0)
  return VAR_1 | VAR_2;





 return VAR_0;
}
