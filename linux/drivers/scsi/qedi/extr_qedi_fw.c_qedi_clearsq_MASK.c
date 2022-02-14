
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_endpoint {int handle; } ;
struct qedi_ctx {int dbg_ctx; int cdev; } ;
struct qedi_conn {int iscsi_conn_id; scalar_t__ cmd_cleanup_cmpl; scalar_t__ cmd_cleanup_req; struct qedi_endpoint* ep; } ;
struct iscsi_task {int dummy; } ;
struct TYPE_2__ {int (* clear_sq ) (int ,int ) ;} ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ,char*,int ,struct qedi_conn*,struct qedi_endpoint*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct qedi_ctx*,struct qedi_conn*,struct iscsi_task*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct qedi_ctx *VAR_2, struct qedi_conn *VAR_3,
    struct iscsi_task *VAR_4)
{
 struct qedi_endpoint *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->ep;
 VAR_3->cmd_cleanup_req = 0;
 VAR_3->cmd_cleanup_cmpl = 0;

 if (!VAR_5) {
  FUNC_2(&VAR_2->dbg_ctx,
     "Cannot proceed, ep already disconnected, cid=0x%x\n",
     VAR_3->iscsi_conn_id);
  return;
 }

 FUNC_1(&VAR_2->dbg_ctx, VAR_0,
    "Clearing SQ for cid=0x%x, conn=%p, ep=%p\n",
    VAR_3->iscsi_conn_id, VAR_3, VAR_5);

 VAR_1->clear_sq(VAR_2->cdev, VAR_5->handle);

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, 1);
 if (VAR_6) {
  FUNC_0(&VAR_2->dbg_ctx,
    "fatal error, need hard reset, cid=0x%x\n",
    VAR_3->iscsi_conn_id);
  FUNC_3(1);
 }
}
