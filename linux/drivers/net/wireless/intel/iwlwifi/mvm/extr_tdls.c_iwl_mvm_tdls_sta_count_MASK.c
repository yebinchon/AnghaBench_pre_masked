
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int tdls; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ieee80211_sta* FUNC_5 (int ,int ) ;

int FUNC_6(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct ieee80211_sta *VAR_2;
 struct iwl_mvm_sta *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 FUNC_3(&VAR_0->mutex);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0->fw_id_to_mac_id); VAR_5++) {
  VAR_2 = FUNC_5(VAR_0->fw_id_to_mac_id[VAR_5],
      FUNC_4(&VAR_0->mutex));
  if (!VAR_2 || FUNC_1(VAR_2) || !VAR_2->tdls)
   continue;

  if (VAR_1) {
   VAR_3 = FUNC_2(VAR_2);
   if (VAR_3->vif != VAR_1)
    continue;
  }

  VAR_4++;
 }

 return VAR_4;
}
