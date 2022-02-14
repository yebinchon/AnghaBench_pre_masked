
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct rtl_sta_info {scalar_t__ wireless_mode; } ;
struct TYPE_2__ {int hw; } ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_1__ mac80211; struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_tx_rate {int idx; } ;
struct ieee80211_sta {scalar_t__ bandwidth; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct rtl_phy*) ;
 int FUNC_1 (struct ieee80211_tx_rate*,int ,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 scalar_t__ FUNC_3 (int ,struct sk_buff*,int,int) ;

__attribute__((used)) static u8 FUNC_4(struct rtl_priv *VAR_16,
      struct ieee80211_sta *VAR_17,
      struct sk_buff *VAR_18, bool VAR_19)
{
 struct rtl_hal *VAR_20 = FUNC_2(VAR_16);
 struct rtl_phy *VAR_21 = &(VAR_16->phy);
 struct rtl_sta_info *VAR_22 = ((void*)0);
 u16 VAR_23 = 0;
 u8 VAR_24;
 struct ieee80211_tx_rate VAR_25;

 switch (FUNC_0(VAR_21)) {
 case 128:
  VAR_24 = 4;
  break;
 case 129:
  VAR_24 = 3;
  break;
 case 130:
  VAR_24 = 2;
  break;
 default:
  VAR_24 = 1;
  break;
 }
 if (VAR_17) {
  VAR_22 = (struct rtl_sta_info *)VAR_17->drv_priv;
  VAR_23 = VAR_22->wireless_mode;
 }

 if (FUNC_3(VAR_16->mac80211.hw, VAR_18, 1, 0) ||
     VAR_19) {
  return 0;
 } else {
  if (VAR_20->current_bandtype == VAR_3) {
   if (VAR_23 == VAR_12) {
    return VAR_4;
   } else if (VAR_23 == VAR_13) {
    return VAR_5;
   } else if (VAR_23 == VAR_14) {
    if (VAR_24 == 1)
     return VAR_8;
    else
     return VAR_7;
   } else if (VAR_23 == VAR_10) {
    if (VAR_17->bandwidth == VAR_6) {
     FUNC_1(&VAR_25,
              VAR_0,
              VAR_24);
     goto out;
    } else {
     FUNC_1(&VAR_25,
              VAR_1,
              VAR_24);
     goto out;
    }
   }
   return 0;
  } else {
   if (VAR_23 == VAR_9) {
    return VAR_2;
   } else if (VAR_23 == VAR_15) {
    if (VAR_24 == 1)
     return VAR_8;
    else
     return VAR_7;
   } else if (VAR_23 == VAR_11) {
    if (VAR_17->bandwidth == VAR_6) {
     FUNC_1(&VAR_25,
              VAR_0,
              VAR_24);
     goto out;
    } else {
     FUNC_1(&VAR_25,
              VAR_1,
              VAR_24);
     goto out;
    }
   }
   return 0;
  }
 }

out:
 return VAR_25.idx;
}
