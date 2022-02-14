
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int bcast_sta; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct iwl_mvm*,int *,int ,int ,int ) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(&VAR_1->mutex);

 return FUNC_1(VAR_1, &VAR_3->bcast_sta, 0,
     FUNC_0(VAR_2),
     VAR_0);
}
