
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct qedf_rport {int sid; struct qedf_ctx* qedf; int flags; } ;
struct qedf_ioreq {int refcount; int xid; TYPE_3__* task; struct qedf_rport* fcport; } ;
struct qedf_els_cb_arg {struct qedf_ioreq* aborted_io_req; } ;
struct qedf_ctx {int dbg_ctx; struct fc_lport* lport; } ;
struct fc_lport {int r_a_tov; } ;
struct fc_els_rrq {void* rrq_rx_id; void* rrq_ox_id; int rrq_s_id; int rrq_cmd; } ;
typedef int rrq ;
struct TYPE_4__ {int rx_id; } ;
struct TYPE_5__ {TYPE_1__ read_write; } ;
struct TYPE_6__ {TYPE_2__ tstorm_st_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,struct qedf_ioreq*,struct qedf_ioreq*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct qedf_els_cb_arg*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct qedf_els_cb_arg* FUNC_7 (int,int ) ;
 int FUNC_8 (struct fc_els_rrq*,int ,int) ;
 int FUNC_9 (struct qedf_rport*,int ,struct fc_els_rrq*,int,int ,struct qedf_els_cb_arg*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct qedf_ioreq *VAR_8)
{

 struct fc_els_rrq VAR_9;
 struct qedf_rport *VAR_10;
 struct fc_lport *VAR_11;
 struct qedf_els_cb_arg *VAR_12 = ((void*)0);
 struct qedf_ctx *VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;
 int VAR_17;

 if (!VAR_8) {
  FUNC_0(((void*)0), "abort_io_req is NULL.\n");
  return -VAR_0;
 }

 VAR_10 = VAR_8->fcport;

 if (!VAR_10) {
  VAR_17 = FUNC_6(&VAR_8->refcount);
  FUNC_0(((void*)0),
    "RRQ work was queued prior to a flush xid=0x%x, refcount=%d.\n",
    VAR_8->xid, VAR_17);
  FUNC_5(&VAR_8->refcount, VAR_6);
  return -VAR_0;
 }


 if (!FUNC_10(VAR_5, &VAR_10->flags)) {
  FUNC_0(((void*)0), "fcport is no longer offloaded.\n");
  return -VAR_0;
 }

 if (!VAR_10->qedf) {
  FUNC_0(((void*)0), "fcport->qedf is NULL.\n");
  return -VAR_0;
 }

 VAR_13 = VAR_10->qedf;





 VAR_17 = FUNC_6(&VAR_8->refcount);
 if (VAR_17 != 1) {
  FUNC_1(&VAR_13->dbg_ctx, VAR_4,
     "refcount for xid=%x io_req=%p refcount=%d is not 1.\n",
     VAR_8->xid, VAR_8, VAR_17);
  return -VAR_0;
 }

 VAR_11 = VAR_13->lport;
 VAR_14 = VAR_10->sid;
 VAR_15 = VAR_11->r_a_tov;

 FUNC_1(&(VAR_13->dbg_ctx), VAR_4, "Sending RRQ orig "
     "io = %p, orig_xid = 0x%x\n", VAR_8,
     VAR_8->xid);
 FUNC_8(&VAR_9, 0, sizeof(VAR_9));

 VAR_12 = FUNC_7(sizeof(struct qedf_els_cb_arg), VAR_3);
 if (!VAR_12) {
  FUNC_0(&(VAR_13->dbg_ctx), "Unable to allocate cb_arg for "
     "RRQ\n");
  VAR_16 = -VAR_2;
  goto rrq_err;
 }

 VAR_12->aborted_io_req = VAR_8;

 VAR_9.rrq_cmd = VAR_1;
 FUNC_2(VAR_9.rrq_s_id, VAR_14);
 VAR_9.rrq_ox_id = FUNC_3(VAR_8->xid);
 VAR_9.rrq_rx_id =
     FUNC_3(VAR_8->task->tstorm_st_context.read_write.rx_id);

 VAR_16 = FUNC_9(VAR_10, VAR_1, &VAR_9, sizeof(VAR_9),
     VAR_7, VAR_12, VAR_15);

rrq_err:
 if (VAR_16) {
  FUNC_0(&(VAR_13->dbg_ctx), "RRQ failed - release orig io "
     "req 0x%x\n", VAR_8->xid);
  FUNC_4(VAR_12);
  FUNC_5(&VAR_8->refcount, VAR_6);
 }
 return VAR_16;
}
