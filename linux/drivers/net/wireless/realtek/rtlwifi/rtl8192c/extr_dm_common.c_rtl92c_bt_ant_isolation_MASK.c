
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int current_channel; } ;
struct TYPE_11__ {int dynamic_txhighpower_lvl; int dynamic_txpower_enable; } ;
struct TYPE_10__ {scalar_t__ bt_service; int bt_rssi_state; int bt_rfreg_origin_1e; scalar_t__ bt_edca_dl; scalar_t__ bt_edca_ul; } ;
struct TYPE_7__ {scalar_t__ vendor; scalar_t__ mode; } ;
struct rtl_priv {TYPE_6__ phy; TYPE_5__ dm; TYPE_4__ btcoexist; TYPE_3__* cfg; TYPE_1__ mac80211; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {int (* set_rfreg ) (struct ieee80211_hw*,int ,int,int,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_15, u8 VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_2(VAR_15);


 if (VAR_17->mac80211.vendor == VAR_7 &&
     VAR_17->btcoexist.bt_service == VAR_2) {
  FUNC_3(VAR_17, VAR_8, 0xa0);
 } else {
  if ((VAR_17->btcoexist.bt_service == VAR_0) &&
      (VAR_17->btcoexist.bt_rssi_state &
       VAR_4)) {
   FUNC_3(VAR_17, VAR_8, 0xa0);
  } else if ((VAR_17->btcoexist.bt_service ==
       VAR_2) && (VAR_17->mac80211.mode <
       VAR_14) &&
       (VAR_17->btcoexist.bt_rssi_state &
       VAR_5)) {
   FUNC_3(VAR_17, VAR_8, 0xa0);
  } else if (VAR_17->btcoexist.bt_service == VAR_3) {
   FUNC_3(VAR_17, VAR_8, VAR_16);
  } else {
   FUNC_3(VAR_17, VAR_8, VAR_16);
  }
 }

 if (VAR_17->btcoexist.bt_service == VAR_3)
  FUNC_4(VAR_17, VAR_9, 0x10100);
 else
  FUNC_4(VAR_17, VAR_9, 0x0);

 if (VAR_17->btcoexist.bt_rssi_state &
     VAR_4) {
  FUNC_0(VAR_15);
 } else {
  VAR_17->btcoexist.bt_edca_ul = 0;
  VAR_17->btcoexist.bt_edca_dl = 0;
 }

 if (VAR_17->btcoexist.bt_service != VAR_1) {
  VAR_17->cfg->ops->set_rfreg(VAR_15,
     VAR_10,
     0x1e,
     0xf0, 0xf);
 } else {
  VAR_17->cfg->ops->set_rfreg(VAR_15,
       VAR_10, 0x1e, 0xf0,
       VAR_17->btcoexist.bt_rfreg_origin_1e);
 }

 if (!VAR_17->dm.dynamic_txpower_enable) {
  if (VAR_17->btcoexist.bt_service != VAR_1) {
   if (VAR_17->btcoexist.bt_rssi_state &
    VAR_6) {
    VAR_17->dm.dynamic_txhighpower_lvl =
       VAR_12;
   } else {
    VAR_17->dm.dynamic_txhighpower_lvl =
     VAR_11;
   }
  } else {
   VAR_17->dm.dynamic_txhighpower_lvl =
    VAR_13;
  }
  FUNC_1(VAR_15,
   VAR_17->phy.current_channel);
 }
}
