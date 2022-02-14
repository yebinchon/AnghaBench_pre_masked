
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int addr; int tdls; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ieee80211_sta* FUNC_6 (int ,int ) ;

void FUNC_7(struct iwl_mvm *VAR_3)
{
 struct ieee80211_sta *VAR_4;
 struct iwl_mvm_sta *VAR_5;
 int VAR_6;

 FUNC_4(&VAR_3->mutex);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->fw_id_to_mac_id); VAR_6++) {
  VAR_4 = FUNC_6(VAR_3->fw_id_to_mac_id[VAR_6],
      FUNC_5(&VAR_3->mutex));
  if (!VAR_4 || FUNC_1(VAR_4) || !VAR_4->tdls)
   continue;

  VAR_5 = FUNC_3(VAR_4);
  FUNC_2(VAR_5->vif, VAR_4->addr,
    VAR_1,
    VAR_2,
    VAR_0);
 }
}
