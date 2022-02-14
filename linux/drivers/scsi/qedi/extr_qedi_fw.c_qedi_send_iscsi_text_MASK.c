
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef size_t u16 ;
typedef int tx_sgl_task_params ;
typedef int text_request_pdu_header ;
typedef int task_params ;
struct TYPE_3__ {void* hi; void* lo; } ;
struct scsi_sgl_task_params {int num_sges; size_t conn_icid; int itid; struct scsi_sgl_task_params* sqe; int rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct scsi_sgl_task_params* context; int total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* hdr_second_dword; void* exp_stat_sn; void* cmd_sn; int ttt; int itt; int flags_attr; int opcode; } ;
struct scsi_sge {int sge_len; } ;
struct qedi_endpoint {struct scsi_sgl_task_params* sq; } ;
struct qedi_ctx {int tasks; } ;
struct TYPE_4__ {scalar_t__ resp_dma_addr; scalar_t__ resp_bd_tbl; scalar_t__ req_dma_addr; scalar_t__ req_bd_tbl; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int active_cmd_list; scalar_t__ iscsi_conn_id; TYPE_2__ gen_pdu; struct qedi_endpoint* ep; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_text_request_hdr {int num_sges; size_t conn_icid; int itid; struct iscsi_text_request_hdr* sqe; int rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct iscsi_text_request_hdr* context; int total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* hdr_second_dword; void* exp_stat_sn; void* cmd_sn; int ttt; int itt; int flags_attr; int opcode; } ;
struct iscsi_text {int dlength; int exp_statsn; int cmdsn; int ttt; int flags; int opcode; } ;
struct iscsi_task_params {int num_sges; size_t conn_icid; int itid; struct iscsi_task_params* sqe; int rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct iscsi_task_params* context; int total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* hdr_second_dword; void* exp_stat_sn; void* cmd_sn; int ttt; int itt; int flags_attr; int opcode; } ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct e4_iscsi_task_context {int num_sges; size_t conn_icid; int itid; struct e4_iscsi_task_context* sqe; int rx_io_size; void* tx_io_size; scalar_t__ cq_rss_number; struct e4_iscsi_task_context* context; int total_buffer_size; TYPE_1__ sgl_phys_addr; struct scsi_sge* sgl; void* hdr_second_dword; void* exp_stat_sn; void* cmd_sn; int ttt; int itt; int flags_attr; int opcode; } ;
typedef int s16 ;
typedef int rx_sgl_task_params ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,struct scsi_sgl_task_params*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct scsi_sgl_task_params*,int ,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct qedi_ctx*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 size_t FUNC_8 (struct qedi_conn*) ;
 int FUNC_9 (struct qedi_conn*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct qedi_conn *VAR_1,
    struct iscsi_task *VAR_2)
{
 struct iscsi_text_request_hdr VAR_3;
 struct scsi_sgl_task_params VAR_4;
 struct scsi_sgl_task_params VAR_5;
 struct iscsi_task_params VAR_6;
 struct e4_iscsi_task_context *VAR_7;
 struct qedi_ctx *VAR_8 = VAR_1->qedi;
 struct iscsi_text *VAR_9;
 struct scsi_sge *VAR_10 = ((void*)0);
 struct scsi_sge *VAR_11 = ((void*)0);
 struct qedi_cmd *VAR_12;
 struct qedi_endpoint *VAR_13;
 s16 VAR_14 = 0;
 u16 VAR_15 = 0;
 int VAR_16 = 0;

 VAR_10 = (struct scsi_sge *)VAR_1->gen_pdu.req_bd_tbl;
 VAR_11 = (struct scsi_sge *)VAR_1->gen_pdu.resp_bd_tbl;
 VAR_12 = (struct qedi_cmd *)VAR_2->dd_data;
 VAR_9 = (struct iscsi_text *)VAR_2->hdr;
 VAR_13 = VAR_1->ep;

 VAR_14 = FUNC_6(VAR_8);
 if (VAR_14 == -1)
  return -VAR_0;

 VAR_7 =
      (struct e4_iscsi_task_context *)FUNC_7(&VAR_8->tasks,
              VAR_14);
 FUNC_4(VAR_7, 0, sizeof(struct e4_iscsi_task_context));

 VAR_12->task_id = VAR_14;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));


 VAR_3.opcode = VAR_9->opcode;
 VAR_3.flags_attr = VAR_9->flags;

 FUNC_11(VAR_8, VAR_14, VAR_2->itt, VAR_12);
 VAR_3.itt = FUNC_10(VAR_14, FUNC_1(VAR_2->itt));
 VAR_3.ttt = VAR_9->ttt;
 VAR_3.cmd_sn = FUNC_0(VAR_9->cmdsn);
 VAR_3.exp_stat_sn = FUNC_0(VAR_9->exp_statsn);
 VAR_3.hdr_second_dword = FUNC_5(VAR_9->dlength);


 VAR_4.sgl =
          (struct scsi_sge *)VAR_1->gen_pdu.req_bd_tbl;
 VAR_4.sgl_phys_addr.lo =
      (u32)(VAR_1->gen_pdu.req_dma_addr);
 VAR_4.sgl_phys_addr.hi =
         (u32)((u64)VAR_1->gen_pdu.req_dma_addr >> 32);
 VAR_4.total_buffer_size = VAR_10->sge_len;
 VAR_4.num_sges = 1;

 VAR_5.sgl =
         (struct scsi_sge *)VAR_1->gen_pdu.resp_bd_tbl;
 VAR_5.sgl_phys_addr.lo =
     (u32)(VAR_1->gen_pdu.resp_dma_addr);
 VAR_5.sgl_phys_addr.hi =
        (u32)((u64)VAR_1->gen_pdu.resp_dma_addr >> 32);
 VAR_5.total_buffer_size = VAR_11->sge_len;
 VAR_5.num_sges = 1;


 VAR_6.context = VAR_7;
 VAR_6.conn_icid = (u16)VAR_1->iscsi_conn_id;
 VAR_6.itid = VAR_14;
 VAR_6.cq_rss_number = 0;
 VAR_6.tx_io_size = FUNC_5(VAR_9->dlength);
 VAR_6.rx_io_size = VAR_11->sge_len;

 VAR_15 = FUNC_8(VAR_1);
 VAR_6.sqe = &VAR_13->sq[VAR_15];

 FUNC_4(VAR_6.sqe, 0, sizeof(struct iscsi_wqe));
 VAR_16 = FUNC_2(&VAR_6,
      &VAR_3,
      &VAR_4,
      &VAR_5);
 if (VAR_16)
  return -1;

 FUNC_12(&VAR_1->list_lock);
 FUNC_3(&VAR_12->io_cmd, &VAR_1->active_cmd_list);
 VAR_12->io_cmd_in_list = 1;
 VAR_1->active_cmd_count++;
 FUNC_13(&VAR_1->list_lock);

 FUNC_9(VAR_1);
 return 0;
}
