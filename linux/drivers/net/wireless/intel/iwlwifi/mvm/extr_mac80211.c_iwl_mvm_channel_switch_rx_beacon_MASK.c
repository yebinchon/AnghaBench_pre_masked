
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {scalar_t__ csa_count; int csa_misbehave; int id; int color; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_chan_switch_te_cmd {scalar_t__ cs_count; scalar_t__ cs_mode; int tsf; int action; int mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel_switch {scalar_t__ count; scalar_t__ block_tx; int timestamp; } ;
typedef int cmd ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct ieee80211_vif*,int) ;
 int FUNC_8 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,int ,int ,int,struct iwl_chan_switch_te_cmd*) ;
 struct iwl_mvm_vif* FUNC_10 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_5,
          struct ieee80211_vif *VAR_6,
          struct ieee80211_channel_switch *VAR_7)
{
 struct iwl_mvm *VAR_8 = FUNC_2(VAR_5);
 struct iwl_mvm_vif *VAR_9 = FUNC_10(VAR_6);
 struct iwl_chan_switch_te_cmd VAR_10 = {
  .mac_id = FUNC_5(FUNC_0(VAR_9->id,
         VAR_9->color)),
  .action = FUNC_5(VAR_2),
  .tsf = FUNC_5(VAR_7->timestamp),
  .cs_count = VAR_7->count,
  .cs_mode = VAR_7->block_tx,
 };

 if (!FUNC_6(&VAR_8->fw->ucode_capa, VAR_3))
  return;

 if (VAR_7->count >= VAR_9->csa_count && VAR_7->block_tx) {
  if (VAR_9->csa_misbehave) {

   FUNC_8(VAR_5, VAR_6);
   FUNC_7(VAR_6, 0);
   VAR_9->csa_misbehave = 0;
   return;
  }
  VAR_9->csa_misbehave = 1;
 }
 VAR_9->csa_count = VAR_7->count;

 FUNC_1(VAR_8, "Modify CSA on mac %d\n", VAR_9->id);

 FUNC_3(FUNC_9(VAR_8,
         FUNC_4(VAR_4,
          VAR_0),
         VAR_1, sizeof(VAR_10), &VAR_10));
}
