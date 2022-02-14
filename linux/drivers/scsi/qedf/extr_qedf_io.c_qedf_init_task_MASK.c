
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
typedef void* u32 ;
struct scsi_sgl_task_params {int dummy; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct regpair {void* hi; void* lo; } ;
struct qedf_rport {int dev_type; int fw_cid; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {scalar_t__ cmd_type; scalar_t__ sge_type; int task_retry_identifier; struct e4_fcoe_task_context* sgl_task_params; struct e4_fcoe_task_context* task_params; int sense_buffer_dma; struct scsi_cmnd* sc_cmd; int xid; void* data_xfer_len; struct e4_fcoe_task_context* task; struct io_bdt* bd_tbl; } ;
struct qedf_ctx {int num_queues; int fast_sge_ios; int slow_sge_ios; } ;
struct io_bdt {int bd_valid; int bd_tbl_dma; int bd_tbl; } ;
struct fcp_cmnd {int dummy; } ;
struct fcoe_wqe {int dummy; } ;
struct fcoe_task_params {int dummy; } ;
struct fc_lport {int dummy; } ;
struct TYPE_2__ {void* hi; void* lo; } ;
struct e4_fcoe_task_context {int task_type; int cq_rss_number; int num_sges; int small_mid_sge; int total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; int is_tape_device; int itid; int conn_cid; void* rx_io_size; void* tx_io_size; struct fcoe_wqe* sqe; struct e4_fcoe_task_context* context; } ;
typedef enum fcoe_task_type { ____Placeholder_fcoe_task_type } fcoe_task_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct e4_fcoe_task_context*,struct e4_fcoe_task_context*,struct regpair,int ,int *) ;
 int FUNC_4 (int *,void**,int) ;
 int FUNC_5 (struct e4_fcoe_task_context*,int ,int) ;
 int FUNC_6 (struct qedf_ioreq*,struct fcp_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct qedf_rport *VAR_5, struct fc_lport *VAR_6,
 struct qedf_ioreq *VAR_7, struct e4_fcoe_task_context *VAR_8,
 struct fcoe_wqe *VAR_9)
{
 enum fcoe_task_type VAR_10;
 struct scsi_cmnd *VAR_11 = VAR_7->sc_cmd;
 struct io_bdt *VAR_12 = VAR_7->bd_tbl;
 u8 VAR_13[32];
 u32 VAR_14[8];
 int VAR_15 = 0;
 struct qedf_ctx *VAR_16 = VAR_5->qedf;
 uint16_t VAR_17 = FUNC_8() % VAR_16->num_queues;
 struct regpair VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 int VAR_21, VAR_22;


 VAR_7->task = VAR_8;
 FUNC_5(VAR_8, 0, sizeof(struct e4_fcoe_task_context));
 FUNC_5(VAR_7->task_params, 0, sizeof(struct fcoe_task_params));
 FUNC_5(VAR_7->sgl_task_params, 0, sizeof(struct scsi_sgl_task_params));


 if (VAR_7->cmd_type == VAR_4) {
  VAR_10 = VAR_1;
 } else {
  if (VAR_11->sc_data_direction == VAR_0) {
   VAR_10 = VAR_2;
   VAR_19 = VAR_7->data_xfer_len;
  } else {
   VAR_10 = VAR_1;
   VAR_20 = VAR_7->data_xfer_len;
  }
 }


 VAR_7->task_params->context = VAR_8;
 VAR_7->task_params->sqe = VAR_9;
 VAR_7->task_params->task_type = VAR_10;
 VAR_7->task_params->tx_io_size = VAR_19;
 VAR_7->task_params->rx_io_size = VAR_20;
 VAR_7->task_params->conn_cid = VAR_5->fw_cid;
 VAR_7->task_params->itid = VAR_7->xid;
 VAR_7->task_params->cq_rss_number = VAR_17;
 VAR_7->task_params->is_tape_device = VAR_5->dev_type;


 if (VAR_7->cmd_type != VAR_4) {
  VAR_15 = VAR_12->bd_valid;
  VAR_7->sgl_task_params->sgl = VAR_12->bd_tbl;
  VAR_7->sgl_task_params->sgl_phys_addr.lo =
   FUNC_1(VAR_12->bd_tbl_dma);
  VAR_7->sgl_task_params->sgl_phys_addr.hi =
   FUNC_0(VAR_12->bd_tbl_dma);
  VAR_7->sgl_task_params->num_sges = VAR_15;
  VAR_7->sgl_task_params->total_buffer_size =
      FUNC_7(VAR_7->sc_cmd);
  if (VAR_7->sge_type == VAR_3)
   VAR_7->sgl_task_params->small_mid_sge = 1;
  else
   VAR_7->sgl_task_params->small_mid_sge = 0;
 }


 VAR_18.lo = FUNC_1(VAR_7->sense_buffer_dma);
 VAR_18.hi = FUNC_0(VAR_7->sense_buffer_dma);


 FUNC_6(VAR_7, (struct fcp_cmnd *)VAR_14);


 VAR_22 = sizeof(struct fcp_cmnd) / sizeof(u32);
 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  VAR_14[VAR_21] = FUNC_2(VAR_14[VAR_21]);
 }
 FUNC_4(VAR_13, VAR_14, sizeof(struct fcp_cmnd));

 FUNC_3(VAR_7->task_params,
        VAR_7->sgl_task_params,
        VAR_18,
        VAR_7->task_retry_identifier, VAR_13);


 if (VAR_7->sge_type == VAR_3)
  VAR_16->slow_sge_ios++;
 else
  VAR_16->fast_sge_ios++;
}
