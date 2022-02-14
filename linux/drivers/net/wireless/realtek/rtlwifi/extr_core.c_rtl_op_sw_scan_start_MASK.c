
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int load_imrandiqk_setting_for2g; } ;
struct TYPE_11__ {scalar_t__ supp_phymode_switch; } ;
struct TYPE_10__ {TYPE_2__* btc_ops; } ;
struct TYPE_8__ {scalar_t__ higher_busytraffic; } ;
struct rtl_priv {TYPE_7__* cfg; TYPE_5__ rtlhal; TYPE_4__ dm; TYPE_3__ btcoexist; TYPE_1__ link_info; } ;
struct rtl_mac {int act_scanning; int skip_scan; scalar_t__ link_state; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_14__ {TYPE_6__* ops; } ;
struct TYPE_13__ {int (* scan_operation_backup ) (struct ieee80211_hw*,int ) ;int (* led_control ) (struct ieee80211_hw*,int ) ;int (* chk_switch_dmdp ) (struct ieee80211_hw*) ;scalar_t__ (* get_btc_status ) () ;} ;
struct TYPE_9__ {int (* btc_scan_notify_wifi_only ) (struct rtl_priv*,int) ;int (* btc_scan_notify ) (struct rtl_priv*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct rtl_priv*,int) ;
 int FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;
 int FUNC_10 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_6,
     struct ieee80211_vif *VAR_7,
     const u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_6);
 struct rtl_mac *VAR_10 = FUNC_3(FUNC_4(VAR_6));

 FUNC_0(VAR_9, VAR_0, VAR_1, "\n");
 VAR_10->act_scanning = 1;
 if (VAR_9->link_info.higher_busytraffic) {
  VAR_10->skip_scan = 1;
  return;
 }

 if (VAR_9->cfg->ops->get_btc_status())
  VAR_9->btcoexist.btc_ops->btc_scan_notify(VAR_9, 1);
 else if (VAR_9->btcoexist.btc_ops)
  VAR_9->btcoexist.btc_ops->btc_scan_notify_wifi_only(VAR_9,
              1);

 if (VAR_9->dm.supp_phymode_switch) {
  if (VAR_9->cfg->ops->chk_switch_dmdp)
   VAR_9->cfg->ops->chk_switch_dmdp(VAR_6);
 }

 if (VAR_10->link_state == VAR_3) {
  FUNC_2(VAR_6);
  VAR_10->link_state = VAR_4;
 } else {
  FUNC_1(VAR_6);
 }


 VAR_9->rtlhal.load_imrandiqk_setting_for2g = 0;

 VAR_9->cfg->ops->led_control(VAR_6, VAR_2);
 VAR_9->cfg->ops->scan_operation_backup(VAR_6, VAR_5);
}
