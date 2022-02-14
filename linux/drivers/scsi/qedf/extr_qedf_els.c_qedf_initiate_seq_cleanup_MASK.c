
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct qedf_rport {int rport_lock; struct fcoe_wqe* sq; TYPE_1__* qedf; } ;
struct qedf_ioreq {TYPE_2__* task_params; struct qedf_els_cb_arg* cb_arg; int cmd_type; int refcount; int xid; struct qedf_rport* fcport; } ;
struct qedf_els_cb_arg {int r_ctl; int offset; } ;
struct fcoe_wqe {int dummy; } ;
struct TYPE_4__ {struct fcoe_wqe* sqe; } ;
struct TYPE_3__ {int dbg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 struct qedf_els_cb_arg* FUNC_4 (int,int ) ;
 int FUNC_5 (struct fcoe_wqe*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct qedf_ioreq*,int) ;
 size_t FUNC_7 (struct qedf_rport*) ;
 int FUNC_8 (struct qedf_rport*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct qedf_ioreq *VAR_5,
 u32 VAR_6, u8 VAR_7)
{
 struct qedf_rport *VAR_8;
 unsigned long VAR_9;
 struct qedf_els_cb_arg *VAR_10;
 struct fcoe_wqe *VAR_11;
 u16 VAR_12;

 VAR_8 = VAR_5->fcport;

 FUNC_1(&(VAR_8->qedf->dbg_ctx), VAR_3,
     "Doing sequence cleanup for xid=0x%x offset=%u.\n",
     VAR_5->xid, VAR_6);

 VAR_10 = FUNC_4(sizeof(struct qedf_els_cb_arg), VAR_0);
 if (!VAR_10) {
  FUNC_0(&(VAR_8->qedf->dbg_ctx), "Unable to allocate cb_arg "
     "for sequence cleanup\n");
  return;
 }


 FUNC_3(&VAR_5->refcount);

 VAR_5->cmd_type = VAR_4;
 VAR_10->offset = VAR_6;
 VAR_10->r_ctl = VAR_7;
 VAR_5->cb_arg = VAR_10;

 FUNC_6(VAR_8->qedf, VAR_5,
     VAR_2 * VAR_1);

 FUNC_9(&VAR_8->rport_lock, VAR_9);

 VAR_12 = FUNC_7(VAR_8);
 VAR_11 = &VAR_8->sq[VAR_12];
 FUNC_5(VAR_11, 0, sizeof(struct fcoe_wqe));
 VAR_5->task_params->sqe = VAR_11;

 FUNC_2(VAR_5->task_params,
         VAR_6);
 FUNC_8(VAR_8);

 FUNC_10(&VAR_8->rport_lock, VAR_9);
}
