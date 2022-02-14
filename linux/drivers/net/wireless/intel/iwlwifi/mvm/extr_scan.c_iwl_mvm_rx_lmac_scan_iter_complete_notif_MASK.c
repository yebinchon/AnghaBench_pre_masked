
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {scalar_t__ sched_scan_pass_all; int hw; } ;
struct iwl_lmac_scan_complete_notif {int scanned_channels; int status; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

void FUNC_3(struct iwl_mvm *VAR_2,
           struct iwl_rx_cmd_buffer *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_2(VAR_3);
 struct iwl_lmac_scan_complete_notif *VAR_5 = (void *)VAR_4->data;

 FUNC_0(VAR_2,
         "Scan offload iteration complete: status=0x%x scanned channels=%d\n",
         VAR_5->status, VAR_5->scanned_channels);

 if (VAR_2->sched_scan_pass_all == VAR_1) {
  FUNC_0(VAR_2, "Pass all scheduled scan results found\n");
  FUNC_1(VAR_2->hw);
  VAR_2->sched_scan_pass_all = VAR_0;
 }
}
