
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mvm_statistics_general_v8 {int * beacon_average_energy; int * beacon_counter; } ;
struct mvm_statistics_general {int * beacon_average_energy; int * beacon_counter; } ;
struct TYPE_6__ {int ave_beacon_signal; int bt_coex_min_thold; int bt_coex_max_thold; int last_bt_coex_event; int last_cqm_event; } ;
struct TYPE_5__ {int avg_signal; void* num_beacons; } ;
struct iwl_mvm_vif {size_t id; TYPE_3__ bf_data; TYPE_2__ beacon_stats; } ;
struct iwl_mvm_stat_data {int beacon_filter_average_energy; struct mvm_statistics_general_v8* general; int mac_id; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_4__ {int cqm_rssi_thold; int cqm_rssi_hyst; } ;
struct ieee80211_vif {scalar_t__ type; int driver_flags; TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ieee80211_vif*,int ,int,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_7, u8 *VAR_8,
      struct ieee80211_vif *VAR_9)
{
 struct iwl_mvm_stat_data *VAR_10 = VAR_7;
 struct iwl_mvm *VAR_11 = VAR_10->mvm;
 int VAR_12 = -VAR_10->beacon_filter_average_energy;
 int VAR_13;
 int VAR_14 = VAR_9->bss_conf.cqm_rssi_thold;
 int VAR_15 = VAR_9->bss_conf.cqm_rssi_hyst;
 u16 VAR_16 = FUNC_5(VAR_10->mac_id);
 struct iwl_mvm_vif *VAR_17 = FUNC_4(VAR_9);
 u16 VAR_18 = VAR_17->id;





 if (FUNC_3(VAR_11)) {
  struct mvm_statistics_general *VAR_19 =
   VAR_10->general;

  VAR_17->beacon_stats.num_beacons =
   FUNC_5(VAR_19->beacon_counter[VAR_18]);
  VAR_17->beacon_stats.avg_signal =
   -VAR_19->beacon_average_energy[VAR_18];
 } else {
  struct mvm_statistics_general_v8 *VAR_20 =
   VAR_10->general;

  VAR_17->beacon_stats.num_beacons =
   FUNC_5(VAR_20->beacon_counter[VAR_18]);
  VAR_17->beacon_stats.avg_signal =
   -VAR_20->beacon_average_energy[VAR_18];
 }

 if (VAR_17->id != VAR_16)
  return;

 if (VAR_9->type != VAR_4)
  return;

 if (VAR_12 == 0) {
  FUNC_0(VAR_11, "RSSI is 0 - skip signal based decision\n");
  return;
 }

 VAR_17->bf_data.ave_beacon_signal = VAR_12;


 if (VAR_17->bf_data.bt_coex_min_thold !=
     VAR_17->bf_data.bt_coex_max_thold) {
  VAR_13 = VAR_17->bf_data.last_bt_coex_event;
  if (VAR_12 > VAR_17->bf_data.bt_coex_max_thold &&
      (VAR_13 <= VAR_17->bf_data.bt_coex_min_thold ||
       VAR_13 == 0)) {
   VAR_17->bf_data.last_bt_coex_event = VAR_12;
   FUNC_0(VAR_11, "cqm_iterator bt coex high %d\n",
         VAR_12);
   FUNC_2(VAR_11, VAR_9, VAR_5);
  } else if (VAR_12 < VAR_17->bf_data.bt_coex_min_thold &&
      (VAR_13 >= VAR_17->bf_data.bt_coex_max_thold ||
       VAR_13 == 0)) {
   VAR_17->bf_data.last_bt_coex_event = VAR_12;
   FUNC_0(VAR_11, "cqm_iterator bt coex low %d\n",
         VAR_12);
   FUNC_2(VAR_11, VAR_9, VAR_6);
  }
 }

 if (!(VAR_9->driver_flags & VAR_1))
  return;


 VAR_13 = VAR_17->bf_data.last_cqm_event;
 if (VAR_14 && VAR_12 < VAR_14 && (VAR_13 == 0 ||
         VAR_12 < VAR_13 - VAR_15)) {
  VAR_17->bf_data.last_cqm_event = VAR_12;
  FUNC_0(VAR_11, "cqm_iterator cqm low %d\n",
        VAR_12);
  FUNC_1(
   VAR_9,
   VAR_3,
   VAR_12,
   VAR_0);
 } else if (VAR_12 > VAR_14 &&
     (VAR_13 == 0 || VAR_12 > VAR_13 + VAR_15)) {
  VAR_17->bf_data.last_cqm_event = VAR_12;
  FUNC_0(VAR_11, "cqm_iterator cqm high %d\n",
        VAR_12);
  FUNC_1(
   VAR_9,
   VAR_2,
   VAR_12,
   VAR_0);
 }
}
