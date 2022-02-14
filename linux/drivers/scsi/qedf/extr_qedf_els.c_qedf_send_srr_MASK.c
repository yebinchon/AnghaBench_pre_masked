
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qedf_rport {struct qedf_ctx* qedf; int flags; } ;
struct qedf_ioreq {int flags; int refcount; int xid; int rx_id; struct qedf_rport* fcport; } ;
struct qedf_els_cb_arg {struct qedf_ioreq* aborted_io_req; } ;
struct qedf_ctx {int dbg_ctx; struct fc_lport* lport; } ;
struct fcp_srr {int srr_r_ctl; int srr_rel_off; void* srr_rx_id; void* srr_ox_id; int srr_op; } ;
struct fc_lport {int r_a_tov; } ;
typedef int srr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,struct qedf_ioreq*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct qedf_els_cb_arg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct qedf_els_cb_arg* FUNC_7 (int,int ) ;
 int FUNC_8 (struct fcp_srr*,int ,int) ;
 int FUNC_9 (struct qedf_ioreq*,int) ;
 int FUNC_10 (struct qedf_rport*,int ,struct fcp_srr*,int,int ,struct qedf_els_cb_arg*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct qedf_ioreq *VAR_9, u32 VAR_10, u8 VAR_11)
{
 struct fcp_srr VAR_12;
 struct qedf_ctx *VAR_13;
 struct qedf_rport *VAR_14;
 struct fc_lport *VAR_15;
 struct qedf_els_cb_arg *VAR_16 = ((void*)0);
 u32 VAR_17;
 int VAR_18;

 if (!VAR_9) {
  FUNC_0(((void*)0), "orig_io_req is NULL.\n");
  return -VAR_0;
 }

 VAR_14 = VAR_9->fcport;


 if (!FUNC_12(VAR_6, &VAR_14->flags)) {
  FUNC_0(((void*)0), "fcport is no longer offloaded.\n");
  return -VAR_0;
 }

 if (!VAR_14->qedf) {
  FUNC_0(((void*)0), "fcport->qedf is NULL.\n");
  return -VAR_0;
 }


 FUNC_5(&VAR_9->refcount);

 VAR_13 = VAR_14->qedf;
 VAR_15 = VAR_13->lport;
 VAR_17 = VAR_15->r_a_tov;

 FUNC_1(&(VAR_13->dbg_ctx), VAR_5, "Sending SRR orig_io=%p, "
     "orig_xid=0x%x\n", VAR_9, VAR_9->xid);
 FUNC_8(&VAR_12, 0, sizeof(VAR_12));

 VAR_16 = FUNC_7(sizeof(struct qedf_els_cb_arg), VAR_3);
 if (!VAR_16) {
  FUNC_0(&(VAR_13->dbg_ctx), "Unable to allocate cb_arg for "
     "SRR\n");
  VAR_18 = -VAR_2;
  goto srr_err;
 }

 VAR_16->aborted_io_req = VAR_9;

 VAR_12.srr_op = VAR_1;
 VAR_12.srr_ox_id = FUNC_3(VAR_9->xid);
 VAR_12.srr_rx_id = FUNC_3(VAR_9->rx_id);
 VAR_12.srr_rel_off = FUNC_2(VAR_10);
 VAR_12.srr_r_ctl = VAR_11;

 VAR_18 = FUNC_10(VAR_14, VAR_1, &VAR_12, sizeof(VAR_12),
     VAR_8, VAR_16, VAR_17);

srr_err:
 if (VAR_18) {
  FUNC_0(&(VAR_13->dbg_ctx), "SRR failed - release orig_io_req"
     "=0x%x\n", VAR_9->xid);
  FUNC_4(VAR_16);

  FUNC_9(VAR_9, 1);
  FUNC_6(&VAR_9->refcount, VAR_7);
 } else

  FUNC_11(VAR_4, &VAR_9->flags);

 return VAR_18;
}
