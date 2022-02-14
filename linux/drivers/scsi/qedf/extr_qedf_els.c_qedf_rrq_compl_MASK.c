
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ioreq {scalar_t__ event; int refcount; int xid; int timeout_work; TYPE_1__* fcport; } ;
struct qedf_els_cb_arg {struct qedf_ioreq* aborted_io_req; struct qedf_ioreq* io_req; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct TYPE_2__ {struct qedf_ctx* qedf; } ;


 int FUNC_0 (int *,char*,struct qedf_ioreq*) ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qedf_els_cb_arg*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct qedf_els_cb_arg *VAR_4)
{
 struct qedf_ioreq *VAR_5;
 struct qedf_ioreq *VAR_6;
 struct qedf_ctx *VAR_7;
 int VAR_8;

 VAR_6 = VAR_4->io_req;
 VAR_7 = VAR_6->fcport->qedf;

 FUNC_1(&(VAR_7->dbg_ctx), VAR_2, "Entered.\n");

 VAR_5 = VAR_4->aborted_io_req;

 if (!VAR_5) {
  FUNC_0(&VAR_7->dbg_ctx,
    "Original io_req is NULL, rrq_req = %p.\n", VAR_6);
  goto out_free;
 }

 if (VAR_6->event != VAR_1 &&
     VAR_6->event != VAR_0)
  FUNC_2(&VAR_5->timeout_work);

 VAR_8 = FUNC_5(&VAR_5->refcount);
 FUNC_1(&(VAR_7->dbg_ctx), VAR_2, "rrq_compl: orig io = %p,"
     " orig xid = 0x%x, rrq_xid = 0x%x, refcount=%d\n",
     VAR_5, VAR_5->xid, VAR_6->xid, VAR_8);






 if (VAR_5 && VAR_8 > 0)
  FUNC_4(&VAR_5->refcount, VAR_3);

out_free:






 if (VAR_6->event == VAR_1)
  FUNC_4(&VAR_6->refcount, VAR_3);
 FUNC_3(VAR_4);
}
