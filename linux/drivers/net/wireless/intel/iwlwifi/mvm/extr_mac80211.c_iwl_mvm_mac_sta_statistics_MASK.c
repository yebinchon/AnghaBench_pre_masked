
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct station_info {int filled; scalar_t__ rx_beacon_signal_avg; scalar_t__ rx_beacon; scalar_t__ signal_avg; } ;
struct TYPE_4__ {scalar_t__ avg_signal; scalar_t__ accu_num_beacons; scalar_t__ num_beacons; } ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; TYPE_2__ beacon_stats; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; scalar_t__ avg_energy; } ;
struct iwl_mvm {int mutex; } ;
struct TYPE_3__ {int assoc; } ;
struct ieee80211_vif {int driver_flags; TYPE_1__ bss_conf; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,int) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_4,
           struct ieee80211_vif *VAR_5,
           struct ieee80211_sta *VAR_6,
           struct station_info *VAR_7)
{
 struct iwl_mvm *VAR_8 = FUNC_1(VAR_4);
 struct iwl_mvm_vif *VAR_9 = FUNC_4(VAR_5);
 struct iwl_mvm_sta *VAR_10 = FUNC_3(VAR_6);

 if (VAR_10->avg_energy) {
  VAR_7->signal_avg = VAR_10->avg_energy;
  VAR_7->filled |= FUNC_0(VAR_3);
 }


 if (!(VAR_5->driver_flags & VAR_0))
  return;

 if (!VAR_5->bss_conf.assoc)
  return;

 FUNC_5(&VAR_8->mutex);

 if (VAR_9->ap_sta_id != VAR_10->sta_id)
  goto unlock;

 if (FUNC_2(VAR_8, 0))
  goto unlock;

 VAR_7->rx_beacon = VAR_9->beacon_stats.num_beacons +
      VAR_9->beacon_stats.accu_num_beacons;
 VAR_7->filled |= FUNC_0(VAR_1);
 if (VAR_9->beacon_stats.avg_signal) {

  VAR_7->rx_beacon_signal_avg = VAR_9->beacon_stats.avg_signal;
  VAR_7->filled |= FUNC_0(VAR_2);
 }
 unlock:
 FUNC_6(&VAR_8->mutex);
}
