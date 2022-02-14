
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct iwl_mvm_vif {int ap_ibss_active; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {struct iwl_mvm_phy_ctxt* phy_ctxts; int mutex; } ;
struct TYPE_2__ {int ftm_responder; struct ieee80211_ftm_responder_params* ftmr_params; } ;
struct ieee80211_vif {scalar_t__ type; int chanctx_conf; scalar_t__ p2p; TYPE_1__ bss_conf; } ;
struct ieee80211_ftm_responder_params {int dummy; } ;
struct ieee80211_chanctx_conf {int def; int rx_chains_dynamic; int rx_chains_static; scalar_t__ drv_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int *) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_ftm_responder_params*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_phy_ctxt*,int *,int ,int ) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;
 struct ieee80211_chanctx_conf* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct iwl_mvm *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_5(VAR_4);
 struct ieee80211_ftm_responder_params *VAR_6;
 struct ieee80211_chanctx_conf VAR_7, *VAR_8;
 u16 *VAR_9;
 struct iwl_mvm_phy_ctxt *VAR_10;
 int VAR_11;

 VAR_6 = VAR_4->bss_conf.ftmr_params;

 FUNC_6(&VAR_3->mutex);

 if (FUNC_1(!VAR_4->bss_conf.ftm_responder))
  return -VAR_0;

 if (VAR_4->p2p || VAR_4->type != VAR_2 ||
     !VAR_5->ap_ibss_active) {
  FUNC_0(VAR_3, "Cannot start responder, not in AP mode\n");
  return -VAR_1;
 }

 FUNC_8();
 VAR_8 = FUNC_7(VAR_4->chanctx_conf);



 VAR_7 = *VAR_8;
 VAR_9 = (u16 *)VAR_8->drv_priv;
 FUNC_9();

 VAR_10 = &VAR_3->phy_ctxts[*VAR_9];
 VAR_11 = FUNC_4(VAR_3, VAR_10, &VAR_7.def,
           VAR_7.rx_chains_static,
           VAR_7.rx_chains_dynamic);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_4, &VAR_7.def);
 if (VAR_11)
  return VAR_11;

 if (VAR_6)
  VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_6);

 return VAR_11;
}
