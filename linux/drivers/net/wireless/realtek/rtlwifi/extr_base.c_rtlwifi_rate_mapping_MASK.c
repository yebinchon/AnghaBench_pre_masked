
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct TYPE_4__ {scalar_t__ band; } ;
 scalar_t__ VAR_0 ;

int FUNC_0(struct ieee80211_hw *VAR_1, bool VAR_2, bool VAR_3,
    u8 VAR_4)
{
 int VAR_5;

 if (VAR_3) {
  switch (VAR_4) {
  case 147:
   VAR_5 = 0;
   break;
  case 146:
   VAR_5 = 1;
   break;
  case 145:
   VAR_5 = 2;
   break;
  case 144:
   VAR_5 = 3;
   break;
  case 143:
   VAR_5 = 4;
   break;
  case 142:
   VAR_5 = 5;
   break;
  case 141:
   VAR_5 = 6;
   break;
  case 140:
   VAR_5 = 7;
   break;
  case 139:
   VAR_5 = 8;
   break;
  case 138:
   VAR_5 = 9;
   break;
  case 137:
   VAR_5 = 0;
   break;
  case 136:
   VAR_5 = 1;
   break;
  case 135:
   VAR_5 = 2;
   break;
  case 134:
   VAR_5 = 3;
   break;
  case 133:
   VAR_5 = 4;
   break;
  case 132:
   VAR_5 = 5;
   break;
  case 131:
   VAR_5 = 6;
   break;
  case 130:
   VAR_5 = 7;
   break;
  case 129:
   VAR_5 = 8;
   break;
  case 128:
   VAR_5 = 9;
   break;
  default:
   VAR_5 = 0;
   break;
  }
  return VAR_5;
 }
 if (0 == VAR_2) {
  if (VAR_0 == VAR_1->conf.chandef.chan->band) {
   switch (VAR_4) {
   case 172:
    VAR_5 = 0;
    break;
   case 170:
    VAR_5 = 1;
    break;
   case 166:
    VAR_5 = 2;
    break;
   case 175:
    VAR_5 = 3;
    break;
   case 165:
    VAR_5 = 4;
    break;
   case 164:
    VAR_5 = 5;
    break;
   case 174:
    VAR_5 = 6;
    break;
   case 173:
    VAR_5 = 7;
    break;
   case 171:
    VAR_5 = 8;
    break;
   case 169:
    VAR_5 = 9;
    break;
   case 168:
    VAR_5 = 10;
    break;
   case 167:
    VAR_5 = 11;
    break;
   default:
    VAR_5 = 0;
    break;
   }
  } else {
   switch (VAR_4) {
   case 165:
    VAR_5 = 0;
    break;
   case 164:
    VAR_5 = 1;
    break;
   case 174:
    VAR_5 = 2;
    break;
   case 173:
    VAR_5 = 3;
    break;
   case 171:
    VAR_5 = 4;
    break;
   case 169:
    VAR_5 = 5;
    break;
   case 168:
    VAR_5 = 6;
    break;
   case 167:
    VAR_5 = 7;
    break;
   default:
    VAR_5 = 0;
    break;
   }
  }
 } else {
  switch (VAR_4) {
  case 163:
   VAR_5 = 0;
   break;
  case 162:
   VAR_5 = 1;
   break;
  case 155:
   VAR_5 = 2;
   break;
  case 154:
   VAR_5 = 3;
   break;
  case 153:
   VAR_5 = 4;
   break;
  case 152:
   VAR_5 = 5;
   break;
  case 151:
   VAR_5 = 6;
   break;
  case 150:
   VAR_5 = 7;
   break;
  case 149:
   VAR_5 = 8;
   break;
  case 148:
   VAR_5 = 9;
   break;
  case 161:
   VAR_5 = 10;
   break;
  case 160:
   VAR_5 = 11;
   break;
  case 159:
   VAR_5 = 12;
   break;
  case 158:
   VAR_5 = 13;
   break;
  case 157:
   VAR_5 = 14;
   break;
  case 156:
   VAR_5 = 15;
   break;
  default:
   VAR_5 = 0;
   break;
  }
 }
 return VAR_5;
}
