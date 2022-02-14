
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
struct rtl_ps_ctl {int rfchange_inprogress; } ;
struct TYPE_12__ {int rf_ps_lock; } ;
struct TYPE_9__ {int lps_change_work; } ;
struct TYPE_8__ {TYPE_1__* btc_ops; } ;
struct rtl_priv {TYPE_6__ locks; TYPE_5__* cfg; int max_fw_size; TYPE_3__ works; TYPE_2__ btcoexist; } ;
struct rtl_pci {int driver_is_goingto_unload; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_11__ {TYPE_4__* ops; } ;
struct TYPE_10__ {int (* led_control ) (struct ieee80211_hw*,int ) ;int (* hw_disable ) (struct ieee80211_hw*) ;int (* disable_interrupt ) (struct ieee80211_hw*) ;scalar_t__ (* get_btc_status ) () ;} ;
struct TYPE_7__ {int (* btc_deinit_variables ) (struct rtl_priv*) ;int (* btc_halt_notify ) (struct rtl_priv*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (struct rtl_hal*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct rtl_priv*) ;
 int FUNC_13 (struct rtl_priv*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int FUNC_16 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_6(VAR_1);
 struct rtl_pci *VAR_3 = FUNC_4(FUNC_5(VAR_1));
 struct rtl_ps_ctl *VAR_4 = FUNC_7(FUNC_6(VAR_1));
 struct rtl_hal *VAR_5 = FUNC_2(FUNC_6(VAR_1));
 unsigned long VAR_6;
 u8 VAR_7 = 0;

 if (VAR_2->cfg->ops->get_btc_status())
  VAR_2->btcoexist.btc_ops->btc_halt_notify(VAR_2);

 if (VAR_2->btcoexist.btc_ops)
  VAR_2->btcoexist.btc_ops->btc_deinit_variables(VAR_2);




 FUNC_8(VAR_5);

 VAR_3->driver_is_goingto_unload = 1;
 VAR_2->cfg->ops->disable_interrupt(VAR_1);
 FUNC_0(&VAR_2->works.lps_change_work);

 FUNC_9(&VAR_2->locks.rf_ps_lock, VAR_6);
 while (VAR_4->rfchange_inprogress) {
  FUNC_10(&VAR_2->locks.rf_ps_lock, VAR_6);
  if (VAR_7 > 100) {
   FUNC_9(&VAR_2->locks.rf_ps_lock, VAR_6);
   break;
  }
  FUNC_1(1);
  VAR_7++;
  FUNC_9(&VAR_2->locks.rf_ps_lock, VAR_6);
 }
 VAR_4->rfchange_inprogress = 1;
 FUNC_10(&VAR_2->locks.rf_ps_lock, VAR_6);

 VAR_2->cfg->ops->hw_disable(VAR_1);

 if (!VAR_2->max_fw_size)
  return;
 VAR_2->cfg->ops->led_control(VAR_1, VAR_0);

 FUNC_9(&VAR_2->locks.rf_ps_lock, VAR_6);
 VAR_4->rfchange_inprogress = 0;
 FUNC_10(&VAR_2->locks.rf_ps_lock, VAR_6);

 FUNC_3(VAR_1);
}
