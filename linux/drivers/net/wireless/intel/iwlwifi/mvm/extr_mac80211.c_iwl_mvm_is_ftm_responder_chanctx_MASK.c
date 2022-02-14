
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_ftm_responder_iter_data {int responder; struct ieee80211_chanctx_conf* ctx; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_chanctx_conf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mvm_ftm_responder_iter_data*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct iwl_mvm *VAR_2,
          struct ieee80211_chanctx_conf *VAR_3)
{
 struct iwl_mvm_ftm_responder_iter_data VAR_4 = {
  .responder = 0,
  .ctx = VAR_3,
 };

 FUNC_0(VAR_2->hw,
     VAR_0,
     VAR_1,
     &VAR_4);
 return VAR_4.responder;
}
