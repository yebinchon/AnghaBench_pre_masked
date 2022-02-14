
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_10__ {int fw_ps_lock; } ;
struct TYPE_9__ {int fw_clockoff_timer; } ;
struct TYPE_6__ {int fw_current_inpsmode; } ;
struct rtl_priv {TYPE_5__ locks; TYPE_4__ works; TYPE_3__* cfg; TYPE_1__ psc; } ;
struct rtl_hal {int fw_clk_change_in_progress; int fw_ps_state; int fw_ready; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_12 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ieee80211_hw *VAR_8,
         u8 VAR_9, bool VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_6(VAR_8);
 struct rtl_hal *VAR_12 = FUNC_5(FUNC_6(VAR_8));
 bool VAR_13;
 u32 VAR_14 = 0, VAR_15, VAR_16;
 bool VAR_17 = VAR_10;
 VAR_11->cfg->ops->get_hw_reg(VAR_8, VAR_3,
     (u8 *)(&VAR_13));

 if (!VAR_12->fw_ready)
  return;
 if (!VAR_11->psc.fw_current_inpsmode)
  return;

 while (1) {
  FUNC_9(&VAR_11->locks.fw_ps_lock);
  if (VAR_12->fw_clk_change_in_progress) {
   while (VAR_12->fw_clk_change_in_progress) {
    FUNC_10(&VAR_11->locks.fw_ps_lock);
    VAR_14++;
    FUNC_13(100);
    if (VAR_14 > 1000)
     return;
    FUNC_9(&VAR_11->locks.fw_ps_lock);
   }
   FUNC_10(&VAR_11->locks.fw_ps_lock);
  } else {
   VAR_12->fw_clk_change_in_progress = 0;
   FUNC_10(&VAR_11->locks.fw_ps_lock);
   break;
  }
 }

 if (FUNC_1(VAR_12->fw_ps_state)) {
  VAR_11->cfg->ops->get_hw_reg(VAR_8, VAR_4, &VAR_9);
  if (FUNC_0(VAR_9)) {
   VAR_15 = VAR_6;
   VAR_16 = FUNC_7(VAR_11, VAR_15);
   while (!(VAR_16 & VAR_5) && (VAR_14 < 500)) {
    FUNC_13(50);
    VAR_14++;
    VAR_16 = FUNC_7(VAR_11, VAR_15);
   }

   if (VAR_16 & VAR_5) {
    FUNC_8(VAR_11, VAR_15, 0x0100);
    VAR_12->fw_ps_state = VAR_2;
    FUNC_3(VAR_11, VAR_0, VAR_1,
      "Receive CPWM INT!!! Set pHalData->FwPSState = %X\n",
      VAR_12->fw_ps_state);
   }
  }

  FUNC_9(&VAR_11->locks.fw_ps_lock);
  VAR_12->fw_clk_change_in_progress = 0;
  FUNC_10(&VAR_11->locks.fw_ps_lock);
  if (VAR_17) {
   FUNC_4(&VAR_11->works.fw_clockoff_timer,
      VAR_7 + FUNC_2(10));
  }

 } else {
  FUNC_9(&VAR_11->locks.fw_ps_lock);
  VAR_12->fw_clk_change_in_progress = 0;
  FUNC_10(&VAR_11->locks.fw_ps_lock);
 }
}
