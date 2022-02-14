
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int system_pm_mode; } ;
struct iwl_mvm {int fwrt; struct iwl_trans* trans; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_wowlan {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*,struct cfg80211_wowlan*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_mvm*,int) ;
 int FUNC_4 (struct iwl_trans*) ;

int FUNC_5(struct ieee80211_hw *VAR_1, struct cfg80211_wowlan *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_1);
 struct iwl_trans *VAR_4 = VAR_3->trans;
 int VAR_5;

 FUNC_3(VAR_3, 1);

 FUNC_2(&VAR_3->fwrt);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->system_pm_mode = VAR_0;

 return FUNC_1(VAR_1, VAR_2, 0);
}
