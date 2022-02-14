
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int rf_type; int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

u8 FUNC_1(struct ieee80211_hw *VAR_19, u8 VAR_20,
       enum wireless_mode VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_0(VAR_19);
 struct rtl_phy *VAR_23 = &VAR_22->phy;
 u8 VAR_24 = 0;

 switch (VAR_20) {
 case 128:
  if (VAR_23->rf_type == VAR_14)
   VAR_24 = VAR_5;
  else
   VAR_24 = VAR_6;
  ; break;
 case 131:
 case 129:
  if (VAR_23->rf_type == VAR_14)
   VAR_24 = VAR_8;
  else
   VAR_24 = VAR_9;
  ; break;
 case 130:
  if (VAR_23->rf_type == VAR_14)
   VAR_24 = VAR_3;
  else
   VAR_24 = VAR_4;
  ; break;
 case 133:
  VAR_24 = VAR_2;
  break;
 case 134:
  VAR_24 = VAR_7;
  break;
 case 135:
  VAR_24 = VAR_1;
  break;
 case 132:
  if (VAR_21 == VAR_16 ||
      VAR_21 == VAR_17 ||
      VAR_21 == VAR_18 ||
      VAR_21 == VAR_15)
   VAR_24 = VAR_2;
  else
   VAR_24 = VAR_7;
  break;
 case 136:
  if (VAR_23->rf_type == VAR_14)
   VAR_24 = VAR_12;
  else
   VAR_24 = VAR_13;
  break;
 case 137:
  if (VAR_23->current_chan_bw == VAR_0) {
   if (VAR_23->rf_type == VAR_14)
    VAR_24 = VAR_12;
   else
    VAR_24 = VAR_13;
  } else {
   if (VAR_23->rf_type == VAR_14)
    VAR_24 = VAR_10;
   else
    VAR_24 = VAR_11;
  }
  break;
 default:
  VAR_24 = VAR_6;
  break;
 }
 return VAR_24;
}
