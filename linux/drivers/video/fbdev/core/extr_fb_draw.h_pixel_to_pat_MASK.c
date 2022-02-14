
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static inline unsigned long
FUNC_1( u32 VAR_0, u32 VAR_1)
{
 switch (VAR_0) {
 case 1:
  return 0xfffffffful*VAR_1;
 case 2:
  return 0x55555555ul*VAR_1;
 case 4:
  return 0x11111111ul*VAR_1;
 case 8:
  return 0x01010101ul*VAR_1;
 case 12:
  return 0x01001001ul*VAR_1;
 case 16:
  return 0x00010001ul*VAR_1;
 case 24:
  return 0x01000001ul*VAR_1;
 case 32:
  return 0x00000001ul*VAR_1;
 default:
  FUNC_0(1, "pixel_to_pat(): unsupported pixelformat %d\n", VAR_0);
  return 0;
    }
}
