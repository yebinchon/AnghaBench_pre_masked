
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct host_to_dev_fis {int command; int features; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

u8 FUNC_0(struct host_to_dev_fis *VAR_5, int VAR_6)
{
 switch (VAR_5->command) {
 case 164:
 case 167:
 case 166:
 case 165:
 case 162:
  return VAR_2;

 case 173:
 case 163:
 case 157:
 case 150:
 case 161:
 case 160:
 case 155:
 case 136:
 case 159:
 case 158:
  return VAR_4;

 case 171:
 case 172:
 case 156:
 case 154:
 case 153:
 case 152:
 case 151:
 case 149:
 case 144:
 case 143:
 case 140:
 case 139:
 case 138:
 case 135:
 case 137:
 case 134:
 case 133:
  return VAR_1;

 case 175:
 case 174:
 case 170:
 case 169:
 case 168:
 case 142:
 case 141:
 case 148:
 case 146:
 case 145:
 case 132:
  return VAR_3;

 case 147:
  switch (VAR_5->features) {
  case 130:
  case 131:
   return VAR_4;

  case 129:
  case 128:
   return VAR_1;

  default:
   return VAR_3;
  }

 default:
 {
  if (VAR_6 == VAR_0)
   return VAR_3;
  return VAR_4;
 }
 }
}
