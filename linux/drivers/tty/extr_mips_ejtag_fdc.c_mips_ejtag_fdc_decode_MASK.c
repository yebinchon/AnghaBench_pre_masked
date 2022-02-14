
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;



__attribute__((used)) static unsigned int FUNC_0(u32 VAR_0, char *VAR_1)
{
 VAR_1[0] = (u8)VAR_0;
 VAR_0 >>= 8;
 if (VAR_0 == 0x808080)
  return 1;
 VAR_1[1] = (u8)VAR_0;
 VAR_0 >>= 8;
 if (VAR_0 == 0x8181)
  return 2;
 VAR_1[2] = (u8)VAR_0;
 VAR_0 >>= 8;
 if (VAR_0 == 0x82)
  return 3;
 VAR_1[3] = (u8)VAR_0;
 return 4;
}
