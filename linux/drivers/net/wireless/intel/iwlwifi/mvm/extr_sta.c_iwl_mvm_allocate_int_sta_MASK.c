
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_int_sta {size_t sta_id; int type; int tfd_queue_msk; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int status; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum iwl_sta_type { ____Placeholder_iwl_sta_type } iwl_sta_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (struct iwl_mvm*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct iwl_mvm *VAR_4,
        struct iwl_mvm_int_sta *VAR_5,
        u32 VAR_6, enum nl80211_iftype VAR_7,
        enum iwl_sta_type VAR_8)
{
 if (!FUNC_4(VAR_3, &VAR_4->status) ||
     VAR_5->sta_id == VAR_2) {
  VAR_5->sta_id = FUNC_2(VAR_4, VAR_7);
  if (FUNC_1(VAR_5->sta_id == VAR_2))
   return -VAR_1;
 }

 VAR_5->tfd_queue_msk = VAR_6;
 VAR_5->type = VAR_8;


 FUNC_3(VAR_4->fw_id_to_mac_id[VAR_5->sta_id], FUNC_0(-VAR_0));
 return 0;
}
