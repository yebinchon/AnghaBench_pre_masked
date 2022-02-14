
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int disable_tx; int lock; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (int ,struct ieee80211_sta*,int) ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_sta*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iwl_mvm *VAR_0,
          struct ieee80211_sta *VAR_1,
          bool VAR_2)
{
 struct iwl_mvm_sta *VAR_3 = FUNC_1(VAR_1);

 FUNC_3(&VAR_3->lock);

 if (VAR_3->disable_tx == VAR_2) {
  FUNC_4(&VAR_3->lock);
  return;
 }

 VAR_3->disable_tx = VAR_2;


 FUNC_0(VAR_0->hw, VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_3, VAR_2);

 FUNC_4(&VAR_3->lock);
}
