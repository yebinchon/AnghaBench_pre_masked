
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bt_pre_rssi_state; int cstate; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 long FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

u8 FUNC_3(struct ieee80211_hw *VAR_12,
     u8 VAR_13,
     u8 VAR_14,
     u8 VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_2(VAR_12);
 long VAR_17 = 0;
 u8 VAR_18 = 0;

 VAR_17 = FUNC_1(VAR_12);

 if (VAR_13 == 2) {
  VAR_16->btcoexist.cstate &=
   ~VAR_2;

  if ((VAR_16->btcoexist.bt_pre_rssi_state ==
       VAR_5) ||
      (VAR_16->btcoexist.bt_pre_rssi_state ==
       VAR_8)) {
   if (VAR_17 >=
       (VAR_14 + VAR_3)) {
    VAR_18 = VAR_4;
    VAR_16->btcoexist.cstate
     |= VAR_0;
    VAR_16->btcoexist.cstate
     &= ~VAR_1;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to High\n");
   } else {
    VAR_18 = VAR_8;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state stay at Low\n");
   }
  } else {
   if (VAR_17 < VAR_14) {
    VAR_18 = VAR_5;
    VAR_16->btcoexist.cstate
     |= VAR_1;
    VAR_16->btcoexist.cstate
     &= ~VAR_0;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to Low\n");
   } else {
    VAR_18 = VAR_7;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state stay at High\n");
   }
  }
 } else if (VAR_13 == 3) {
  if (VAR_14 > VAR_15) {
   FUNC_0(VAR_16, VAR_10, VAR_11,
     "[DM][BT], RSSI thresh error!!\n");
   return VAR_16->btcoexist.bt_pre_rssi_state;
  }
  if ((VAR_16->btcoexist.bt_pre_rssi_state ==
       VAR_5) ||
      (VAR_16->btcoexist.bt_pre_rssi_state ==
       VAR_8)) {
   if (VAR_17 >=
       (VAR_14 + VAR_3)) {
    VAR_18 = VAR_6;
    VAR_16->btcoexist.cstate
     |= VAR_2;
    VAR_16->btcoexist.cstate
     &= ~VAR_1;
    VAR_16->btcoexist.cstate
     &= ~VAR_0;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to Medium\n");
   } else {
    VAR_18 = VAR_8;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state stay at Low\n");
   }
  } else if ((VAR_16->btcoexist.bt_pre_rssi_state ==
    VAR_6) ||
   (VAR_16->btcoexist.bt_pre_rssi_state ==
    VAR_9)) {
   if (VAR_17 >=
       (VAR_15 + VAR_3)) {
    VAR_18 = VAR_4;
    VAR_16->btcoexist.cstate
     |= VAR_0;
    VAR_16->btcoexist.cstate
     &= ~VAR_1;
    VAR_16->btcoexist.cstate
     &= ~VAR_2;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to High\n");
   } else if (VAR_17 < VAR_14) {
    VAR_18 = VAR_5;
    VAR_16->btcoexist.cstate
     |= VAR_1;
    VAR_16->btcoexist.cstate
     &= ~VAR_0;
    VAR_16->btcoexist.cstate
     &= ~VAR_2;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to Low\n");
   } else {
    VAR_18 = VAR_9;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state stay at Medium\n");
   }
  } else {
   if (VAR_17 < VAR_15) {
    VAR_18 = VAR_6;
    VAR_16->btcoexist.cstate
     |= VAR_2;
    VAR_16->btcoexist.cstate
     &= ~VAR_0;
    VAR_16->btcoexist.cstate
     &= ~VAR_1;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state switch to Medium\n");
   } else {
    VAR_18 = VAR_7;
    FUNC_0(VAR_16, VAR_10, VAR_11,
      "[DM][BT], RSSI state stay at High\n");
   }
  }
 }
 VAR_16->btcoexist.bt_pre_rssi_state = VAR_18;
 return VAR_18;
}
