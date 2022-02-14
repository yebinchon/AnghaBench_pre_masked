
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct iwl_mvm {scalar_t__ bt_force_ant_mode; int last_bt_ci_cmd; int hw; int last_bt_notif; } ;
struct iwl_bt_iterator_data {struct ieee80211_chanctx_conf* secondary; struct ieee80211_chanctx_conf* primary; int * notif; struct iwl_mvm* mvm; } ;
struct iwl_bt_coex_ci_cmd {void* secondary_ch_phy_id; void* bt_secondary_ci; void* primary_ch_phy_id; void* bt_primary_ci; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ center_freq1; TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; TYPE_2__ def; } ;
typedef int cmd ;
struct TYPE_3__ {scalar_t__ center_freq; size_t hw_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,struct iwl_bt_iterator_data*) ;
 void*** VAR_4 ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_bt_iterator_data*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_bt_coex_ci_cmd*) ;
 scalar_t__ FUNC_6 (struct iwl_bt_coex_ci_cmd*,int *,int) ;
 int FUNC_7 (int *,struct iwl_bt_coex_ci_cmd*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_6)
{
 struct iwl_bt_iterator_data VAR_7 = {
  .mvm = VAR_6,
  .notif = &VAR_6->last_bt_notif,
 };
 struct iwl_bt_coex_ci_cmd VAR_8 = {};
 u8 VAR_9;


 if (FUNC_10(VAR_6->bt_force_ant_mode != VAR_1))
  return;

 FUNC_8();
 FUNC_3(
     VAR_6->hw, VAR_2,
     VAR_5, &VAR_7);

 FUNC_4(VAR_6, &VAR_7);

 if (VAR_7.primary) {
  struct ieee80211_chanctx_conf *VAR_10 = VAR_7.primary;
  if (FUNC_1(!VAR_10->def.chan)) {
   FUNC_9();
   return;
  }

  if (VAR_10->def.width < VAR_3) {
   VAR_9 = 0;
  } else {
   if (VAR_10->def.center_freq1 >
       VAR_10->def.chan->center_freq)
    VAR_9 = 2;
   else
    VAR_9 = 1;
  }

  VAR_8.bt_primary_ci =
   VAR_4[VAR_10->def.chan->hw_value][VAR_9];
  VAR_8.primary_ch_phy_id =
   FUNC_2(*((u16 *)VAR_7.primary->drv_priv));
 }

 if (VAR_7.secondary) {
  struct ieee80211_chanctx_conf *VAR_11 = VAR_7.secondary;
  if (FUNC_1(!VAR_7.secondary->def.chan)) {
   FUNC_9();
   return;
  }

  if (VAR_11->def.width < VAR_3) {
   VAR_9 = 0;
  } else {
   if (VAR_11->def.center_freq1 >
       VAR_11->def.chan->center_freq)
    VAR_9 = 2;
   else
    VAR_9 = 1;
  }

  VAR_8.bt_secondary_ci =
   VAR_4[VAR_11->def.chan->hw_value][VAR_9];
  VAR_8.secondary_ch_phy_id =
   FUNC_2(*((u16 *)VAR_7.secondary->drv_priv));
 }

 FUNC_9();


 if (FUNC_6(&VAR_8, &VAR_6->last_bt_ci_cmd, sizeof(VAR_8))) {
  if (FUNC_5(VAR_6, VAR_0, 0,
      sizeof(VAR_8), &VAR_8))
   FUNC_0(VAR_6, "Failed to send BT_CI cmd\n");
  FUNC_7(&VAR_6->last_bt_ci_cmd, &VAR_8, sizeof(VAR_8));
 }
}
