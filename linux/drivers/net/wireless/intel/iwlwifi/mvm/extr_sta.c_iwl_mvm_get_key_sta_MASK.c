
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_sta*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iwl_mvm_sta* FUNC_1 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 struct ieee80211_sta* FUNC_4 (int ,int ) ;

__attribute__((used)) static struct iwl_mvm_sta *FUNC_5(struct iwl_mvm *VAR_2,
            struct ieee80211_vif *VAR_3,
            struct ieee80211_sta *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_3);

 if (VAR_4)
  return FUNC_1(VAR_4);






 if (VAR_3->type == VAR_1 &&
     VAR_5->ap_sta_id != VAR_0) {
  u8 VAR_6 = VAR_5->ap_sta_id;

  VAR_4 = FUNC_4(VAR_2->fw_id_to_mac_id[VAR_6],
         FUNC_3(&VAR_2->mutex));






  if (FUNC_0(VAR_4))
   return ((void*)0);

  return FUNC_1(VAR_4);
 }

 return ((void*)0);
}
