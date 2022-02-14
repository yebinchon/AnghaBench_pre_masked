
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_ftm_responder_iter_data {scalar_t__ ctx; int responder; } ;
struct TYPE_2__ {scalar_t__ ftmr_params; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; int chanctx_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 *VAR_2,
            struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_ftm_responder_iter_data *VAR_4 = VAR_1;

 if (FUNC_0(VAR_3->chanctx_conf) == VAR_4->ctx &&
     VAR_3->type == VAR_0 && VAR_3->bss_conf.ftmr_params)
  VAR_4->responder = 1;
}
