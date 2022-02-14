
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
typedef int tx_sgl_task_params ;
typedef int task_params ;
struct TYPE_5__ {void* hi; void* lo; } ;
struct TYPE_4__ {void* hi; void* lo; } ;
struct scsi_sgl_task_params {int total_buffer_size; int num_sges; size_t conn_icid; int itid; int tx_io_size; int rx_io_size; struct scsi_sgl_task_params* sqe; scalar_t__ cq_rss_number; struct scsi_sgl_task_params* context; TYPE_2__ sgl_phys_addr; struct scsi_sge* sgl; void* ttt; void* itt; void* exp_stat_sn; void* cmd_sn; TYPE_1__ lun; int flags_attr; int opcode; } ;
struct scsi_sge {int sge_len; } ;
struct scsi_lun {int dummy; } ;
struct qedi_endpoint {struct scsi_sgl_task_params* sq; } ;
struct qedi_ctx {int tasks; } ;
struct TYPE_6__ {scalar_t__ resp_dma_addr; scalar_t__ resp_bd_tbl; scalar_t__ req_dma_addr; scalar_t__ req_bd_tbl; } ;
struct qedi_conn {scalar_t__ iscsi_conn_id; TYPE_3__ gen_pdu; int list_lock; int active_cmd_count; int active_cmd_list; struct qedi_endpoint* ep; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_task_params {int total_buffer_size; int num_sges; size_t conn_icid; int itid; int tx_io_size; int rx_io_size; struct iscsi_task_params* sqe; scalar_t__ cq_rss_number; struct iscsi_task_params* context; TYPE_2__ sgl_phys_addr; struct scsi_sge* sgl; void* ttt; void* itt; void* exp_stat_sn; void* cmd_sn; TYPE_1__ lun; int flags_attr; int opcode; } ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct iscsi_nopout {void* cmdsn; void* exp_statsn; scalar_t__ ttt; void* itt; int lun; int opcode; } ;
struct iscsi_nop_out_hdr {int total_buffer_size; int num_sges; size_t conn_icid; int itid; int tx_io_size; int rx_io_size; struct iscsi_nop_out_hdr* sqe; scalar_t__ cq_rss_number; struct iscsi_nop_out_hdr* context; TYPE_2__ sgl_phys_addr; struct scsi_sge* sgl; void* ttt; void* itt; void* exp_stat_sn; void* cmd_sn; TYPE_1__ lun; int flags_attr; int opcode; } ;
struct e4_iscsi_task_context {int total_buffer_size; int num_sges; size_t conn_icid; int itid; int tx_io_size; int rx_io_size; struct e4_iscsi_task_context* sqe; scalar_t__ cq_rss_number; struct e4_iscsi_task_context* context; TYPE_2__ sgl_phys_addr; struct scsi_sge* sgl; void* ttt; void* itt; void* exp_stat_sn; void* cmd_sn; TYPE_1__ lun; int flags_attr; int opcode; } ;
typedef int s16 ;
typedef int rx_sgl_task_params ;
typedef int nop_out_pdu_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (void**,int *,int) ;
 int FUNC_6 (struct scsi_sgl_task_params*,int ,int) ;
 int FUNC_7 (struct qedi_ctx*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 size_t FUNC_9 (struct qedi_conn*) ;
 int FUNC_10 (struct qedi_conn*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct qedi_conn *VAR_4,
      struct iscsi_task *VAR_5,
      char *VAR_6, int VAR_7, int VAR_8)
{
 struct iscsi_nop_out_hdr VAR_9;
 struct scsi_sgl_task_params VAR_10;
 struct scsi_sgl_task_params VAR_11;
 struct iscsi_task_params VAR_12;
 struct qedi_ctx *VAR_13 = VAR_4->qedi;
 struct e4_iscsi_task_context *VAR_14;
 struct iscsi_nopout *VAR_15;
 struct scsi_sge *VAR_16 = ((void*)0);
 struct qedi_cmd *VAR_17;
 struct qedi_endpoint *VAR_18;
 u32 VAR_19[2];
 s16 VAR_20 = 0;
 u16 VAR_21 = 0;
 int VAR_22 = 0;

 VAR_16 = (struct scsi_sge *)VAR_4->gen_pdu.resp_bd_tbl;
 VAR_17 = (struct qedi_cmd *)VAR_5->dd_data;
 VAR_15 = (struct iscsi_nopout *)VAR_5->hdr;
 VAR_18 = VAR_4->ep;

 VAR_20 = FUNC_7(VAR_13);
 if (VAR_20 == -1)
  return -VAR_0;

 VAR_14 =
      (struct e4_iscsi_task_context *)FUNC_8(&VAR_13->tasks,
              VAR_20);
 FUNC_6(VAR_14, 0, sizeof(struct e4_iscsi_task_context));

 VAR_17->task_id = VAR_20;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 FUNC_6(&VAR_11, 0, sizeof(VAR_11));


 VAR_9.opcode = VAR_15->opcode;
 FUNC_0(VAR_9.flags_attr, VAR_1, 1);
 FUNC_0(VAR_9.flags_attr, VAR_2, 0);

 FUNC_5(VAR_19, &VAR_15->lun, sizeof(struct scsi_lun));
 VAR_9.lun.lo = FUNC_1(VAR_19[0]);
 VAR_9.lun.hi = FUNC_1(VAR_19[1]);
 VAR_9.cmd_sn = FUNC_1(VAR_15->cmdsn);
 VAR_9.exp_stat_sn = FUNC_1(VAR_15->exp_statsn);

 FUNC_12(VAR_13, VAR_20, VAR_5->itt, VAR_17);

 if (VAR_15->ttt != VAR_3) {
  VAR_9.itt = FUNC_1(VAR_15->itt);
  VAR_9.ttt = FUNC_1(VAR_15->ttt);
 } else {
  VAR_9.itt = FUNC_11(VAR_20, FUNC_2(VAR_5->itt));
  VAR_9.ttt = VAR_3;

  FUNC_13(&VAR_4->list_lock);
  FUNC_4(&VAR_17->io_cmd, &VAR_4->active_cmd_list);
  VAR_17->io_cmd_in_list = 1;
  VAR_4->active_cmd_count++;
  FUNC_14(&VAR_4->list_lock);
 }


 if (VAR_7) {
  VAR_10.sgl =
          (struct scsi_sge *)VAR_4->gen_pdu.req_bd_tbl;
  VAR_10.sgl_phys_addr.lo =
      (u32)(VAR_4->gen_pdu.req_dma_addr);
  VAR_10.sgl_phys_addr.hi =
         (u32)((u64)VAR_4->gen_pdu.req_dma_addr >> 32);
  VAR_10.total_buffer_size = VAR_7;
  VAR_10.num_sges = 1;

  VAR_11.sgl =
         (struct scsi_sge *)VAR_4->gen_pdu.resp_bd_tbl;
  VAR_11.sgl_phys_addr.lo =
     (u32)(VAR_4->gen_pdu.resp_dma_addr);
  VAR_11.sgl_phys_addr.hi =
        (u32)((u64)VAR_4->gen_pdu.resp_dma_addr >> 32);
  VAR_11.total_buffer_size = VAR_16->sge_len;
  VAR_11.num_sges = 1;
 }


 VAR_12.context = VAR_14;
 VAR_12.conn_icid = (u16)VAR_4->iscsi_conn_id;
 VAR_12.itid = VAR_20;
 VAR_12.cq_rss_number = 0;
 VAR_12.tx_io_size = VAR_7;
 VAR_12.rx_io_size = VAR_16->sge_len;

 VAR_21 = FUNC_9(VAR_4);
 VAR_12.sqe = &VAR_18->sq[VAR_21];

 FUNC_6(VAR_12.sqe, 0, sizeof(struct iscsi_wqe));
 VAR_22 = FUNC_3(&VAR_12,
        &VAR_9,
        &VAR_10,
        &VAR_11);
 if (VAR_22)
  return -1;

 FUNC_10(VAR_4);
 return 0;
}
