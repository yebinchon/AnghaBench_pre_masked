
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* hi; void* lo; } ;
struct scsi_sgl_task_params {int num_sges; scalar_t__ small_mid_sge; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; int ox_id; int rx_id; int df_ctl; int cs_ctl; int type; int r_ctl; int parameter; } ;
struct qedf_rport {int dev_type; int fw_cid; struct qedf_ctx* qedf; } ;
struct fc_frame_header {int fh_ox_id; int fh_rx_id; int fh_df_ctl; int fh_cs_ctl; int fh_type; int fh_r_ctl; int fh_parm_offset; } ;
struct qedf_mp_req {int mp_resp_bd_dma; int mp_resp_bd; int mp_req_bd_dma; int mp_req_bd; struct fc_frame_header req_fc_hdr; } ;
struct qedf_ioreq {TYPE_2__* task_params; void* data_xfer_len; int xid; struct scsi_sgl_task_params* task; int cmd_type; struct qedf_rport* fcport; struct qedf_mp_req mp_req; } ;
struct qedf_ctx {int control_requests; int dbg_ctx; } ;
struct fcoe_wqe {int dummy; } ;
struct fcoe_tx_mid_path_params {int num_sges; scalar_t__ small_mid_sge; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; int ox_id; int rx_id; int df_ctl; int cs_ctl; int type; int r_ctl; int parameter; } ;
struct e4_fcoe_task_context {int num_sges; scalar_t__ small_mid_sge; void* total_buffer_size; TYPE_1__ sgl_phys_addr; int sgl; int ox_id; int rx_id; int df_ctl; int cs_ctl; int type; int r_ctl; int parameter; } ;
struct TYPE_4__ {int is_tape_device; scalar_t__ cq_rss_number; int itid; int conn_cid; void* rx_io_size; void* tx_io_size; int task_type; struct fcoe_wqe* sqe; struct scsi_sgl_task_params* context; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,int ) ;
 int FUNC_5 (struct scsi_sgl_task_params*,int ,int) ;

void FUNC_6(struct qedf_ioreq *VAR_3,
 struct e4_fcoe_task_context *VAR_4, struct fcoe_wqe *VAR_5)
{
 struct qedf_mp_req *VAR_6 = &(VAR_3->mp_req);
 struct qedf_rport *VAR_7 = VAR_3->fcport;
 struct qedf_ctx *VAR_8 = VAR_3->fcport->qedf;
 struct fc_frame_header *VAR_9;
 struct fcoe_tx_mid_path_params VAR_10;
 struct scsi_sgl_task_params VAR_11;
 struct scsi_sgl_task_params VAR_12;

 FUNC_0(&(VAR_8->dbg_ctx), VAR_2,
    "Initializing MP task for cmd_type=%d\n",
    VAR_3->cmd_type);

 VAR_8->control_requests++;

 FUNC_5(&VAR_11, 0, sizeof(struct scsi_sgl_task_params));
 FUNC_5(&VAR_12, 0, sizeof(struct scsi_sgl_task_params));
 FUNC_5(VAR_4, 0, sizeof(struct e4_fcoe_task_context));
 FUNC_5(&VAR_10, 0, sizeof(struct fcoe_tx_mid_path_params));


 VAR_3->task = VAR_4;


 VAR_3->task_params->context = VAR_4;
 VAR_3->task_params->sqe = VAR_5;
 VAR_3->task_params->task_type = VAR_0;
 VAR_3->task_params->tx_io_size = VAR_3->data_xfer_len;

 VAR_3->task_params->rx_io_size = VAR_1;
 VAR_3->task_params->conn_cid = VAR_7->fw_cid;
 VAR_3->task_params->itid = VAR_3->xid;

 VAR_3->task_params->cq_rss_number = 0;
 VAR_3->task_params->is_tape_device = VAR_7->dev_type;

 VAR_9 = &(VAR_6->req_fc_hdr);

 VAR_9->fh_ox_id = VAR_3->xid;
 VAR_9->fh_rx_id = FUNC_3(0xffff);


 VAR_10.parameter = VAR_9->fh_parm_offset;
 VAR_10.r_ctl = VAR_9->fh_r_ctl;
 VAR_10.type = VAR_9->fh_type;
 VAR_10.cs_ctl = VAR_9->fh_cs_ctl;
 VAR_10.df_ctl = VAR_9->fh_df_ctl;
 VAR_10.rx_id = VAR_9->fh_rx_id;
 VAR_10.ox_id = VAR_9->fh_ox_id;


 VAR_11.sgl = VAR_6->mp_req_bd;
 VAR_11.sgl_phys_addr.lo = FUNC_2(VAR_6->mp_req_bd_dma);
 VAR_11.sgl_phys_addr.hi = FUNC_1(VAR_6->mp_req_bd_dma);
 VAR_11.num_sges = 1;

 VAR_11.total_buffer_size = VAR_3->data_xfer_len;
 VAR_11.small_mid_sge = 0;


 VAR_12.sgl = VAR_6->mp_resp_bd;
 VAR_12.sgl_phys_addr.lo = FUNC_2(VAR_6->mp_resp_bd_dma);
 VAR_12.sgl_phys_addr.hi = FUNC_1(VAR_6->mp_resp_bd_dma);
 VAR_12.num_sges = 1;

 VAR_12.total_buffer_size = VAR_1;
 VAR_12.small_mid_sge = 0;






 FUNC_4(VAR_3->task_params,
           &VAR_10,
           &VAR_11,
           &VAR_12, 0);
}
