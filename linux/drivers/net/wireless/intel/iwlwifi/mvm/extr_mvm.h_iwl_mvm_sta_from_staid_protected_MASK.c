
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int *) ;
 struct ieee80211_sta* FUNC_4 (int ,int ) ;

__attribute__((used)) static inline struct iwl_mvm_sta *
FUNC_5(struct iwl_mvm *VAR_0, u8 VAR_1)
{
 struct ieee80211_sta *VAR_2;

 if (VAR_1 >= FUNC_0(VAR_0->fw_id_to_mac_id))
  return ((void*)0);

 VAR_2 = FUNC_4(VAR_0->fw_id_to_mac_id[VAR_1],
     FUNC_3(&VAR_0->mutex));


 if (FUNC_1(VAR_2))
  return ((void*)0);

 return FUNC_2(VAR_2);
}
