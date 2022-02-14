
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {int packets_out; } ;
struct mwifiex_private {TYPE_1__ wmm; struct mwifiex_adapter* adapter; } ;
struct mwifiex_debug_info {int cmd_resp_received; int cmd_sent; int data_sent; int last_sdio_mp_index; int last_mp_wr_len; int last_mp_curr_wr_port; int last_mp_wr_ports; int last_mp_wr_bitmap; int last_event_index; int last_event; int last_cmd_resp_index; int last_cmd_resp_id; int last_cmd_index; int last_cmd_act; int last_cmd_id; int timeout_cmd_act; int timeout_cmd_id; int num_tx_timeout; int num_cmd_assoc_failure; int num_cmd_assoc_success; int num_cmd_deauth; int num_event_link_lost; int num_event_disassoc; int num_event_deauth; int num_tx_host_to_card_failure; int num_cmd_sleep_cfm_host_to_card_failure; int num_cmd_host_to_card_failure; void* is_cmd_timedout; int hs_activated; void* is_hs_configured; int pm_wakeup_fw_try; int pm_wakeup_card_req; int is_deep_sleep; int ps_state; int ps_mode; int tdls_list; int tdls_peer_num; int tx_tbl; int tx_tbl_num; int rx_tbl; int rx_tbl_num; void* tx_buf_size; void* curr_tx_buf_size; int packets_out; int debug_mask; } ;
struct TYPE_4__ {int last_sdio_mp_index; int last_mp_wr_len; int last_mp_curr_wr_port; int last_mp_wr_ports; int last_mp_wr_bitmap; int last_event_index; int last_event; int last_cmd_resp_index; int last_cmd_resp_id; int last_cmd_index; int last_cmd_act; int last_cmd_id; int timeout_cmd_act; int timeout_cmd_id; int num_tx_timeout; int num_cmd_assoc_failure; int num_cmd_assoc_success; int num_cmd_deauth; int num_event_link_lost; int num_event_disassoc; int num_event_deauth; int num_tx_host_to_card_failure; int num_cmd_sleep_cfm_host_to_card_failure; int num_cmd_host_to_card_failure; } ;
struct mwifiex_adapter {int cmd_resp_received; int cmd_sent; int data_sent; TYPE_2__ dbg; int work_flags; int hs_activated; int pm_wakeup_fw_try; int pm_wakeup_card_req; int is_deep_sleep; int ps_state; int ps_mode; scalar_t__ tx_buf_size; scalar_t__ curr_tx_buf_size; int debug_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mwifiex_private*,int ) ;
 int FUNC_2 (struct mwifiex_private*,int ) ;
 int FUNC_3 (struct mwifiex_private*,int ) ;
 void* FUNC_4 (int ,int *) ;

int FUNC_5(struct mwifiex_private *VAR_2,
      struct mwifiex_debug_info *VAR_3)
{
 struct mwifiex_adapter *VAR_4 = VAR_2->adapter;

 if (VAR_3) {
  VAR_3->debug_mask = VAR_4->debug_mask;
  FUNC_0(VAR_3->packets_out,
         VAR_2->wmm.packets_out,
         sizeof(VAR_2->wmm.packets_out));
  VAR_3->curr_tx_buf_size = (u32) VAR_4->curr_tx_buf_size;
  VAR_3->tx_buf_size = (u32) VAR_4->tx_buf_size;
  VAR_3->rx_tbl_num = FUNC_1(VAR_2,
             VAR_3->rx_tbl);
  VAR_3->tx_tbl_num = FUNC_3(VAR_2,
        VAR_3->tx_tbl);
  VAR_3->tdls_peer_num = FUNC_2(VAR_2,
           VAR_3->tdls_list);
  VAR_3->ps_mode = VAR_4->ps_mode;
  VAR_3->ps_state = VAR_4->ps_state;
  VAR_3->is_deep_sleep = VAR_4->is_deep_sleep;
  VAR_3->pm_wakeup_card_req = VAR_4->pm_wakeup_card_req;
  VAR_3->pm_wakeup_fw_try = VAR_4->pm_wakeup_fw_try;
  VAR_3->is_hs_configured = FUNC_4(VAR_1,
        &VAR_4->work_flags);
  VAR_3->hs_activated = VAR_4->hs_activated;
  VAR_3->is_cmd_timedout = FUNC_4(VAR_0,
       &VAR_4->work_flags);
  VAR_3->num_cmd_host_to_card_failure
    = VAR_4->dbg.num_cmd_host_to_card_failure;
  VAR_3->num_cmd_sleep_cfm_host_to_card_failure
   = VAR_4->dbg.num_cmd_sleep_cfm_host_to_card_failure;
  VAR_3->num_tx_host_to_card_failure
    = VAR_4->dbg.num_tx_host_to_card_failure;
  VAR_3->num_event_deauth = VAR_4->dbg.num_event_deauth;
  VAR_3->num_event_disassoc = VAR_4->dbg.num_event_disassoc;
  VAR_3->num_event_link_lost = VAR_4->dbg.num_event_link_lost;
  VAR_3->num_cmd_deauth = VAR_4->dbg.num_cmd_deauth;
  VAR_3->num_cmd_assoc_success =
     VAR_4->dbg.num_cmd_assoc_success;
  VAR_3->num_cmd_assoc_failure =
     VAR_4->dbg.num_cmd_assoc_failure;
  VAR_3->num_tx_timeout = VAR_4->dbg.num_tx_timeout;
  VAR_3->timeout_cmd_id = VAR_4->dbg.timeout_cmd_id;
  VAR_3->timeout_cmd_act = VAR_4->dbg.timeout_cmd_act;
  FUNC_0(VAR_3->last_cmd_id, VAR_4->dbg.last_cmd_id,
         sizeof(VAR_4->dbg.last_cmd_id));
  FUNC_0(VAR_3->last_cmd_act, VAR_4->dbg.last_cmd_act,
         sizeof(VAR_4->dbg.last_cmd_act));
  VAR_3->last_cmd_index = VAR_4->dbg.last_cmd_index;
  FUNC_0(VAR_3->last_cmd_resp_id, VAR_4->dbg.last_cmd_resp_id,
         sizeof(VAR_4->dbg.last_cmd_resp_id));
  VAR_3->last_cmd_resp_index = VAR_4->dbg.last_cmd_resp_index;
  FUNC_0(VAR_3->last_event, VAR_4->dbg.last_event,
         sizeof(VAR_4->dbg.last_event));
  VAR_3->last_event_index = VAR_4->dbg.last_event_index;
  FUNC_0(VAR_3->last_mp_wr_bitmap, VAR_4->dbg.last_mp_wr_bitmap,
         sizeof(VAR_4->dbg.last_mp_wr_bitmap));
  FUNC_0(VAR_3->last_mp_wr_ports, VAR_4->dbg.last_mp_wr_ports,
         sizeof(VAR_4->dbg.last_mp_wr_ports));
  FUNC_0(VAR_3->last_mp_curr_wr_port,
         VAR_4->dbg.last_mp_curr_wr_port,
         sizeof(VAR_4->dbg.last_mp_curr_wr_port));
  FUNC_0(VAR_3->last_mp_wr_len, VAR_4->dbg.last_mp_wr_len,
         sizeof(VAR_4->dbg.last_mp_wr_len));
  VAR_3->last_sdio_mp_index = VAR_4->dbg.last_sdio_mp_index;
  VAR_3->data_sent = VAR_4->data_sent;
  VAR_3->cmd_sent = VAR_4->cmd_sent;
  VAR_3->cmd_resp_received = VAR_4->cmd_resp_received;
 }

 return 0;
}
