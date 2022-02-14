
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct iwl_umac_scan_complete {scalar_t__ status; scalar_t__ ebs_status; int time_from_last_iter; int last_iter; int last_schedule; int uid; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int* scan_uid_status; int scan_status; int last_ebs_successful; int sched_scan_pass_all; int hw; int scan_timeout_dwork; TYPE_1__* scan_vif; int scan_start; } ;
struct cfg80211_scan_info {int aborted; int tsf_bssid; int scan_start_tsf; } ;
struct TYPE_2__ {int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,size_t,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct cfg80211_scan_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (int ,int ,int ) ;
 struct iwl_rx_packet* FUNC_9 (struct iwl_rx_cmd_buffer*) ;

void FUNC_10(struct iwl_mvm *VAR_8,
      struct iwl_rx_cmd_buffer *VAR_9)
{
 struct iwl_rx_packet *VAR_10 = FUNC_9(VAR_9);
 struct iwl_umac_scan_complete *VAR_11 = (void *)VAR_10->data;
 u32 VAR_12 = FUNC_2(VAR_11->uid);
 bool VAR_13 = (VAR_11->status == VAR_5);

 if (FUNC_1(!(VAR_8->scan_uid_status[VAR_12] & VAR_8->scan_status)))
  return;


 if (VAR_8->scan_uid_status[VAR_12] == VAR_1) {
  struct cfg80211_scan_info VAR_14 = {
   .aborted = VAR_13,
   .scan_start_tsf = VAR_8->scan_start,
  };

  FUNC_8(VAR_14.tsf_bssid, VAR_8->scan_vif->bssid, VAR_0);
  FUNC_4(VAR_8->hw, &VAR_14);
  VAR_8->scan_vif = ((void*)0);
  FUNC_3(&VAR_8->scan_timeout_dwork);
  FUNC_7(VAR_8);
 } else if (VAR_8->scan_uid_status[VAR_12] == VAR_2) {
  FUNC_5(VAR_8->hw);
  VAR_8->sched_scan_pass_all = VAR_7;
 }

 VAR_8->scan_status &= ~VAR_8->scan_uid_status[VAR_12];
 FUNC_0(VAR_8,
         "Scan completed, uid %u type %u, status %s, EBS status %s\n",
         VAR_12, VAR_8->scan_uid_status[VAR_12],
         VAR_11->status == VAR_6 ?
    "completed" : "aborted",
         FUNC_6(VAR_11->ebs_status));
 FUNC_0(VAR_8,
         "Last line %d, Last iteration %d, Time from last iteration %d\n",
         VAR_11->last_schedule, VAR_11->last_iter,
         FUNC_2(VAR_11->time_from_last_iter));

 if (VAR_11->ebs_status != VAR_4 &&
     VAR_11->ebs_status != VAR_3)
  VAR_8->last_ebs_successful = 0;

 VAR_8->scan_uid_status[VAR_12] = 0;
}
