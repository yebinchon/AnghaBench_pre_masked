
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int itid; } ;
struct iscsi_logout_response_hdr {int time_2_retain; int time_2_wait; int max_cmd_sn; int exp_cmd_sn; int stat_sn; int flags; int opcode; } ;
struct TYPE_7__ {struct iscsi_logout_response_hdr logout_response; } ;
struct TYPE_8__ {TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_5__ cqe_solicited; TYPE_3__ cqe_common; } ;
struct qedi_ctx {int dbg_ctx; } ;
struct TYPE_9__ {int resp_hdr; } ;
struct qedi_conn {int iscsi_conn_id; int active_cmd_count; TYPE_4__ gen_pdu; TYPE_1__* cls_conn; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int state; int io_cmd; } ;
struct iscsi_task {scalar_t__ dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_logout_rsp {void* t2retain; void* t2wait; void* max_cmdsn; void* exp_cmdsn; void* statsn; int itt; scalar_t__ hlength; int flags; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (int *,int ,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iscsi_logout_rsp*,int ,int) ;
 int FUNC_7 (struct qedi_ctx*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct qedi_ctx *VAR_3,
         union iscsi_cqe *VAR_4,
         struct iscsi_task *VAR_5,
         struct qedi_conn *VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_6->cls_conn->dd_data;
 struct iscsi_logout_rsp *VAR_8;
 struct iscsi_session *VAR_9 = VAR_7->session;
 struct iscsi_logout_response_hdr *VAR_10;
 struct qedi_cmd *VAR_11;

 VAR_11 = (struct qedi_cmd *)VAR_5->dd_data;
 VAR_10 = &VAR_4->cqe_common.iscsi_hdr.logout_response;
 FUNC_8(&VAR_9->back_lock);
 VAR_8 = (struct iscsi_logout_rsp *)&VAR_6->gen_pdu.resp_hdr;
 FUNC_6(VAR_8, 0, sizeof(struct iscsi_hdr));
 VAR_8->opcode = VAR_10->opcode;
 VAR_8->flags = VAR_10->flags;
 VAR_8->hlength = 0;

 VAR_8->itt = FUNC_2(VAR_4->cqe_solicited.itid, VAR_7->session->age);
 VAR_8->statsn = FUNC_3(VAR_10->stat_sn);
 VAR_8->exp_cmdsn = FUNC_3(VAR_10->exp_cmd_sn);
 VAR_8->max_cmdsn = FUNC_3(VAR_10->max_cmd_sn);

 VAR_8->t2wait = FUNC_3(VAR_10->time_2_wait);
 VAR_8->t2retain = FUNC_3(VAR_10->time_2_retain);

 FUNC_0(&VAR_3->dbg_ctx, VAR_1,
    "Freeing tid=0x%x for cid=0x%x\n",
    VAR_11->task_id, VAR_6->iscsi_conn_id);

 if (FUNC_4(VAR_11->io_cmd_in_list)) {
  VAR_11->io_cmd_in_list = 0;
  FUNC_5(&VAR_11->io_cmd);
  VAR_6->active_cmd_count--;
 } else {
  FUNC_0(&VAR_3->dbg_ctx, VAR_0,
     "Active cmd list node already deleted, tid=0x%x, cid=0x%x, io_cmd_node=%p\n",
     VAR_11->task_id, VAR_6->iscsi_conn_id,
     &VAR_11->io_cmd);
 }

 VAR_11->state = VAR_2;
 FUNC_7(VAR_3, VAR_11->task_id);
 FUNC_1(VAR_7, (struct iscsi_hdr *)VAR_8, ((void*)0), 0);

 FUNC_9(&VAR_9->back_lock);
}
