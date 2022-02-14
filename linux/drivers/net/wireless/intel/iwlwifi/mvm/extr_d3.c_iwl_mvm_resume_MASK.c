
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int fwrt; TYPE_1__* trans; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int system_pm_mode; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*) ;

int FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 VAR_2->trans->system_pm_mode = VAR_0;

 FUNC_3(VAR_2);

 FUNC_1(&VAR_2->fwrt);

 return VAR_3;
}
