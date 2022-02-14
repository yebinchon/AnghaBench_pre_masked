
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_rm_sta_cmd {size_t sta_id; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int,struct iwl_mvm_rm_sta_cmd*) ;
 int FUNC_2 (int *) ;
 struct ieee80211_sta* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_2, u8 VAR_3)
{
 struct ieee80211_sta *VAR_4;
 struct iwl_mvm_rm_sta_cmd VAR_5 = {
  .sta_id = VAR_3,
 };
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2->fw_id_to_mac_id[VAR_3],
     FUNC_2(&VAR_2->mutex));


 if (!VAR_4) {
  FUNC_0(VAR_2, "Invalid station id\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_1, 0,
       sizeof(VAR_5), &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2, "Failed to remove station. Id=%d\n", VAR_3);
  return VAR_6;
 }

 return 0;
}
