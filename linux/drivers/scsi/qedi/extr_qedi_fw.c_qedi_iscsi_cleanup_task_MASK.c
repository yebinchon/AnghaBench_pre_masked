
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
typedef int task_params ;
struct qedi_endpoint {struct iscsi_task_params* sq; } ;
struct qedi_conn {struct qedi_endpoint* ep; int iscsi_conn_id; TYPE_1__* qedi; } ;
struct qedi_cmd {int task_id; int state; } ;
struct iscsi_wqe {int dummy; } ;
struct iscsi_task_params {int itid; struct iscsi_task_params* sqe; } ;
struct iscsi_task {int state; int itt; struct qedi_cmd* dd_data; struct iscsi_conn* conn; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;
struct TYPE_2__ {int dbg_ctx; } ;


 int FUNC_0 (int *,int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_task_params*) ;
 int FUNC_3 (struct iscsi_task_params*,int ,int) ;
 size_t FUNC_4 (struct qedi_conn*) ;
 int FUNC_5 (struct qedi_conn*) ;

int FUNC_6(struct iscsi_task *VAR_1, bool VAR_2)
{
 struct iscsi_task_params VAR_3;
 struct qedi_endpoint *VAR_4;
 struct iscsi_conn *VAR_5 = VAR_1->conn;
 struct qedi_conn *VAR_6 = VAR_5->dd_data;
 struct qedi_cmd *VAR_7 = VAR_1->dd_data;
 u16 VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_0(&VAR_6->qedi->dbg_ctx, VAR_0,
    "issue cleanup tid=0x%x itt=0x%x task_state=%d cmd_state=0%x cid=0x%x\n",
    VAR_7->task_id, FUNC_1(VAR_1->itt), VAR_1->state,
    VAR_7->state, VAR_6->iscsi_conn_id);

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_4 = VAR_6->ep;

 VAR_8 = FUNC_4(VAR_6);

 VAR_3.sqe = &VAR_4->sq[VAR_8];
 FUNC_3(VAR_3.sqe, 0, sizeof(struct iscsi_wqe));
 VAR_3.itid = VAR_7->task_id;

 VAR_9 = FUNC_2(&VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_6);
 return 0;
}
