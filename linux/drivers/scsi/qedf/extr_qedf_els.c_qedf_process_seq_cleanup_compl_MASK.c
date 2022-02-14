
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ioreq {scalar_t__ event; scalar_t__ xid; int refcount; int timeout_work; struct qedf_els_cb_arg* cb_arg; } ;
struct qedf_els_cb_arg {int r_ctl; int offset; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct fcoe_cqe {int dummy; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qedf_els_cb_arg*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct qedf_ioreq*,int ,int ) ;

void FUNC_5(struct qedf_ctx *VAR_2,
 struct fcoe_cqe *VAR_3, struct qedf_ioreq *VAR_4)
{
 int VAR_5;
 struct qedf_els_cb_arg *VAR_6;

 VAR_6 = VAR_4->cb_arg;


 if (VAR_4->event == VAR_0 || !VAR_3) {
  FUNC_0(&VAR_2->dbg_ctx,
    "cqe is NULL or timeout event (0x%x)", VAR_4->event);
  goto free;
 }


 FUNC_1(&VAR_4->timeout_work);

 VAR_5 = FUNC_4(VAR_4, VAR_6->offset, VAR_6->r_ctl);
 if (VAR_5)
  FUNC_0(&(VAR_2->dbg_ctx), "Unable to send SRR, I/O will "
      "abort, xid=0x%x.\n", VAR_4->xid);
free:
 FUNC_2(VAR_6);
 FUNC_3(&VAR_4->refcount, VAR_1);
}
