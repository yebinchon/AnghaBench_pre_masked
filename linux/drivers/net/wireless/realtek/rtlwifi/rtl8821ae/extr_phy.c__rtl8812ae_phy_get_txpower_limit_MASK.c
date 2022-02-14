
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct rtl_phy {int ***** txpwr_limit_5g; int ***** txpwr_limit_2_4g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int eeprom_regulatory; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 short VAR_11 ;
 short FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (int *) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static s8 FUNC_5(struct ieee80211_hw *VAR_12,
          u8 VAR_13,
          enum ht_channel_width VAR_14,
          enum radio_path VAR_15,
          u8 VAR_16, u8 VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_4(VAR_12);
 struct rtl_efuse *VAR_19 = FUNC_3(VAR_18);
 struct rtl_phy *VAR_20 = &VAR_18->phy;
 short VAR_21 = -1, VAR_22 = -1, VAR_23 = -1,
   VAR_24 = -1, VAR_25 = -1;
 u16 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 s8 VAR_31 = VAR_9;

 if (VAR_19->eeprom_regulatory == 2)
  return VAR_9;

 VAR_22 = VAR_11;

 if (VAR_13 == VAR_0)
  VAR_21 = 0;
 else if (VAR_13 == VAR_1)
  VAR_21 = 1;

 if (VAR_14 == VAR_6)
  VAR_23 = 0;
 else if (VAR_14 == VAR_7)
  VAR_23 = 1;
 else if (VAR_14 == VAR_8)
  VAR_23 = 2;

 switch (VAR_16) {
 case 172:
 case 170:
 case 166:
 case 175:
  VAR_24 = 0;
  break;
 case 165:
 case 164:
 case 174:
 case 173:
 case 171:
 case 169:
 case 168:
 case 167:
  VAR_24 = 1;
  break;
 case 163:
 case 162:
 case 155:
 case 154:
 case 153:
 case 152:
 case 151:
 case 150:
  VAR_24 = 2;
  break;
 case 149:
 case 148:
 case 161:
 case 160:
 case 159:
 case 158:
 case 157:
 case 156:
  VAR_24 = 3;
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
  VAR_24 = 4;
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
  VAR_24 = 5;
  break;
 default:
  FUNC_0(VAR_18, VAR_4, VAR_5,
   "Wrong rate 0x%x\n", VAR_16);
  break;
 }

 if (VAR_21 == VAR_1 && VAR_24 == 0)
  FUNC_0(VAR_18, VAR_4, VAR_5,
    "Wrong rate 0x%x: No CCK in 5G Band\n", VAR_16);



 if (VAR_24 == 1)
  VAR_23 = 0;




 if ((VAR_24 == 2 || VAR_24 == 3) && VAR_13 == VAR_1 &&
     VAR_23 == 2)
  VAR_23 = 1;

 if (VAR_13 == VAR_0)
  VAR_25 = FUNC_1(VAR_12,
  VAR_0, VAR_17);
 else if (VAR_13 == VAR_1)
  VAR_25 = FUNC_1(VAR_12,
  VAR_1, VAR_17);
 else if (VAR_13 == VAR_2)
  ;

 if (VAR_21 == -1 || VAR_22 == -1 || VAR_23 == -1 ||
  VAR_24 == -1 || VAR_25 == -1) {
  FUNC_0(VAR_18, VAR_4, VAR_5,
    "Wrong index value to access power limit table [band %d][regulation %d][bandwidth %d][rf_path %d][rate_section %d][chnl %d]\n",
    VAR_21, VAR_22, VAR_23, VAR_15,
    VAR_24, VAR_25);
  return VAR_9;
 }

 VAR_26 = VAR_21;
 VAR_27 = VAR_22;
 VAR_28 = VAR_23;
 VAR_29 = VAR_24;
 VAR_30 = VAR_25;

 if (VAR_13 == VAR_0) {
  s8 VAR_32[10] = {0};
  u8 VAR_33;

  for (VAR_33 = 0; VAR_33 < 4; ++VAR_33)
   VAR_32[VAR_33] = VAR_20->txpwr_limit_2_4g[VAR_33][VAR_28]
   [VAR_29][VAR_30][VAR_15];

  VAR_31 = (VAR_22 == VAR_11) ?
   FUNC_2(VAR_32) :
   VAR_20->txpwr_limit_2_4g[VAR_27][VAR_28]
     [VAR_29][VAR_30][VAR_15];
 } else if (VAR_13 == VAR_1) {
  s8 VAR_34[10] = {0};
  u8 VAR_35;

  for (VAR_35 = 0; VAR_35 < VAR_10; ++VAR_35)
   VAR_34[VAR_35] = VAR_20->txpwr_limit_5g[VAR_35][VAR_28]
   [VAR_29][VAR_30][VAR_15];

  VAR_31 = (VAR_22 == VAR_11) ?
   FUNC_2(VAR_34) :
   VAR_20->txpwr_limit_5g[VAR_27][VAR_30]
   [VAR_29][VAR_30][VAR_15];
 } else {
  FUNC_0(VAR_18, VAR_3, VAR_5,
    "No power limit table of the specified band\n");
 }
 return VAR_31;
}
