
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_periodic_scan_complete {scalar_t__ status; scalar_t__ ebs_status; int time_after_last_iter; int last_schedule_iteration; int last_schedule_line; } ;
struct iwl_mvm {int scan_status; int last_ebs_successful; int scan_timeout_dwork; int hw; int sched_scan_pass_all; int mutex; TYPE_1__* fw; } ;
struct cfg80211_scan_info {int aborted; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int FUNC_0 (struct iwl_mvm*,char*,char*,int ,...) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,struct cfg80211_scan_info*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (int *) ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;

void FUNC_12(struct iwl_mvm *VAR_9,
      struct iwl_rx_cmd_buffer *VAR_10)
{
 struct iwl_rx_packet *VAR_11 = FUNC_11(VAR_10);
 struct iwl_periodic_scan_complete *VAR_12 = (void *)VAR_11->data;
 bool VAR_13 = (VAR_12->status == VAR_6);




 if (FUNC_2(FUNC_5(&VAR_9->fw->ucode_capa,
         VAR_7)))
  return;


 FUNC_10(&VAR_9->mutex);
 if (VAR_9->scan_status & VAR_3) {
  FUNC_2(VAR_9->scan_status & VAR_2);

  FUNC_0(VAR_9, "Scheduled scan %s, EBS status %s\n",
          VAR_13 ? "aborted" : "completed",
          FUNC_8(VAR_12->ebs_status));
  FUNC_0(VAR_9,
          "Last line %d, Last iteration %d, Time after last iteration %d\n",
          VAR_12->last_schedule_line,
          VAR_12->last_schedule_iteration,
          FUNC_3(VAR_12->time_after_last_iter));

  VAR_9->scan_status &= ~VAR_3;
 } else if (VAR_9->scan_status & VAR_2) {
  FUNC_0(VAR_9, "Regular scan %s, EBS status %s\n",
          VAR_13 ? "aborted" : "completed",
          FUNC_8(VAR_12->ebs_status));

  VAR_9->scan_status &= ~VAR_2;
 } else if (VAR_9->scan_status & VAR_1) {
  FUNC_2(VAR_9->scan_status & VAR_0);

  FUNC_0(VAR_9, "Scheduled scan %s, EBS status %s\n",
          VAR_13 ? "aborted" : "completed",
          FUNC_8(VAR_12->ebs_status));
  FUNC_0(VAR_9,
          "Last line %d, Last iteration %d, Time after last iteration %d (FW)\n",
          VAR_12->last_schedule_line,
          VAR_12->last_schedule_iteration,
          FUNC_3(VAR_12->time_after_last_iter));

  VAR_9->scan_status &= ~VAR_1;
  FUNC_7(VAR_9->hw);
  VAR_9->sched_scan_pass_all = VAR_8;
 } else if (VAR_9->scan_status & VAR_0) {
  struct cfg80211_scan_info VAR_14 = {
   .aborted = VAR_13,
  };

  FUNC_0(VAR_9, "Regular scan %s, EBS status %s (FW)\n",
          VAR_13 ? "aborted" : "completed",
          FUNC_8(VAR_12->ebs_status));

  VAR_9->scan_status &= ~VAR_0;
  FUNC_6(VAR_9->hw, &VAR_14);
  FUNC_4(&VAR_9->scan_timeout_dwork);
  FUNC_9(VAR_9);
 } else {
  FUNC_1(VAR_9,
   "got scan complete notification but no scan is running\n");
 }

 VAR_9->last_ebs_successful =
   VAR_12->ebs_status == VAR_5 ||
   VAR_12->ebs_status == VAR_4;
}
