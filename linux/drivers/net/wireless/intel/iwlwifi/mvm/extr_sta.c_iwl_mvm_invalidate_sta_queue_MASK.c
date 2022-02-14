
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct iwl_mvm_sta {unsigned long tid_disable_agg; int tfd_queue_msk; int sta_id; int mac_id_n_color; } ;
struct iwl_mvm_add_sta_cmd {int tid_disable_tx; void* tfd_queue_msk; int modify_mask; int add_modify; int sta_id; void* mac_id_n_color; } ;
struct iwl_mvm {int * fw_id_to_mac_id; TYPE_1__* queue_info; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {size_t ra_sta_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_sta*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*,int ,int ,struct iwl_mvm_add_sta_cmd*,int *) ;
 struct iwl_mvm_sta* FUNC_8 (struct ieee80211_sta*) ;
 struct ieee80211_sta* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct iwl_mvm *VAR_7, int VAR_8,
     unsigned long VAR_9,
     bool VAR_10)
{
 struct iwl_mvm_add_sta_cmd VAR_11 = {};
 struct ieee80211_sta *VAR_12;
 struct iwl_mvm_sta *VAR_13;
 u32 VAR_14;
 u8 VAR_15;

 if (FUNC_1(FUNC_6(VAR_7)))
  return -VAR_2;

 VAR_15 = VAR_7->queue_info[VAR_8].ra_sta_id;

 FUNC_10();

 VAR_12 = FUNC_9(VAR_7->fw_id_to_mac_id[VAR_15]);

 if (FUNC_2(FUNC_0(VAR_12))) {
  FUNC_11();
  return -VAR_2;
 }

 VAR_13 = FUNC_8(VAR_12);

 VAR_13->tid_disable_agg |= VAR_9;

 VAR_11.mac_id_n_color = FUNC_4(VAR_13->mac_id_n_color);
 VAR_11.sta_id = VAR_13->sta_id;
 VAR_11.add_modify = VAR_3;
 VAR_11.modify_mask = VAR_4;
 if (VAR_9)
  VAR_11.modify_mask |= VAR_6;
 if (VAR_10)
  VAR_11.modify_mask |= VAR_5;
 VAR_11.tfd_queue_msk = FUNC_4(VAR_13->tfd_queue_msk);
 VAR_11.tid_disable_tx = FUNC_3(VAR_13->tid_disable_agg);

 FUNC_11();


 VAR_14 = VAR_1;
 return FUNC_7(VAR_7, VAR_0,
        FUNC_5(VAR_7),
        &VAR_11, &VAR_14);
}
