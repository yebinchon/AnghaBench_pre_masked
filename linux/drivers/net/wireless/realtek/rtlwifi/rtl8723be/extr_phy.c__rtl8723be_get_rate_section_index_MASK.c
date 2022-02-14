
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
__attribute__((used)) static u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1 = 0;

 switch (VAR_0) {
 case 137:
  VAR_1 = 0;
 break;
 case 136:
  VAR_1 = 1;
 break;
 case 142:
  VAR_1 = 2;
 break;
 case 135:
  VAR_1 = 3;
 break;
 case 141:
  VAR_1 = 4;
 break;
 case 140:
  VAR_1 = 5;
 break;
 case 139:
  VAR_1 = 6;
 break;
 case 138:
  VAR_1 = 7;
 break;
 case 129:
  VAR_1 = 0;
 break;
 case 128:
  VAR_1 = 1;
 break;
 case 134:
  VAR_1 = 2;
 break;
 case 133:
  VAR_1 = 4;
 break;
 case 132:
  VAR_1 = 5;
 break;
 case 131:
  VAR_1 = 6;
 break;
 case 130:
  VAR_1 = 7;
 break;
 default:
  VAR_0 &= 0xFFF;
  if (VAR_0 >= 0xC20 && VAR_0 <= 0xC4C)
   VAR_1 = (u8)((VAR_0 - 0xC20) / 4);
  else if (VAR_0 >= 0xE20 && VAR_0 <= 0xE4C)
   VAR_1 = (u8)((VAR_0 - 0xE20) / 4);
  break;
 }
 return VAR_1;
}
