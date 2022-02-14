
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum band_type { ____Placeholder_band_type } band_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_hw *VAR_4,
         enum band_type VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_4);
 u8 VAR_8 = 0;
 if (VAR_5 == VAR_0) {
  switch (VAR_6) {
  case 172:
  case 170:
  case 166:
  case 175:
   VAR_8 = 0;
   break;

  case 165:
  case 164:
  case 174:
  case 173:
  case 171:
  case 169:
  case 168:
  case 167:
   VAR_8 = 1;
   break;

  case 163:
  case 162:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 150:
   VAR_8 = 2;
   break;

  case 149:
  case 148:
  case 161:
  case 160:
  case 159:
  case 158:
  case 157:
  case 156:
   VAR_8 = 3;
   break;

  default:
   FUNC_0(VAR_7, VAR_2, VAR_3,
    "Wrong rate 0x%x to obtain index in 2.4G in PHY_GetTxPowerByRateBaseIndex()\n",
    VAR_6);
   break;
  }
 } else if (VAR_5 == VAR_1) {
  switch (VAR_6) {
  case 165:
  case 164:
  case 174:
  case 173:
  case 171:
  case 169:
  case 168:
  case 167:
   VAR_8 = 0;
   break;

  case 163:
  case 162:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 150:
   VAR_8 = 1;
   break;

  case 149:
  case 148:
  case 161:
  case 160:
  case 159:
  case 158:
  case 157:
  case 156:
   VAR_8 = 2;
   break;

  case 147:
  case 146:
  case 145:
  case 144:
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
  case 138:
   VAR_8 = 3;
   break;

  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_8 = 4;
   break;

  default:
   FUNC_0(VAR_7, VAR_2, VAR_3,
    "Wrong rate 0x%x to obtain index in 5G in PHY_GetTxPowerByRateBaseIndex()\n",
    VAR_6);
   break;
  }
 }

 return VAR_8;
}
