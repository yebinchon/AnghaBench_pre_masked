
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int ftm_responder; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*) ;

void FUNC_1(struct iwl_mvm *VAR_0,
       struct ieee80211_vif *VAR_1)
{
 if (!VAR_1->bss_conf.ftm_responder)
  return;

 FUNC_0(VAR_0, VAR_1);
}
