
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct cfg80211_ftm_responder_stats {int total_duration_ms; int out_of_window_triggers_num; int reschedule_requests_num; int unknown_triggers_num; int non_asap_num; int asap_num; int failed_num; int partial_num; int success_num; } ;
struct iwl_mvm {struct cfg80211_ftm_responder_stats ftm_resp_stats; } ;
struct iwl_ftm_responder_stats {int success_ftm; int ftm_per_burst; int duration; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct iwl_rx_packet* FUNC_1 (struct iwl_rx_cmd_buffer*) ;

void FUNC_2(struct iwl_mvm *VAR_7,
     struct iwl_rx_cmd_buffer *VAR_8)
{
 struct iwl_rx_packet *VAR_9 = FUNC_1(VAR_8);
 struct iwl_ftm_responder_stats *VAR_10 = (void *)VAR_9->data;
 struct cfg80211_ftm_responder_stats *VAR_11 = &VAR_7->ftm_resp_stats;
 u32 VAR_12 = FUNC_0(VAR_10->flags);

 if (VAR_10->success_ftm == VAR_10->ftm_per_burst)
  VAR_11->success_num++;
 else if (VAR_10->success_ftm >= 2)
  VAR_11->partial_num++;
 else
  VAR_11->failed_num++;

 if ((VAR_12 & VAR_0) &&
     (VAR_12 & VAR_1))
  VAR_11->asap_num++;

 if (VAR_12 & VAR_4)
  VAR_11->non_asap_num++;

 VAR_11->total_duration_ms += FUNC_0(VAR_10->duration) / VAR_6;

 if (VAR_12 & VAR_5)
  VAR_11->unknown_triggers_num++;

 if (VAR_12 & VAR_2)
  VAR_11->reschedule_requests_num++;

 if (VAR_12 & VAR_3)
  VAR_11->out_of_window_triggers_num++;
}
