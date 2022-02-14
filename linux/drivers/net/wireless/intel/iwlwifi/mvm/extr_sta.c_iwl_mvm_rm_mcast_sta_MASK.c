
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_id; } ;
struct iwl_mvm_vif {TYPE_1__ mcast_sta; int cab_queue; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,int *,int ,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,TYPE_1__*,int,int ) ;
 int FUNC_3 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_5(&VAR_0->mutex);

 FUNC_2(VAR_0, &VAR_2->mcast_sta, 1, 0);

 FUNC_1(VAR_0, ((void*)0), VAR_2->cab_queue, 0, 0);

 VAR_3 = FUNC_3(VAR_0, VAR_2->mcast_sta.sta_id);
 if (VAR_3)
  FUNC_0(VAR_0, "Failed sending remove station\n");

 return VAR_3;
}
