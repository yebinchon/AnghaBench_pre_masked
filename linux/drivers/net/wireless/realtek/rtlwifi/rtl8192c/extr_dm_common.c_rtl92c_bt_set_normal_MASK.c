
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bt_service; int bt_edca_ul; int bt_edca_dl; int ratio_tx; int bt_rssi_state; } ;
struct TYPE_3__ {int mode; } ;
struct rtl_priv {TYPE_2__ btcoexist; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->btcoexist.bt_service == VAR_2) {
  VAR_8->btcoexist.bt_edca_ul = 0x5ea72b;
  VAR_8->btcoexist.bt_edca_dl = 0x5ea72b;
 } else if (VAR_8->btcoexist.bt_service == VAR_0) {
  VAR_8->btcoexist.bt_edca_ul = 0x5eb82f;
  VAR_8->btcoexist.bt_edca_dl = 0x5eb82f;
 } else if (VAR_8->btcoexist.bt_service == VAR_4) {
  if (VAR_8->btcoexist.ratio_tx > 160) {
   VAR_8->btcoexist.bt_edca_ul = 0x5ea72f;
   VAR_8->btcoexist.bt_edca_dl = 0x5ea72f;
  } else {
   VAR_8->btcoexist.bt_edca_ul = 0x5ea32b;
   VAR_8->btcoexist.bt_edca_dl = 0x5ea42b;
  }
 } else {
  VAR_8->btcoexist.bt_edca_ul = 0;
  VAR_8->btcoexist.bt_edca_dl = 0;
 }

 if ((VAR_8->btcoexist.bt_service != VAR_1) &&
     (VAR_8->mac80211.mode == VAR_6 ||
      (VAR_8->mac80211.mode == (VAR_6 | VAR_5))) &&
     (VAR_8->btcoexist.bt_rssi_state &
      VAR_3)) {
  VAR_8->btcoexist.bt_edca_ul = 0x5eb82b;
  VAR_8->btcoexist.bt_edca_dl = 0x5eb82b;
 }
}
