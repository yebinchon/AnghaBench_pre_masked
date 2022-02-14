
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_qla_host {int loop_id; int loop_state; } ;
struct qla_hw_data {TYPE_6__* pdev; int dpc_active; } ;
struct link_statistics {scalar_t__ discarded_frames; scalar_t__ dropped_frames; int nos_rcvd; int rx_frames; int tx_frames; int lip_cnt; int inval_crc_cnt; int inval_xmit_word_cnt; int prim_seq_err_cnt; int loss_sig_cnt; int loss_sync_cnt; int link_fail_cnt; } ;
struct fc_host_statistics {int rx_words; int tx_words; int fcp_input_megabytes; int fcp_output_megabytes; scalar_t__ seconds_since_last_reset; int fcp_output_requests; int fcp_input_requests; int fcp_control_requests; scalar_t__ error_frames; int nos_count; scalar_t__ dumped_frames; int rx_frames; int tx_frames; int lip_count; int invalid_crc_count; int invalid_tx_word_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {int input_bytes; int output_bytes; scalar_t__ jiffies_at_last_reset; int output_requests; int input_requests; int control_requests; } ;
struct TYPE_9__ {TYPE_1__ qla_stats; int dpc_flags; struct qla_hw_data* hw; struct fc_host_statistics fc_host_stat; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 struct link_statistics* FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,struct link_statistics*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct fc_host_statistics*,int,int) ;
 int FUNC_8 (TYPE_6__*) ;
 struct scsi_qla_host* FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ,TYPE_2__*,int,char*) ;
 int VAR_6 ;
 int FUNC_11 (struct scsi_qla_host*,struct link_statistics*,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (struct scsi_qla_host*,int ,struct link_statistics*,int ) ;
 TYPE_2__* FUNC_14 (struct Scsi_Host*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static struct fc_host_statistics *
FUNC_17(struct Scsi_Host *VAR_7)
{
 scsi_qla_host_t *VAR_8 = FUNC_14(VAR_7);
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 struct scsi_qla_host *VAR_10 = FUNC_9(VAR_9->pdev);
 int VAR_11;
 struct link_statistics *VAR_12;
 dma_addr_t VAR_13;
 struct fc_host_statistics *VAR_14 = &VAR_8->fc_host_stat;

 FUNC_7(VAR_14, -1, sizeof(*VAR_14));

 if (FUNC_1(VAR_8->hw))
  goto done;

 if (FUNC_15(VAR_5, &VAR_8->dpc_flags))
  goto done;

 if (FUNC_16(FUNC_8(VAR_9->pdev)))
  goto done;

 if (FUNC_12(VAR_8))
  goto done;

 VAR_12 = FUNC_3(&VAR_9->pdev->dev, sizeof(*VAR_12), &VAR_13,
       VAR_0);
 if (!VAR_12) {
  FUNC_10(VAR_6, VAR_8, 0x707d,
      "Failed to allocate memory for stats.\n");
  goto done;
 }

 VAR_11 = VAR_3;
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_11(VAR_10, VAR_12, VAR_13, 0);
 } else if (FUNC_2(&VAR_10->loop_state) == VAR_2 &&
     !VAR_9->dpc_active) {

  VAR_11 = FUNC_13(VAR_10, VAR_10->loop_id,
      VAR_12, VAR_13);
 }

 if (VAR_11 != VAR_4)
  goto done_free;

 VAR_14->link_failure_count = VAR_12->link_fail_cnt;
 VAR_14->loss_of_sync_count = VAR_12->loss_sync_cnt;
 VAR_14->loss_of_signal_count = VAR_12->loss_sig_cnt;
 VAR_14->prim_seq_protocol_err_count = VAR_12->prim_seq_err_cnt;
 VAR_14->invalid_tx_word_count = VAR_12->inval_xmit_word_cnt;
 VAR_14->invalid_crc_count = VAR_12->inval_crc_cnt;
 if (FUNC_0(VAR_9)) {
  VAR_14->lip_count = VAR_12->lip_cnt;
  VAR_14->tx_frames = VAR_12->tx_frames;
  VAR_14->rx_frames = VAR_12->rx_frames;
  VAR_14->dumped_frames = VAR_12->discarded_frames;
  VAR_14->nos_count = VAR_12->nos_rcvd;
  VAR_14->error_frames =
   VAR_12->dropped_frames + VAR_12->discarded_frames;
  VAR_14->rx_words = VAR_8->qla_stats.input_bytes;
  VAR_14->tx_words = VAR_8->qla_stats.output_bytes;
 }
 VAR_14->fcp_control_requests = VAR_8->qla_stats.control_requests;
 VAR_14->fcp_input_requests = VAR_8->qla_stats.input_requests;
 VAR_14->fcp_output_requests = VAR_8->qla_stats.output_requests;
 VAR_14->fcp_input_megabytes = VAR_8->qla_stats.input_bytes >> 20;
 VAR_14->fcp_output_megabytes = VAR_8->qla_stats.output_bytes >> 20;
 VAR_14->seconds_since_last_reset =
  FUNC_6() - VAR_8->qla_stats.jiffies_at_last_reset;
 FUNC_5(VAR_14->seconds_since_last_reset, VAR_1);

done_free:
 FUNC_4(&VAR_9->pdev->dev, sizeof(struct link_statistics),
     VAR_12, VAR_13);
done:
 return VAR_14;
}
