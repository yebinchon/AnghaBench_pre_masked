
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qedf_rport {int rport_lock; struct fcoe_wqe* sq; int flags; int free_sqes; struct fc_rport_priv* rdata; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {size_t xid; int return_scsi_cmd_on_abts; TYPE_1__* task_params; int refcount; int flags; int cmd_type; int sc_cmd; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; int packet_aborts; int control_requests; int link_down_tmo_valid; struct fc_lport* lport; } ;
struct fcoe_wqe {int dummy; } ;
struct fc_rport_priv {int kref; int r_a_tov; } ;
struct fc_lport {scalar_t__ state; int link_up; } ;
struct TYPE_2__ {struct fcoe_wqe* sqe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,size_t,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fcoe_wqe*,int ,int) ;
 int FUNC_9 (struct qedf_ctx*,struct qedf_ioreq*,int ) ;
 size_t FUNC_10 (struct qedf_rport*) ;
 int FUNC_11 (struct qedf_rport*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ,int *) ;

int FUNC_16(struct qedf_ioreq *VAR_10, bool VAR_11)
{
 struct fc_lport *VAR_12;
 struct qedf_rport *VAR_13 = VAR_10->fcport;
 struct fc_rport_priv *VAR_14;
 struct qedf_ctx *VAR_15;
 u16 VAR_16;
 u32 VAR_17 = 0;
 int VAR_18 = 0;
 unsigned long VAR_19;
 struct fcoe_wqe *VAR_20;
 u16 VAR_21;
 int VAR_22 = 0;


 if (!FUNC_15(VAR_7, &VAR_13->flags)) {
  FUNC_0(((void*)0), "tgt not offloaded\n");
  VAR_18 = 1;
  goto out;
 }

 VAR_15 = VAR_13->qedf;
 VAR_14 = VAR_13->rdata;

 if (!VAR_14 || !FUNC_5(&VAR_14->kref)) {
  FUNC_0(&VAR_15->dbg_ctx, "stale rport\n");
  VAR_18 = 1;
  goto out;
 }

 VAR_17 = VAR_14->r_a_tov;
 VAR_12 = VAR_15->lport;

 if (VAR_12->state != VAR_0 || !(VAR_12->link_up)) {
  FUNC_0(&(VAR_15->dbg_ctx), "link is not ready\n");
  VAR_18 = 1;
  goto drop_rdata_kref;
 }

 if (FUNC_2(&VAR_15->link_down_tmo_valid) > 0) {
  FUNC_0(&(VAR_15->dbg_ctx), "link_down_tmo active.\n");
  VAR_18 = 1;
  goto drop_rdata_kref;
 }


 if (!FUNC_2(&VAR_13->free_sqes)) {
  FUNC_0(&(VAR_15->dbg_ctx), "No SQ entries available\n");
  VAR_18 = 1;
  goto drop_rdata_kref;
 }

 if (FUNC_15(VAR_8, &VAR_13->flags)) {
  FUNC_0(&VAR_15->dbg_ctx, "fcport is uploading.\n");
  VAR_18 = 1;
  goto drop_rdata_kref;
 }

 if (!FUNC_15(VAR_5, &VAR_10->flags) ||
     FUNC_15(VAR_4, &VAR_10->flags) ||
     FUNC_15(VAR_3, &VAR_10->flags)) {
  FUNC_0(&VAR_15->dbg_ctx,
    "io_req xid=0x%x sc_cmd=%p already in cleanup or abort processing or already completed.\n",
    VAR_10->xid, VAR_10->sc_cmd);
  VAR_18 = 1;
  goto drop_rdata_kref;
 }

 FUNC_4(&VAR_10->refcount);

 VAR_16 = VAR_10->xid;
 VAR_15->control_requests++;
 VAR_15->packet_aborts++;


 VAR_10->cmd_type = VAR_2;
 VAR_10->return_scsi_cmd_on_abts = VAR_11;

 FUNC_12(VAR_3, &VAR_10->flags);
 VAR_22 = FUNC_7(&VAR_10->refcount);
 FUNC_1(&VAR_15->dbg_ctx, VAR_6,
    "ABTS io_req xid = 0x%x refcount=%d\n",
    VAR_16, VAR_22);

 FUNC_9(VAR_15, VAR_10, VAR_1);

 FUNC_13(&VAR_13->rport_lock, VAR_19);

 VAR_21 = FUNC_10(VAR_13);
 VAR_20 = &VAR_13->sq[VAR_21];
 FUNC_8(VAR_20, 0, sizeof(struct fcoe_wqe));
 VAR_10->task_params->sqe = VAR_20;

 FUNC_3(VAR_10->task_params);
 FUNC_11(VAR_13);

 FUNC_14(&VAR_13->rport_lock, VAR_19);

drop_rdata_kref:
 FUNC_6(&VAR_14->kref, VAR_9);
out:
 return VAR_18;
}
