
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int csa_countdown; int ap_ibss_active; int id; int time_event_data; } ;
struct iwl_mvm {int mutex; TYPE_1__* fw; scalar_t__ p2p_device_vif; scalar_t__ ap_last_beacon_gp2; scalar_t__ csa_tx_block_bcn_timeout; int csa_tx_blocked_vif; int csa_vif; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,scalar_t__,int,int *) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_mvm_vif*,int *) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_11 (struct iwl_mvm*,int,int ) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_14 (struct ieee80211_vif*) ;
 int FUNC_15 (struct iwl_mvm_vif*,int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct ieee80211_vif* FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_3,
     struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_3);
 struct iwl_mvm_vif *VAR_6 = FUNC_14(VAR_4);

 FUNC_8(VAR_5, VAR_4);

 FUNC_16(&VAR_5->mutex);


 if (FUNC_18(VAR_5->csa_vif) == VAR_4) {
  FUNC_9(VAR_5, VAR_6,
       &VAR_6->time_event_data);
  FUNC_1(VAR_5->csa_vif, ((void*)0));
  VAR_6->csa_countdown = 0;
 }

 if (FUNC_18(VAR_5->csa_tx_blocked_vif) == VAR_4) {
  FUNC_1(VAR_5->csa_tx_blocked_vif, ((void*)0));
  VAR_5->csa_tx_block_bcn_timeout = 0;
 }

 VAR_6->ap_ibss_active = 0;
 VAR_5->ap_last_beacon_gp2 = 0;

 if (VAR_4->type == VAR_2 && !VAR_4->p2p) {
  FUNC_15(VAR_6, 0,
         VAR_1);
  FUNC_11(VAR_5, 0, VAR_6->id);
 }

 FUNC_4(VAR_5);


 if (VAR_4->p2p && VAR_5->p2p_device_vif)
  FUNC_5(VAR_5, VAR_5->p2p_device_vif, 0, ((void*)0));

 FUNC_13(VAR_5, 0, ((void*)0));
 if (!FUNC_2(&VAR_5->fw->ucode_capa, VAR_0))
  FUNC_10(VAR_5, VAR_4);
 FUNC_12(VAR_5, VAR_4);
 if (FUNC_2(&VAR_5->fw->ucode_capa, VAR_0))
  FUNC_10(VAR_5, VAR_4);
 FUNC_3(VAR_5, VAR_4);

 FUNC_7(VAR_5);

 FUNC_6(VAR_5, VAR_4);

 FUNC_17(&VAR_5->mutex);
}
