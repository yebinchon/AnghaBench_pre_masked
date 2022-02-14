
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static u32 FUNC_2(unsigned int VAR_0)
{
 switch (VAR_0) {
 case 32:

  return FUNC_0(0x10000000 | (3 << 25) | (0 << 23) | (1 << 21) | (2 << 19) | (8 << 12) | (8 << 8) | (8 << 4) | (8 << 0) | (3 << 16));
 case 24:

  return FUNC_0(0x10000000 | (4 << 25) | (2 << 23) | (1 << 21) | (0 << 19) | (0 << 12) | (8 << 8) | (8 << 4) | (8 << 0) | (2 << 16));
 case 16:

  return FUNC_0(0x10000000 | (4 << 25) | (0 << 23) | (1 << 21) | (2 << 19) | (0 << 12) | (5 << 8) | (6 << 4) | (5 << 0) | (1 << 16));
 default:
  FUNC_1("fsl-diu: unsupported color depth %u\n", VAR_0);
  return 0;
 }
}
