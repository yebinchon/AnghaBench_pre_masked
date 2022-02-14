
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int eeprom_regulatory; } ;
struct rtl_phy {int**** tx_power_by_rate_offset; int current_channel; int current_chan_bw; } ;
struct rtl_priv {TYPE_1__ efuse; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ,int,int,int ) ;
 int FUNC_3 (int,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static s8 FUNC_5(struct ieee80211_hw *VAR_5,
     u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_5);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 u8 VAR_11 = 0, VAR_12, VAR_13;
 s8 VAR_14 = 0;
 s8 VAR_15 = 0;

 VAR_12 = FUNC_3(VAR_7, VAR_8);
 VAR_13 = VAR_4;

 if (VAR_13 == VAR_4) {
  if ((VAR_8 >= 149 && VAR_8 <= 156) ||
   (VAR_8 >= 135 && VAR_8 <= 128))
   VAR_13 = VAR_3;
  else
   VAR_13 = VAR_2;
 }

 switch (VAR_8) {
 case 172:
 case 165:
 case 171:
 case 163:
 case 153:
 case 149:
 case 159:
 case 147:
 case 143:
 case 139:
 case 135:
 case 131:
  VAR_11 = 0;
  break;
 case 170:
 case 164:
 case 169:
 case 162:
 case 152:
 case 148:
 case 158:
 case 146:
 case 142:
 case 138:
 case 134:
 case 130:
  VAR_11 = 8;
  break;
 case 166:
 case 174:
 case 168:
 case 155:
 case 151:
 case 161:
 case 157:
 case 145:
 case 141:
 case 137:
 case 133:
 case 129:
  VAR_11 = 16;
  break;
 case 175:
 case 173:
 case 167:
 case 154:
 case 150:
 case 160:
 case 156:
 case 144:
 case 140:
 case 136:
 case 132:
 case 128:
  VAR_11 = 24;
  break;
 default:
  FUNC_1(1, "rtl8821ae: Rate_Section is Illegal\n");
  break;
 }

 VAR_14 = (u8)(VAR_10->tx_power_by_rate_offset[VAR_6][VAR_7]
  [VAR_13][VAR_12] >> VAR_11) & 0xff;


 if (VAR_9->efuse.eeprom_regulatory != 2) {
  VAR_15 = FUNC_2(VAR_5, VAR_6,
   VAR_10->current_chan_bw, VAR_7, VAR_8,
   VAR_10->current_channel);

  if (VAR_8 == 139 || VAR_8 == 138 ||
    VAR_8 == 129 || VAR_8 == 128) {
   if (VAR_15 < 0) {
    if (VAR_14 < (-VAR_15))
     VAR_14 = -VAR_15;
   }
  } else {
   if (VAR_15 < 0)
    VAR_14 = VAR_15;
   else
    VAR_14 = VAR_14 > VAR_15 ? VAR_15 : VAR_14;
  }
  FUNC_0(VAR_9, VAR_0, VAR_1,
   "Maximum power by rate %d, final power by rate %d\n",
   VAR_15, VAR_14);
 }

 return VAR_14;
}
