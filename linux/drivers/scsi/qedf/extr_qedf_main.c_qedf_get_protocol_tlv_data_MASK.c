
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* sel_fcf; } ;
struct qedf_ctx {int task_set_fulls; int busy; int packet_aborts; int lun_resets; TYPE_2__ ctlr; struct fc_lport* lport; } ;
struct qed_mfw_tlv_fcoe {int qos_pri_set; int qos_pri; int ra_tov_set; int ed_tov_set; int npiv_state_set; int npiv_state; int num_npiv_ids_set; int switch_name_set; int port_state_set; int link_failures_set; int fcoe_txq_depth_set; int fcoe_rxq_depth_set; int fcoe_rx_frames_set; int fcoe_tx_frames_set; int fcoe_rx_bytes_set; int fcoe_rx_bytes; int fcoe_tx_bytes_set; int fcoe_tx_bytes; int crc_count_set; int tx_abts_set; int tx_lun_rst_set; int abort_task_sets_set; int scsi_busy_set; int scsi_tsk_full_set; int scsi_tsk_full; int scsi_busy; int abort_task_sets; int tx_lun_rst; int tx_abts; int crc_count; int fcoe_tx_frames; int fcoe_rx_frames; void* fcoe_txq_depth; void* fcoe_rxq_depth; scalar_t__ link_failures; int port_state; int switch_name; int num_npiv_ids; int ed_tov; int ra_tov; } ;
struct fc_lport {scalar_t__ link_up; int e_d_tov; int r_a_tov; struct Scsi_Host* host; } ;
struct fc_host_statistics {int fcp_input_megabytes; int fcp_output_megabytes; int fcp_packet_aborts; int invalid_crc_count; int tx_frames; int rx_frames; scalar_t__ link_failure_count; } ;
struct fc_host_attrs {int npiv_vports_inuse; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int switch_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fc_host_statistics* FUNC_0 (struct Scsi_Host*) ;
 struct fc_host_attrs* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void *VAR_3, void *VAR_4)
{
 struct qedf_ctx *VAR_5 = VAR_3;
 struct qed_mfw_tlv_fcoe *VAR_6 = VAR_4;
 struct fc_lport *VAR_7 = VAR_5->lport;
 struct Scsi_Host *VAR_8 = VAR_7->host;
 struct fc_host_attrs *VAR_9 = FUNC_1(VAR_8);
 struct fc_host_statistics *VAR_10;


 VAR_10 = FUNC_0(VAR_8);

 VAR_6->qos_pri_set = 1;
 VAR_6->qos_pri = 3;

 VAR_6->ra_tov_set = 1;
 VAR_6->ra_tov = VAR_7->r_a_tov;

 VAR_6->ed_tov_set = 1;
 VAR_6->ed_tov = VAR_7->e_d_tov;

 VAR_6->npiv_state_set = 1;
 VAR_6->npiv_state = 1;

 VAR_6->num_npiv_ids_set = 1;
 VAR_6->num_npiv_ids = VAR_9->npiv_vports_inuse;


 if (VAR_5->ctlr.sel_fcf) {
  VAR_6->switch_name_set = 1;
  FUNC_2(VAR_5->ctlr.sel_fcf->switch_name, VAR_6->switch_name);
 }

 VAR_6->port_state_set = 1;

 if (VAR_7->link_up)
  VAR_6->port_state = VAR_1;
 else
  VAR_6->port_state = VAR_2;

 VAR_6->link_failures_set = 1;
 VAR_6->link_failures = (u16)VAR_10->link_failure_count;

 VAR_6->fcoe_txq_depth_set = 1;
 VAR_6->fcoe_rxq_depth_set = 1;
 VAR_6->fcoe_rxq_depth = VAR_0;
 VAR_6->fcoe_txq_depth = VAR_0;

 VAR_6->fcoe_rx_frames_set = 1;
 VAR_6->fcoe_rx_frames = VAR_10->rx_frames;

 VAR_6->fcoe_tx_frames_set = 1;
 VAR_6->fcoe_tx_frames = VAR_10->tx_frames;

 VAR_6->fcoe_rx_bytes_set = 1;
 VAR_6->fcoe_rx_bytes = VAR_10->fcp_input_megabytes * 1000000;

 VAR_6->fcoe_tx_bytes_set = 1;
 VAR_6->fcoe_tx_bytes = VAR_10->fcp_output_megabytes * 1000000;

 VAR_6->crc_count_set = 1;
 VAR_6->crc_count = VAR_10->invalid_crc_count;

 VAR_6->tx_abts_set = 1;
 VAR_6->tx_abts = VAR_10->fcp_packet_aborts;

 VAR_6->tx_lun_rst_set = 1;
 VAR_6->tx_lun_rst = VAR_5->lun_resets;

 VAR_6->abort_task_sets_set = 1;
 VAR_6->abort_task_sets = VAR_5->packet_aborts;

 VAR_6->scsi_busy_set = 1;
 VAR_6->scsi_busy = VAR_5->busy;

 VAR_6->scsi_tsk_full_set = 1;
 VAR_6->scsi_tsk_full = VAR_5->task_set_fulls;
}
