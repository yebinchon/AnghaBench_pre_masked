
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
struct fc_els_rec {void* rec_rx_id; void* rec_ox_id; int rec_s_id; int rec_cmd; } ;
typedef int rec ;
struct TYPE_4__ {int rx_id; } ;
struct TYPE_5__ {TYPE_1__ read_write; } ;
struct TYPE_6__ {TYPE_2__ tstorm_st_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,struct qedf_ioreq*,int ,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct qedf_els_cb_arg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct qedf_els_cb_arg* FUNC_7 (int,int ) ;
 int FUNC_8 (struct fc_els_rec*,int ,int) ;
 int FUNC_9 (struct qedf_rport*,int ,struct fc_els_rec*,int,int ,struct qedf_els_cb_arg*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct qedf_ioreq *VAR_8)
{

 struct fc_els_rec VAR_9;
 struct qedf_rport *VAR_10;
 struct fc_lport *VAR_11;
 struct qedf_els_cb_arg *VAR_12 = ((void*)0);
 struct qedf_ctx *VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 if (!VAR_8) {
  FUNC_0(((void*)0), "orig_io_req is NULL.\n");
  return -VAR_0;
 }

 VAR_10 = VAR_8->fcport;


 if (!FUNC_10(VAR_5, &VAR_10->flags)) {
  FUNC_0(((void*)0), "fcport is no longer offloaded.\n");
  return -VAR_0;
 }

 if (!VAR_10->qedf) {
  FUNC_0(((void*)0), "fcport->qedf is NULL.\n");
  return -VAR_0;
 }


 FUNC_5(&VAR_8->refcount);

 VAR_13 = VAR_10->qedf;
 VAR_11 = VAR_13->lport;
 VAR_14 = VAR_10->sid;
 VAR_15 = VAR_11->r_a_tov;

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));

 VAR_12 = FUNC_7(sizeof(struct qedf_els_cb_arg), VAR_3);
 if (!VAR_12) {
  FUNC_0(&(VAR_13->dbg_ctx), "Unable to allocate cb_arg for "
     "REC\n");
  VAR_16 = -VAR_2;
  goto rec_err;
 }

 VAR_12->aborted_io_req = VAR_8;

 VAR_9.rec_cmd = VAR_1;
 FUNC_2(VAR_9.rec_s_id, VAR_14);
 VAR_9.rec_ox_id = FUNC_3(VAR_8->xid);
 VAR_9.rec_rx_id =
     FUNC_3(VAR_8->task->tstorm_st_context.read_write.rx_id);

 FUNC_1(&(VAR_13->dbg_ctx), VAR_4, "Sending REC orig_io=%p, "
    "orig_xid=0x%x rx_id=0x%x\n", VAR_8,
    VAR_8->xid, VAR_9.rec_rx_id);
 VAR_16 = FUNC_9(VAR_10, VAR_1, &VAR_9, sizeof(VAR_9),
     VAR_6, VAR_12, VAR_15);

rec_err:
 if (VAR_16) {
  FUNC_0(&(VAR_13->dbg_ctx), "REC failed - release orig_io_req"
     "=0x%x\n", VAR_8->xid);
  FUNC_4(VAR_12);
  FUNC_6(&VAR_8->refcount, VAR_7);
 }
 return VAR_16;
}
