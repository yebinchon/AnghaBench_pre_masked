
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
struct iscsi_tmf_response_hdr {int hdr_second_dword; int max_cmd_sn; int exp_cmd_sn; int stat_sn; int hdr_response; int hdr_flags; int opcode; } ;
struct TYPE_7__ {struct iscsi_tmf_response_hdr tmf_response; } ;
struct TYPE_8__ {TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_4__ cqe_solicited; TYPE_3__ cqe_common; } ;
struct qedi_ctx {int tmf_thread; int dbg_ctx; } ;
struct qedi_conn {int active_cmd_count; int iscsi_conn_id; TYPE_1__* cls_conn; } ;
struct qedi_cmd {int io_cmd_in_list; int task_id; int tmf_work; int io_cmd; TYPE_5__* task; scalar_t__ tmf_resp_buf; } ;
struct iscsi_tm_rsp {void* max_cmdsn; void* exp_cmdsn; void* statsn; int itt; int dlength; scalar_t__ hlength; int response; int flags; int opcode; } ;
struct iscsi_tm {int flags; } ;
struct iscsi_task {struct qedi_cmd* dd_data; } ;
struct iscsi_session {int back_lock; int age; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct TYPE_10__ {scalar_t__ hdr; } ;
struct TYPE_6__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct iscsi_tm_rsp*) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iscsi_tm_rsp*,int ,int) ;
 int FUNC_11 (struct qedi_ctx*,int ) ;
 int VAR_6 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct qedi_ctx *VAR_7,
      union iscsi_cqe *VAR_8,
      struct iscsi_task *VAR_9,
      struct qedi_conn *VAR_10)

{
 struct iscsi_conn *VAR_11 = VAR_10->cls_conn->dd_data;
 struct iscsi_session *VAR_12 = VAR_11->session;
 struct iscsi_tmf_response_hdr *VAR_13;
 struct iscsi_tm_rsp *VAR_14;
 struct iscsi_tm *VAR_15;
 struct qedi_cmd *VAR_16 = ((void*)0);

 VAR_13 = &VAR_8->cqe_common.iscsi_hdr.tmf_response;

 VAR_16 = VAR_9->dd_data;
 VAR_16->tmf_resp_buf = FUNC_7(sizeof(*VAR_14), VAR_0);
 if (!VAR_16->tmf_resp_buf) {
  FUNC_1(&VAR_7->dbg_ctx,
    "Failed to allocate resp buf, cid=0x%x\n",
     VAR_10->iscsi_conn_id);
  return;
 }

 FUNC_13(&VAR_12->back_lock);
 VAR_14 = (struct iscsi_tm_rsp *)VAR_16->tmf_resp_buf;
 FUNC_10(VAR_14, 0, sizeof(struct iscsi_tm_rsp));


 VAR_14->opcode = VAR_13->opcode;
 VAR_14->flags = VAR_13->hdr_flags;
 VAR_14->response = VAR_13->hdr_response;
 VAR_14->hlength = 0;

 FUNC_5(VAR_14->dlength,
        (VAR_13->hdr_second_dword &
  VAR_2));
 VAR_14->itt = FUNC_3(VAR_8->cqe_solicited.itid,
          VAR_11->session->age);
 VAR_14->statsn = FUNC_4(VAR_13->stat_sn);
 VAR_14->exp_cmdsn = FUNC_4(VAR_13->exp_cmd_sn);
 VAR_14->max_cmdsn = FUNC_4(VAR_13->max_cmd_sn);

 VAR_15 = (struct iscsi_tm *)VAR_16->task->hdr;

 if (FUNC_8(VAR_16->io_cmd_in_list)) {
  VAR_16->io_cmd_in_list = 0;
  FUNC_9(&VAR_16->io_cmd);
  VAR_10->active_cmd_count--;
 }

 if (((VAR_15->flags & VAR_1) ==
       VAR_3) ||
     ((VAR_15->flags & VAR_1) ==
       VAR_5) ||
     ((VAR_15->flags & VAR_1) ==
       VAR_4)) {
  FUNC_0(&VAR_16->tmf_work, VAR_6);
  FUNC_12(VAR_7->tmf_thread, &VAR_16->tmf_work);
  goto unblock_sess;
 }

 FUNC_11(VAR_7, VAR_16->task_id);

 FUNC_2(VAR_11, (struct iscsi_hdr *)VAR_14, ((void*)0), 0);
 FUNC_6(VAR_14);

unblock_sess:
 FUNC_14(&VAR_12->back_lock);
}
