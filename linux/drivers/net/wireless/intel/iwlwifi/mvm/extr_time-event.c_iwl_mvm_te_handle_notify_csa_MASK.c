
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_time_event_notif {int status; } ;
struct iwl_mvm_vif {int csa_failed; int csa_work; } ;
struct iwl_mvm_time_event_data {struct ieee80211_vif* vif; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int type; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_vif*,int) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,char*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_mvm_time_event_data*) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;

__attribute__((used)) static void
FUNC_9(struct iwl_mvm *VAR_0,
        struct iwl_mvm_time_event_data *VAR_1,
        struct iwl_time_event_notif *VAR_2)
{
 struct ieee80211_vif *VAR_3 = VAR_1->vif;
 struct iwl_mvm_vif *VAR_4 = FUNC_8(VAR_3);

 if (!VAR_2->status)
  FUNC_0(VAR_0, "CSA time event failed to start\n");

 switch (VAR_1->vif->type) {
 case 129:
  if (!VAR_2->status)
   VAR_4->csa_failed = 1;
  FUNC_6(VAR_0);
  break;
 case 128:
  if (!VAR_2->status) {
   FUNC_4(VAR_0, VAR_3,
      "CSA TE failed to start");
   break;
  }
  FUNC_5(VAR_0, VAR_1->vif);
  FUNC_2(&VAR_4->csa_work);
  FUNC_3(VAR_1->vif, 1);
  break;
 default:

  FUNC_1(1);
  break;
 }


 FUNC_7(VAR_0, VAR_1);
}
