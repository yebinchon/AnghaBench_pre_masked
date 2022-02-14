
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int itid; } ;
struct iscsi_text_response_hdr {int hdr_second_dword; int max_cmd_sn; int exp_cmd_sn; int stat_sn; int ttt; int flags; int opcode; } ;
struct TYPE_7__ {struct iscsi_text_response_hdr text_response; } ;
struct TYPE_8__ {TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_4__ cqe_solicited; TYPE_3__ cqe_common; } ;
struct qedi_ctx {int dbg_ctx; int tasks; } ;
struct TYPE_10__ {scalar_t__ resp_buf; scalar_t__ resp_wr_ptr; int resp_hdr; } ;
struct qedi_conn {TYPE_5__ gen_pdu; int iscsi_conn_id; int active_cmd_count; TYPE_1__* cls_conn; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int state; int io_cmd; } ;
struct iscsi_text_rsp {void* max_cmdsn; void* exp_cmdsn; void* statsn; int ttt; int itt; int dlength; scalar_t__ hlength; int flags; int opcode; } ;
struct iscsi_task {scalar_t__ dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct e4_iscsi_task_context {void* max_cmdsn; void* exp_cmdsn; void* statsn; int ttt; int itt; int dlength; scalar_t__ hlength; int flags; int opcode; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iscsi_text_rsp*,char,int) ;
 int FUNC_8 (struct qedi_ctx*,int ) ;
 struct iscsi_text_rsp* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct qedi_ctx *VAR_4,
       union iscsi_cqe *VAR_5,
       struct iscsi_task *VAR_6,
       struct qedi_conn *VAR_7)
{
 struct iscsi_conn *VAR_8 = VAR_7->cls_conn->dd_data;
 struct iscsi_session *VAR_9 = VAR_8->session;
 struct e4_iscsi_task_context *VAR_10;
 struct iscsi_text_rsp *VAR_11;
 struct iscsi_text_response_hdr *VAR_12;
 struct qedi_cmd *VAR_13;
 int VAR_14;

 VAR_13 = (struct qedi_cmd *)VAR_6->dd_data;
 VAR_10 = FUNC_9(&VAR_4->tasks, VAR_13->task_id);

 VAR_12 = &VAR_5->cqe_common.iscsi_hdr.text_response;
 FUNC_10(&VAR_9->back_lock);
 VAR_11 = (struct iscsi_text_rsp *)&VAR_7->gen_pdu.resp_hdr;
 FUNC_7(VAR_11, 0, sizeof(struct iscsi_hdr));
 VAR_11->opcode = VAR_12->opcode;
 VAR_11->flags = VAR_12->flags;
 VAR_11->hlength = 0;

 FUNC_4(VAR_11->dlength,
        (VAR_12->hdr_second_dword &
  VAR_0));

 VAR_11->itt = FUNC_2(VAR_5->cqe_solicited.itid,
          VAR_8->session->age);
 VAR_11->ttt = VAR_12->ttt;
 VAR_11->statsn = FUNC_3(VAR_12->stat_sn);
 VAR_11->exp_cmdsn = FUNC_3(VAR_12->exp_cmd_sn);
 VAR_11->max_cmdsn = FUNC_3(VAR_12->max_cmd_sn);

 VAR_14 = VAR_12->hdr_second_dword &
    VAR_0;
 VAR_7->gen_pdu.resp_wr_ptr = VAR_7->gen_pdu.resp_buf + VAR_14;

 FUNC_7(VAR_10, '\0', sizeof(*VAR_10));

 FUNC_0(&VAR_4->dbg_ctx, VAR_2,
    "Freeing tid=0x%x for cid=0x%x\n",
    VAR_13->task_id, VAR_7->iscsi_conn_id);

 if (FUNC_5(VAR_13->io_cmd_in_list)) {
  VAR_13->io_cmd_in_list = 0;
  FUNC_6(&VAR_13->io_cmd);
  VAR_7->active_cmd_count--;
 } else {
  FUNC_0(&VAR_4->dbg_ctx, VAR_1,
     "Active cmd list node already deleted, tid=0x%x, cid=0x%x, io_cmd_node=%p\n",
     VAR_13->task_id, VAR_7->iscsi_conn_id,
     &VAR_13->io_cmd);
 }

 VAR_13->state = VAR_3;
 FUNC_8(VAR_4, VAR_13->task_id);

 FUNC_1(VAR_8, (struct iscsi_hdr *)VAR_11,
        VAR_7->gen_pdu.resp_buf,
        (VAR_7->gen_pdu.resp_wr_ptr -
         VAR_7->gen_pdu.resp_buf));
 FUNC_11(&VAR_9->back_lock);
}
