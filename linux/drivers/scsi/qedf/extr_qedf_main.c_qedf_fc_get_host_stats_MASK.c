
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ctx {int stats_mutex; scalar_t__ alloc_failures; scalar_t__ packet_aborts; scalar_t__ control_requests; scalar_t__ output_requests; scalar_t__ input_requests; int cdev; int dbg_ctx; } ;
struct qed_fcoe_stats {int fcoe_rx_byte_cnt; int fcoe_tx_byte_cnt; scalar_t__ fcoe_silent_drop_total_pkt_cnt; scalar_t__ fcoe_silent_drop_pkt_crc_error_cnt; scalar_t__ fcoe_rx_other_pkt_cnt; scalar_t__ fcoe_rx_xfer_pkt_cnt; scalar_t__ fcoe_rx_data_pkt_cnt; scalar_t__ fcoe_tx_other_pkt_cnt; scalar_t__ fcoe_tx_xfer_pkt_cnt; scalar_t__ fcoe_tx_data_pkt_cnt; } ;
struct fc_lport {scalar_t__ vport; } ;
struct fc_host_statistics {int rx_words; int tx_words; int fcp_frame_alloc_failures; int fcp_packet_aborts; int fcp_control_requests; int fcp_output_requests; int fcp_input_requests; int error_frames; scalar_t__ dumped_frames; int invalid_crc_count; int fcp_output_megabytes; int fcp_input_megabytes; int rx_frames; int tx_frames; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int (* get_stats ) (int ,struct qed_fcoe_stats*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 struct fc_host_statistics* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct qed_fcoe_stats*) ;
 struct qed_fcoe_stats* FUNC_4 (int,int ) ;
 struct qedf_ctx* FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_1 ;
 struct fc_lport* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ,struct qed_fcoe_stats*) ;

__attribute__((used)) static struct fc_host_statistics *FUNC_10(struct Scsi_Host
 *VAR_2)
{
 struct fc_host_statistics *VAR_3;
 struct fc_lport *VAR_4 = FUNC_8(VAR_2);
 struct qedf_ctx *VAR_5 = FUNC_5(VAR_4);
 struct qed_fcoe_stats *VAR_6;

 VAR_3 = FUNC_2(VAR_2);


 if (VAR_4->vport)
  goto out;

 VAR_6 = FUNC_4(sizeof(struct qed_fcoe_stats), VAR_0);
 if (!VAR_6) {
  FUNC_0(&(VAR_5->dbg_ctx), "Could not allocate memory for "
      "fw_fcoe_stats.\n");
  goto out;
 }

 FUNC_6(&VAR_5->stats_mutex);


 VAR_1->get_stats(VAR_5->cdev, VAR_6);







 VAR_3->tx_frames += VAR_6->fcoe_tx_data_pkt_cnt +
     VAR_6->fcoe_tx_xfer_pkt_cnt +
     VAR_6->fcoe_tx_other_pkt_cnt;
 VAR_3->rx_frames += VAR_6->fcoe_rx_data_pkt_cnt +
     VAR_6->fcoe_rx_xfer_pkt_cnt +
     VAR_6->fcoe_rx_other_pkt_cnt;
 VAR_3->fcp_input_megabytes +=
     FUNC_1(VAR_6->fcoe_rx_byte_cnt, 1000000);
 VAR_3->fcp_output_megabytes +=
     FUNC_1(VAR_6->fcoe_tx_byte_cnt, 1000000);
 VAR_3->rx_words += VAR_6->fcoe_rx_byte_cnt / 4;
 VAR_3->tx_words += VAR_6->fcoe_tx_byte_cnt / 4;
 VAR_3->invalid_crc_count +=
     VAR_6->fcoe_silent_drop_pkt_crc_error_cnt;
 VAR_3->dumped_frames =
     VAR_6->fcoe_silent_drop_total_pkt_cnt;
 VAR_3->error_frames +=
     VAR_6->fcoe_silent_drop_total_pkt_cnt;
 VAR_3->fcp_input_requests += VAR_5->input_requests;
 VAR_3->fcp_output_requests += VAR_5->output_requests;
 VAR_3->fcp_control_requests += VAR_5->control_requests;
 VAR_3->fcp_packet_aborts += VAR_5->packet_aborts;
 VAR_3->fcp_frame_alloc_failures += VAR_5->alloc_failures;

 FUNC_7(&VAR_5->stats_mutex);
 FUNC_3(VAR_6);
out:
 return VAR_3;
}
