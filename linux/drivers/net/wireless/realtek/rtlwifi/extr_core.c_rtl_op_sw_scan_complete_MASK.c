
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ap_num; } ;
struct TYPE_16__ {TYPE_7__* btc_ops; TYPE_1__ btc_info; } ;
struct TYPE_12__ {int load_imrandiqk_setting_for2g; } ;
struct TYPE_11__ {scalar_t__ higher_busytraffic; } ;
struct TYPE_10__ {int num; } ;
struct rtl_priv {TYPE_8__ btcoexist; TYPE_6__* cfg; TYPE_4__ rtlhal; TYPE_3__ link_info; TYPE_2__ scan_list; } ;
struct rtl_mac {int act_scanning; int skip_scan; int n_channels; int p2p_in_use; scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_15__ {int (* btc_scan_notify_wifi_only ) (struct rtl_priv*,int ) ;int (* btc_scan_notify ) (struct rtl_priv*,int ) ;} ;
struct TYPE_14__ {TYPE_5__* ops; } ;
struct TYPE_13__ {scalar_t__ (* get_btc_status ) () ;int (* scan_operation_backup ) (struct ieee80211_hw*,int ) ;int (* set_network_type ) (struct ieee80211_hw*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_5 ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct rtl_priv*,int ) ;
 int FUNC_7 (struct rtl_priv*,int ) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_6,
        struct ieee80211_vif *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_6);
 struct rtl_mac *VAR_9 = FUNC_1(FUNC_2(VAR_6));

 FUNC_0(VAR_8, VAR_0, VAR_1, "\n");
 VAR_9->act_scanning = 0;
 VAR_9->skip_scan = 0;

 VAR_8->btcoexist.btc_info.ap_num = VAR_8->scan_list.num;

 if (VAR_8->link_info.higher_busytraffic)
  return;


 if (VAR_9->n_channels == 3)
  VAR_9->p2p_in_use = 1;
 else
  VAR_9->p2p_in_use = 0;
 VAR_9->n_channels = 0;

 VAR_8->rtlhal.load_imrandiqk_setting_for2g = 0;

 if (VAR_9->link_state == VAR_3) {
  VAR_9->link_state = VAR_2;
  if (VAR_9->opmode == VAR_4) {

   VAR_8->cfg->ops->set_network_type(VAR_6, VAR_9->opmode);
  }
 }

 VAR_8->cfg->ops->scan_operation_backup(VAR_6, VAR_5);
 if (VAR_8->cfg->ops->get_btc_status())
  VAR_8->btcoexist.btc_ops->btc_scan_notify(VAR_8, 0);
 else if (VAR_8->btcoexist.btc_ops)
  VAR_8->btcoexist.btc_ops->btc_scan_notify_wifi_only(VAR_8,
              0);
}
