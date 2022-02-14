
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tof_range_req_ap_entry_v2 {int algo_type; int location_req; int enable_dyn_ack; int asap_mode; int retries_per_sample; scalar_t__ measure_type; int num_of_bursts; int samples_per_burst; int burst_period; int bssid; int ctrl_ch_position; int bandwidth; int channel_num; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {scalar_t__ request_civicloc; scalar_t__ request_lci; int asap; int ftmr_retries; int num_bursts_exp; int ftms_per_burst; int burst_period; } ;
struct cfg80211_pmsr_request_peer {TYPE_1__ ftm; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,struct cfg80211_pmsr_request_peer*,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct iwl_mvm *VAR_5,
     struct cfg80211_pmsr_request_peer *VAR_6,
     struct iwl_tof_range_req_ap_entry_v2 *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_7->channel_num,
      &VAR_7->bandwidth,
      &VAR_7->ctrl_ch_position);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7->bssid, VAR_6->addr, VAR_0);
 VAR_7->burst_period =
  FUNC_0(VAR_6->ftm.burst_period);
 VAR_7->samples_per_burst = VAR_6->ftm.ftms_per_burst;
 VAR_7->num_of_bursts = VAR_6->ftm.num_bursts_exp;
 VAR_7->measure_type = 0;
 VAR_7->retries_per_sample = VAR_6->ftm.ftmr_retries;
 VAR_7->asap_mode = VAR_6->ftm.asap;
 VAR_7->enable_dyn_ack = VAR_2;

 if (VAR_6->ftm.request_lci)
  VAR_7->location_req |= VAR_4;
 if (VAR_6->ftm.request_civicloc)
  VAR_7->location_req |= VAR_3;

 VAR_7->algo_type = VAR_1;

 return 0;
}
