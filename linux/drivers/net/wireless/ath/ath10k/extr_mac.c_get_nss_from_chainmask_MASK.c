
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u32 FUNC_0(u16 VAR_0)
{
 if ((VAR_0 & 0xf) == 0xf)
  return 4;
 else if ((VAR_0 & 0x7) == 0x7)
  return 3;
 else if ((VAR_0 & 0x3) == 0x3)
  return 2;
 return 1;
}
