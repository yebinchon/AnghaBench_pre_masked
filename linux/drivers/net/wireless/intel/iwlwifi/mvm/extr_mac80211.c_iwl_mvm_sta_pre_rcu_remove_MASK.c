
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {size_t sta_id; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ieee80211_sta* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2,
           struct ieee80211_sta *VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_1(VAR_1);
 struct iwl_mvm_sta *VAR_5 = FUNC_2(VAR_3);
 FUNC_3(&VAR_4->mutex);
 if (VAR_3 == FUNC_5(VAR_4->fw_id_to_mac_id[VAR_5->sta_id]))
  FUNC_6(VAR_4->fw_id_to_mac_id[VAR_5->sta_id],
       FUNC_0(-VAR_0));

 FUNC_4(&VAR_4->mutex);
}
