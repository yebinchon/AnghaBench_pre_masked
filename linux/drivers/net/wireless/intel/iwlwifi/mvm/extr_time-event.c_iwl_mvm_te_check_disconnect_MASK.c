
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int csa_bcn_pending; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {scalar_t__ dtim_period; scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 int FUNC_0 (struct iwl_mvm*,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,char const*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static bool FUNC_3(struct iwl_mvm *VAR_1,
     struct ieee80211_vif *VAR_2,
     const char *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_2(VAR_2);

 if (VAR_2->type != VAR_0)
  return 0;

 if (!VAR_4->csa_bcn_pending && VAR_2->bss_conf.assoc &&
     VAR_2->bss_conf.dtim_period)
  return 0;
 if (VAR_3)
  FUNC_0(VAR_1, "%s\n", VAR_3);

 FUNC_1(VAR_1, VAR_2, VAR_3);
 return 1;
}
