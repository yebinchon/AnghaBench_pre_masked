
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int monitor_active; int ps_disabled; int ap_ibss_active; int csa_countdown; int * phy_ctxt; int time_event_data; } ;
struct iwl_mvm {TYPE_1__* fw; int csa_tx_blocked_vif; int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_chanctx_conf {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_vif*,int) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_mvm_vif*,int *) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mvm*,int,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct ieee80211_chanctx_conf *VAR_3,
        bool VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_8(VAR_2);
 struct ieee80211_vif *VAR_6 = ((void*)0);

 FUNC_9(&VAR_1->mutex);

 FUNC_5(VAR_1, VAR_5, &VAR_5->time_event_data);

 switch (VAR_2->type) {
 case 131:
  goto out;
 case 129:
  VAR_5->monitor_active = 0;
  VAR_5->ps_disabled = 0;
  FUNC_6(VAR_1, VAR_2);
  break;
 case 130:

  if (!VAR_4 || !VAR_5->ap_ibss_active)
   goto out;

  VAR_5->csa_countdown = 0;


  FUNC_3(VAR_1, VAR_5, 1);


  FUNC_10(VAR_1->csa_tx_blocked_vif, VAR_2);

  VAR_5->ap_ibss_active = 0;
  break;
 case 128:
  if (!VAR_4)
   break;

  VAR_6 = VAR_2;

  if (!FUNC_0(&VAR_1->fw->ucode_capa,
     VAR_0))
   FUNC_2(VAR_1, VAR_2, 1, ((void*)0));
  break;
 default:
  break;
 }

 FUNC_7(VAR_1, 0, VAR_6);
 FUNC_1(VAR_1, VAR_2);

out:
 VAR_5->phy_ctxt = ((void*)0);
 FUNC_4(VAR_1);
}
