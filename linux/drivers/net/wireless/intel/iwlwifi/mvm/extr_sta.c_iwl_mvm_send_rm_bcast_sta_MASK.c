
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_1__ bcast_sta; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_4(&VAR_0->mutex);

 FUNC_1(VAR_0, VAR_1);

 VAR_3 = FUNC_2(VAR_0, VAR_2->bcast_sta.sta_id);
 if (VAR_3)
  FUNC_0(VAR_0, "Failed sending remove station\n");
 return VAR_3;
}
