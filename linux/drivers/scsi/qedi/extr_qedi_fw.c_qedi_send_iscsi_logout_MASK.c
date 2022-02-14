
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
typedef int tx_sgl_task_params ;
typedef int task_params ;
struct scsi_sgl_task_params {int reason_code; size_t conn_icid; int itid; struct scsi_sgl_task_params* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct scsi_sgl_task_params* context; scalar_t__ cid; void* cmd_sn; void* exp_stat_sn; int itt; int opcode; } ;
struct qedi_endpoint {struct scsi_sgl_task_params* sq; } ;
struct qedi_ctx {int tasks; } ;
struct qedi_conn {int list_lock; int active_cmd_count; int active_cmd_list; scalar_t__ iscsi_conn_id; struct qedi_endpoint* ep; struct qedi_ctx* qedi; } ;
struct qedi_cmd {int task_id; int io_cmd_in_list; int io_cmd; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_task_params {int reason_code; size_t conn_icid; int itid; struct iscsi_task_params* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct iscsi_task_params* context; scalar_t__ cid; void* cmd_sn; void* exp_stat_sn; int itt; int opcode; } ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct iscsi_logout_req_hdr {int reason_code; size_t conn_icid; int itid; struct iscsi_logout_req_hdr* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct iscsi_logout_req_hdr* context; scalar_t__ cid; void* cmd_sn; void* exp_stat_sn; int itt; int opcode; } ;
struct iscsi_logout {int flags; int cmdsn; int exp_statsn; int opcode; } ;
struct e4_iscsi_task_context {int reason_code; size_t conn_icid; int itid; struct e4_iscsi_task_context* sqe; scalar_t__ rx_io_size; scalar_t__ tx_io_size; scalar_t__ cq_rss_number; struct e4_iscsi_task_context* context; scalar_t__ cid; void* cmd_sn; void* exp_stat_sn; int itt; int opcode; } ;
typedef int s16 ;
typedef int rx_sgl_task_params ;
typedef int logout_pdu_header ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_sgl_task_params*,struct scsi_sgl_task_params*,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct scsi_sgl_task_params*,int ,int) ;
 int FUNC_5 (struct qedi_ctx*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 size_t FUNC_7 (struct qedi_conn*) ;
 int FUNC_8 (struct qedi_conn*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct qedi_ctx*,int,int ,struct qedi_cmd*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct qedi_conn *VAR_1,
      struct iscsi_task *VAR_2)
{
 struct iscsi_logout_req_hdr VAR_3;
 struct scsi_sgl_task_params VAR_4;
 struct scsi_sgl_task_params VAR_5;
 struct iscsi_task_params VAR_6;
 struct e4_iscsi_task_context *VAR_7;
 struct iscsi_logout *VAR_8 = ((void*)0);
 struct qedi_ctx *VAR_9 = VAR_1->qedi;
 struct qedi_cmd *VAR_10;
 struct qedi_endpoint *VAR_11;
 s16 VAR_12 = 0;
 u16 VAR_13 = 0;
 int VAR_14 = 0;

 VAR_10 = (struct qedi_cmd *)VAR_2->dd_data;
 VAR_8 = (struct iscsi_logout *)VAR_2->hdr;
 VAR_11 = VAR_1->ep;

 VAR_12 = FUNC_5(VAR_9);
 if (VAR_12 == -1)
  return -VAR_0;

 VAR_7 =
      (struct e4_iscsi_task_context *)FUNC_6(&VAR_9->tasks,
              VAR_12);
 FUNC_4(VAR_7, 0, sizeof(struct e4_iscsi_task_context));

 VAR_10->task_id = VAR_12;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_5, 0, sizeof(VAR_5));


 VAR_3.opcode = VAR_8->opcode;
 VAR_3.reason_code = 0x80 | VAR_8->flags;
 FUNC_10(VAR_9, VAR_12, VAR_2->itt, VAR_10);
 VAR_3.itt = FUNC_9(VAR_12, FUNC_1(VAR_2->itt));
 VAR_3.exp_stat_sn = FUNC_0(VAR_8->exp_statsn);
 VAR_3.cmd_sn = FUNC_0(VAR_8->cmdsn);
 VAR_3.cid = VAR_1->iscsi_conn_id;


 VAR_6.context = VAR_7;
 VAR_6.conn_icid = (u16)VAR_1->iscsi_conn_id;
 VAR_6.itid = VAR_12;
 VAR_6.cq_rss_number = 0;
 VAR_6.tx_io_size = 0;
 VAR_6.rx_io_size = 0;

 VAR_13 = FUNC_7(VAR_1);
 VAR_6.sqe = &VAR_11->sq[VAR_13];
 FUNC_4(VAR_6.sqe, 0, sizeof(struct iscsi_wqe));

 VAR_14 = FUNC_2(&VAR_6,
        &VAR_3,
        ((void*)0), ((void*)0));
 if (VAR_14)
  return -1;

 FUNC_11(&VAR_1->list_lock);
 FUNC_3(&VAR_10->io_cmd, &VAR_1->active_cmd_list);
 VAR_10->io_cmd_in_list = 1;
 VAR_1->active_cmd_count++;
 FUNC_12(&VAR_1->list_lock);

 FUNC_8(VAR_1);
 return 0;
}
