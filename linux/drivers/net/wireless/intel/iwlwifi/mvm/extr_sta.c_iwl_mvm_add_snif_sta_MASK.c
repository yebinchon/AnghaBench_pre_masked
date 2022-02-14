
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm {int snif_queue; int snif_sta; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,int ,int ,int *,int *,int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_1->mutex);

 return FUNC_0(VAR_1, VAR_3->id, VAR_3->color,
           &VAR_1->snif_sta, &VAR_1->snif_queue,
           VAR_0);
}
