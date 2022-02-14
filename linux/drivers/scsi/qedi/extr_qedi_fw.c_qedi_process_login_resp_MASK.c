
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
struct iscsi_login_response_hdr {int hdr_second_dword; int status_detail; int status_class; int max_cmd_sn; int exp_cmd_sn; int stat_sn; int tsih; int flags_attr; int opcode; } ;
struct TYPE_7__ {struct iscsi_login_response_hdr login_response; } ;
struct TYPE_8__ {TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_4__ cqe_solicited; TYPE_3__ cqe_common; } ;
struct qedi_ctx {int dbg_ctx; int tasks; } ;
struct TYPE_10__ {scalar_t__ resp_buf; scalar_t__ resp_wr_ptr; int resp_hdr; } ;
struct qedi_conn {int iscsi_conn_id; TYPE_5__ gen_pdu; int active_cmd_count; TYPE_1__* cls_conn; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int state; int io_cmd; } ;
struct iscsi_task {scalar_t__ dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_login_rsp {int status_detail; int status_class; void* max_cmdsn; void* exp_cmdsn; void* statsn; int tsih; int itt; int dlength; scalar_t__ hlength; int flags; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct e4_iscsi_task_context {int status_detail; int status_class; void* max_cmdsn; void* exp_cmdsn; void* statsn; int tsih; int itt; int dlength; scalar_t__ hlength; int flags; int opcode; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_hdr*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iscsi_login_rsp*,char,int) ;
 int FUNC_8 (struct qedi_ctx*,int ) ;
 struct iscsi_login_rsp* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct qedi_ctx *VAR_3,
        union iscsi_cqe *VAR_4,
        struct iscsi_task *VAR_5,
        struct qedi_conn *VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_6->cls_conn->dd_data;
 struct iscsi_session *VAR_8 = VAR_7->session;
 struct e4_iscsi_task_context *VAR_9;
 struct iscsi_login_rsp *VAR_10;
 struct iscsi_login_response_hdr *VAR_11;
 struct qedi_cmd *VAR_12;
 int VAR_13;

 VAR_12 = (struct qedi_cmd *)VAR_5->dd_data;

 VAR_11 = &VAR_4->cqe_common.iscsi_hdr.login_response;
 VAR_9 = FUNC_9(&VAR_3->tasks, VAR_12->task_id);

 FUNC_10(&VAR_8->back_lock);
 VAR_10 = (struct iscsi_login_rsp *)&VAR_6->gen_pdu.resp_hdr;
 FUNC_7(VAR_10, 0, sizeof(struct iscsi_login_rsp));
 VAR_10->opcode = VAR_11->opcode;
 VAR_10->flags = VAR_11->flags_attr;
 VAR_10->hlength = 0;

 FUNC_4(VAR_10->dlength,
        (VAR_11->hdr_second_dword &
  VAR_0));
 VAR_10->itt = FUNC_2(VAR_4->cqe_solicited.itid,
          VAR_7->session->age);
 VAR_10->tsih = VAR_11->tsih;
 VAR_10->statsn = FUNC_3(VAR_11->stat_sn);
 VAR_10->exp_cmdsn = FUNC_3(VAR_11->exp_cmd_sn);
 VAR_10->max_cmdsn = FUNC_3(VAR_11->max_cmd_sn);
 VAR_10->status_class = VAR_11->status_class;
 VAR_10->status_detail = VAR_11->status_detail;
 VAR_13 = VAR_11->hdr_second_dword &
    VAR_0;
 VAR_6->gen_pdu.resp_wr_ptr = VAR_6->gen_pdu.resp_buf + VAR_13;

 if (FUNC_5(VAR_12->io_cmd_in_list)) {
  VAR_12->io_cmd_in_list = 0;
  FUNC_6(&VAR_12->io_cmd);
  VAR_6->active_cmd_count--;
 }

 FUNC_7(VAR_9, '\0', sizeof(*VAR_9));

 FUNC_1(VAR_7, (struct iscsi_hdr *)VAR_10,
        VAR_6->gen_pdu.resp_buf,
        (VAR_6->gen_pdu.resp_wr_ptr -
        VAR_6->gen_pdu.resp_buf));

 FUNC_11(&VAR_8->back_lock);
 FUNC_0(&VAR_3->dbg_ctx, VAR_1,
    "Freeing tid=0x%x for cid=0x%x\n",
    VAR_12->task_id, VAR_6->iscsi_conn_id);
 VAR_12->state = VAR_2;
 FUNC_8(VAR_3, VAR_12->task_id);
}
