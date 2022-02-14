
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;
__attribute__((used)) static int FUNC_1(enum omap_color_mode VAR_0)
{
 switch (VAR_0) {
 case 143:
  return 1;
 case 142:
  return 2;
 case 141:
  return 4;
 case 140:
 case 139:
  return 8;
 case 138:
 case 137:
 case 146:
 case 128:
 case 130:
 case 134:
 case 132:
 case 145:
 case 129:
  return 16;
 case 136:
  return 24;
 case 135:
 case 144:
 case 133:
 case 131:
  return 32;
 default:
  FUNC_0();
  return 0;
 }
}
