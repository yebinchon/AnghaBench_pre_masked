
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_10__ {int fw_clockoff_timer; } ;
struct TYPE_9__ {int fw_ps_lock; } ;
struct TYPE_6__ {int inactive_pwrstate; int fw_current_inpsmode; } ;
struct rtl_priv {TYPE_5__ works; TYPE_4__ locks; TYPE_3__* cfg; TYPE_1__ psc; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl_hal {size_t fw_ps_state; int fw_clk_change_in_progress; int allow_sw_to_change_hwclc; int fw_ready; } ;
struct rtl8192_tx_ring {int queue; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,size_t*) ;int (* get_hw_reg ) (struct ieee80211_hw*,int ,size_t*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ieee80211_hw*,int ,size_t*) ;
 int FUNC_12 (struct ieee80211_hw*,int ,size_t*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_7,
     u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_6(VAR_7);
 struct rtl_hal *VAR_10 = FUNC_3(FUNC_6(VAR_7));
 struct rtl_pci *VAR_11 = FUNC_4(FUNC_5(VAR_7));
 struct rtl8192_tx_ring *VAR_12;
 enum rf_pwrstate VAR_13;
 bool VAR_14 = 0;
 u8 VAR_15;

 if (!VAR_10->fw_ready)
  return;
 if (!VAR_9->psc.fw_current_inpsmode)
  return;
 if (!VAR_10->allow_sw_to_change_hwclc)
  return;
 VAR_9->cfg->ops->get_hw_reg(VAR_7, VAR_2, (u8 *)(&VAR_13));
 if (VAR_13 == VAR_0 || VAR_9->psc.inactive_pwrstate == VAR_0)
  return;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_12 = &VAR_11->tx_ring[VAR_15];
  if (FUNC_8(&VAR_12->queue)) {
   VAR_14 = 1;
   break;
  }
 }

 if (VAR_14) {
  FUNC_2(&VAR_9->works.fw_clockoff_timer,
     VAR_6 + FUNC_1(10));
  return;
 }

 if (FUNC_0(VAR_10->fw_ps_state) !=
  VAR_1) {
  FUNC_9(&VAR_9->locks.fw_ps_lock);
  if (!VAR_10->fw_clk_change_in_progress) {
   VAR_10->fw_clk_change_in_progress = 1;
   FUNC_10(&VAR_9->locks.fw_ps_lock);
   VAR_10->fw_ps_state = FUNC_0(VAR_8);
   FUNC_7(VAR_9, VAR_4, 0x0100);
   VAR_9->cfg->ops->set_hw_reg(VAR_7, VAR_3,
            (u8 *)(&VAR_8));
   FUNC_9(&VAR_9->locks.fw_ps_lock);
   VAR_10->fw_clk_change_in_progress = 0;
   FUNC_10(&VAR_9->locks.fw_ps_lock);
  } else {
   FUNC_10(&VAR_9->locks.fw_ps_lock);
   FUNC_2(&VAR_9->works.fw_clockoff_timer,
      VAR_6 + FUNC_1(10));
  }
 }
}
