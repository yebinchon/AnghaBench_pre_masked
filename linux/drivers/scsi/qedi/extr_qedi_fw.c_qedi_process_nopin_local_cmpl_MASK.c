
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {TYPE_1__* cls_conn; } ;
struct qedi_cmd {int task_id; int state; } ;
struct iscsi_task {struct qedi_cmd* dd_data; } ;
struct iscsi_session {int back_lock; } ;
struct iscsi_cqe_solicited {int itid; } ;
struct iscsi_conn {struct iscsi_session* session; } ;
struct TYPE_2__ {struct iscsi_conn* dd_data; } ;


 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (struct qedi_ctx*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qedi_ctx *VAR_2,
       struct iscsi_cqe_solicited *VAR_3,
       struct iscsi_task *VAR_4,
       struct qedi_conn *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_5->cls_conn->dd_data;
 struct iscsi_session *VAR_7 = VAR_6->session;
 struct qedi_cmd *VAR_8 = VAR_4->dd_data;

 FUNC_0(&VAR_2->dbg_ctx, VAR_0,
    "itid=0x%x, cmd task id=0x%x\n",
    VAR_3->itid, VAR_8->task_id);

 VAR_8->state = VAR_1;
 FUNC_2(VAR_2, VAR_8->task_id);

 FUNC_3(&VAR_7->back_lock);
 FUNC_1(VAR_4);
 FUNC_4(&VAR_7->back_lock);
}
