
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0->mutex);

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
