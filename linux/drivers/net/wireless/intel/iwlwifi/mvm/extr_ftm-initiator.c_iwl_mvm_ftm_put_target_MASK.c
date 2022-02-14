
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tof_range_req_ap_entry {int initiator_ap_flags; int ftmr_max_retries; int num_of_bursts; int samples_per_burst; int burst_period; int bssid; int ctrl_ch_position; int bandwidth; int channel_num; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {scalar_t__ request_civicloc; scalar_t__ request_lci; scalar_t__ asap; int ftmr_retries; int num_bursts_exp; int ftms_per_burst; int burst_period; } ;
struct cfg80211_pmsr_request_peer {TYPE_1__ ftm; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,struct cfg80211_pmsr_request_peer*,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_11,
      struct cfg80211_pmsr_request_peer *VAR_12,
      struct iwl_tof_range_req_ap_entry *VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_12, &VAR_13->channel_num,
      &VAR_13->bandwidth,
      &VAR_13->ctrl_ch_position);
 if (VAR_14)
  return VAR_14;

 FUNC_4(VAR_13->bssid, VAR_12->addr, VAR_5);
 VAR_13->burst_period =
  FUNC_1(VAR_12->ftm.burst_period);
 VAR_13->samples_per_burst = VAR_12->ftm.ftms_per_burst;
 VAR_13->num_of_bursts = VAR_12->ftm.num_bursts_exp;
 VAR_13->ftmr_max_retries = VAR_12->ftm.ftmr_retries;
 VAR_13->initiator_ap_flags = FUNC_2(0);

 if (VAR_12->ftm.asap)
  FUNC_0(VAR_2);

 if (VAR_12->ftm.request_lci)
  FUNC_0(VAR_10);

 if (VAR_12->ftm.request_civicloc)
  FUNC_0(VAR_3);

 if (VAR_7)
  FUNC_0(VAR_4);

 if (VAR_6 == VAR_9)
  FUNC_0(VAR_1);
 else if (VAR_6 == VAR_8)
  FUNC_0(VAR_0);

 return 0;
}
