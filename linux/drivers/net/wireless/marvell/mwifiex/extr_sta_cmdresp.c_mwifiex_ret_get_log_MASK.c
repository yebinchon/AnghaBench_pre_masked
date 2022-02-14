
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_get_stats {void* bcn_miss_cnt; void* bcn_rcv_cnt; void** wep_icv_error; void* tx_frame; void* fcs_error; void* mcast_rx_frame; void* rx_frag; void* ack_failure; void* rts_failure; void* rts_success; void* frame_dup; void* multi_retry; void* retry; void* failed; void* mcast_tx_frame; } ;
struct host_cmd_ds_802_11_get_log {int bcn_miss_cnt; int bcn_rcv_cnt; int * wep_icv_err_cnt; int tx_frame; int fcs_error; int mcast_rx_frame; int rx_frag; int ack_failure; int rts_failure; int rts_success; int frame_dup; int multi_retry; int retry; int failed; int mcast_tx_frame; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_get_log get_log; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0,
          struct host_cmd_ds_command *VAR_1,
          struct mwifiex_ds_get_stats *VAR_2)
{
 struct host_cmd_ds_802_11_get_log *VAR_3 =
  &VAR_1->params.get_log;

 if (VAR_2) {
  VAR_2->mcast_tx_frame = FUNC_0(VAR_3->mcast_tx_frame);
  VAR_2->failed = FUNC_0(VAR_3->failed);
  VAR_2->retry = FUNC_0(VAR_3->retry);
  VAR_2->multi_retry = FUNC_0(VAR_3->multi_retry);
  VAR_2->frame_dup = FUNC_0(VAR_3->frame_dup);
  VAR_2->rts_success = FUNC_0(VAR_3->rts_success);
  VAR_2->rts_failure = FUNC_0(VAR_3->rts_failure);
  VAR_2->ack_failure = FUNC_0(VAR_3->ack_failure);
  VAR_2->rx_frag = FUNC_0(VAR_3->rx_frag);
  VAR_2->mcast_rx_frame = FUNC_0(VAR_3->mcast_rx_frame);
  VAR_2->fcs_error = FUNC_0(VAR_3->fcs_error);
  VAR_2->tx_frame = FUNC_0(VAR_3->tx_frame);
  VAR_2->wep_icv_error[0] =
   FUNC_0(VAR_3->wep_icv_err_cnt[0]);
  VAR_2->wep_icv_error[1] =
   FUNC_0(VAR_3->wep_icv_err_cnt[1]);
  VAR_2->wep_icv_error[2] =
   FUNC_0(VAR_3->wep_icv_err_cnt[2]);
  VAR_2->wep_icv_error[3] =
   FUNC_0(VAR_3->wep_icv_err_cnt[3]);
  VAR_2->bcn_rcv_cnt = FUNC_0(VAR_3->bcn_rcv_cnt);
  VAR_2->bcn_miss_cnt = FUNC_0(VAR_3->bcn_miss_cnt);
 }

 return 0;
}
