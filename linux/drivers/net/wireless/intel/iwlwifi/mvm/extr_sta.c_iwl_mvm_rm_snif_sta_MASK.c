
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sta_id; } ;
struct iwl_mvm {TYPE_1__ snif_sta; int snif_queue; int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,int *,int ,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_1->mutex);

 FUNC_1(VAR_1, ((void*)0), VAR_1->snif_queue, VAR_0, 0);
 VAR_3 = FUNC_2(VAR_1, VAR_1->snif_sta.sta_id);
 if (VAR_3)
  FUNC_0(VAR_1, "Failed sending remove station\n");

 return VAR_3;
}
