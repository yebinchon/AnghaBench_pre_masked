
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
__attribute__((used)) static u16
FUNC_0(u64 VAR_10, u64 VAR_11)
{
 u16 VAR_12 = VAR_9;
 u16 VAR_13 = VAR_9;

 switch (VAR_10) {
 case 187:
 case 173:
  VAR_13 = VAR_2;
  break;
 case 188:
 case 189:
 case 190:
 case 191:
 case 165:
  VAR_13 = VAR_0;
  break;
 case 163:
 case 162:
 case 164:
  VAR_13 = VAR_4;
  break;
 case 128:
 case 129:
  VAR_13 = VAR_8;
  break;
 case 169:
 case 166:
 case 170:
 case 171:
 case 172:
 case 168:
 case 167:
  VAR_13 = VAR_3;
  break;
 case 153:
 case 161:
 case 159:
 case 160:
 case 154:
 case 155:
 case 158:
 case 156:
 case 157:
 case 152:
 case 151:
  VAR_13 = VAR_5;
  break;
 case 150:
 case 147:
 case 148:
 case 149:
 case 145:
 case 146:
  VAR_13 = VAR_6;
  break;
 case 143:
 case 136:
 case 138:
 case 141:
 case 130:
 case 131:
 case 132:
 case 133:
 case 144:
 case 137:
 case 142:
 case 139:
 case 140:
 case 134:
 case 135:
  VAR_13 = VAR_7;
  break;
 case 185:
 case 178:
 case 180:
 case 182:
 case 174:
 case 175:
 case 176:
 case 177:
 case 184:
 case 181:
 case 186:
 case 179:
 case 183:
  VAR_13 = VAR_1;
  break;
 default:
  VAR_13 = VAR_9;
  break;
 }

 switch (VAR_11) {
 case 196:
 case 192:
 case 193:
 case 194:
 case 195:
  VAR_12 = VAR_1;
  break;
 default:
  VAR_12 = VAR_9;
  break;
 }

 if (VAR_13 == VAR_9 &&
     VAR_12 == VAR_9)
  return VAR_9;
 else if (VAR_13 != VAR_9 &&
   VAR_12 != VAR_9)
  return VAR_9;
 else if (VAR_13 != VAR_9 &&
   VAR_12 == VAR_9)
  return VAR_13;
 else
  return VAR_12;
}
