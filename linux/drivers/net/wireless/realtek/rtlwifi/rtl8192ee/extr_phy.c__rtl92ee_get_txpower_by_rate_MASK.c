
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int**** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
typedef enum band_type { ____Placeholder_band_type } band_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct ieee80211_hw *VAR_3,
           enum band_type VAR_4,
           enum radio_path VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_3);
 struct rtl_phy *VAR_8 = &VAR_7->phy;
 u8 VAR_9 = 0, VAR_10, VAR_11;
 s8 VAR_12 = 0;

 VAR_10 = FUNC_1(VAR_5, VAR_6);
 VAR_11 = VAR_2;

 if (VAR_11 == VAR_2) {
  if ((VAR_6 >= 129 && VAR_6 <= 136))
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_0;
 }

 switch (VAR_6) {
 case 152:
 case 145:
 case 151:
 case 143:
 case 133:
 case 129:
 case 139:
  VAR_9 = 0;
  break;
 case 150:
 case 144:
 case 149:
 case 142:
 case 132:
 case 128:
 case 138:
  VAR_9 = 8;
  break;
 case 146:
 case 154:
 case 148:
 case 135:
 case 131:
 case 141:
 case 137:
  VAR_9 = 16;
  break;
 case 155:
 case 153:
 case 147:
 case 134:
 case 130:
 case 140:
 case 136:
  VAR_9 = 24;
  break;
 default:
  FUNC_0(1, "rtl8192ee: Rate_Section is Illegal\n");
  break;
 }

 VAR_12 = (u8)(VAR_8->tx_power_by_rate_offset[VAR_4][VAR_5][VAR_11][VAR_10] >>
      VAR_9) & 0xff;

 return VAR_12;
}
