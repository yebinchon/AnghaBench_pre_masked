
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t u16 ;
struct qedf_rport {int rport_lock; struct fcoe_wqe* sq; TYPE_2__* rdata; int free_sqes; struct qedf_ctx* qedf; int flags; } ;
struct qedf_ioreq {int return_scsi_cmd_on_abts; scalar_t__ tm_flags; int event; int xid; int * sc_cmd; int tm_done; int flags; int cleanup_done; TYPE_3__* task_params; int cmd_type; int refcount; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; int tasks; } ;
struct fcoe_wqe {int dummy; } ;
struct e4_fcoe_task_context {int dummy; } ;
struct TYPE_6__ {struct fcoe_wqe* sqe; } ;
struct TYPE_4__ {int port_id; } ;
struct TYPE_5__ {TYPE_1__ ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,int ,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fcoe_wqe*,int ,int) ;
 int FUNC_9 (struct qedf_ctx*) ;
 size_t FUNC_10 (struct qedf_rport*) ;
 struct e4_fcoe_task_context* FUNC_11 (int *,int ) ;
 int FUNC_12 (struct qedf_rport*) ;
 int FUNC_13 (struct qedf_ctx*,struct qedf_ioreq*,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *,int) ;

int FUNC_20(struct qedf_ioreq *VAR_15,
 bool VAR_16)
{
 struct qedf_rport *VAR_17;
 struct qedf_ctx *VAR_18;
 uint16_t VAR_19;
 struct e4_fcoe_task_context *VAR_20;
 int VAR_21 = 0;
 int VAR_22 = VAR_14;
 unsigned long VAR_23;
 struct fcoe_wqe *VAR_24;
 u16 VAR_25;
 int VAR_26 = 0;

 VAR_17 = VAR_15->fcport;
 if (!VAR_17) {
  FUNC_0(((void*)0), "fcport is NULL.\n");
  return VAR_14;
 }


 if (!FUNC_18(VAR_13, &VAR_17->flags)) {
  FUNC_0(((void*)0), "tgt not offloaded\n");
  VAR_22 = 1;
  return VAR_14;
 }

 VAR_18 = VAR_17->qedf;
 if (!VAR_18) {
  FUNC_0(((void*)0), "qedf is NULL.\n");
  return VAR_14;
 }

 if (!FUNC_18(VAR_8, &VAR_15->flags) ||
     FUNC_17(VAR_7, &VAR_15->flags)) {
  FUNC_0(&(VAR_18->dbg_ctx), "io_req xid=0x%x already in "
     "cleanup processing or already completed.\n",
     VAR_15->xid);
  return VAR_14;
 }
 FUNC_14(VAR_7, &VAR_15->flags);


 if (!FUNC_2(&VAR_17->free_sqes)) {
  FUNC_0(&(VAR_18->dbg_ctx), "No SQ entries available\n");

  FUNC_3(VAR_7, &VAR_15->flags);
  return VAR_1;
 }

 if (VAR_15->cmd_type == VAR_5) {
  FUNC_0(&VAR_18->dbg_ctx,
    "io_req=0x%x is already a cleanup command cmd_type=%d.\n",
    VAR_15->xid, VAR_15->cmd_type);
  FUNC_3(VAR_7, &VAR_15->flags);
  return VAR_14;
 }

 VAR_26 = FUNC_7(&VAR_15->refcount);

 FUNC_1(&VAR_18->dbg_ctx, VAR_11,
    "Entered xid=0x%x sc_cmd=%p cmd_type=%d flags=0x%lx refcount=%d fcport=%p port_id=0x%06x\n",
    VAR_15->xid, VAR_15->sc_cmd, VAR_15->cmd_type, VAR_15->flags,
    VAR_26, VAR_17, VAR_17->rdata->ids.port_id);


 VAR_19 = VAR_15->xid;
 VAR_15->cmd_type = VAR_5;
 VAR_15->return_scsi_cmd_on_abts = VAR_16;

 VAR_20 = FUNC_11(&VAR_18->tasks, VAR_19);

 FUNC_5(&VAR_15->cleanup_done);

 FUNC_15(&VAR_17->rport_lock, VAR_23);

 VAR_25 = FUNC_10(VAR_17);
 VAR_24 = &VAR_17->sq[VAR_25];
 FUNC_8(VAR_24, 0, sizeof(struct fcoe_wqe));
 VAR_15->task_params->sqe = VAR_24;

 FUNC_6(VAR_15->task_params);
 FUNC_12(VAR_17);

 FUNC_16(&VAR_17->rport_lock, VAR_23);

 VAR_21 = FUNC_19(&VAR_15->cleanup_done,
       VAR_6 * VAR_4);

 if (!VAR_21) {
  VAR_22 = VAR_1;

  FUNC_0(&(VAR_18->dbg_ctx), "Cleanup command timeout, "
     "xid=%x.\n", VAR_15->xid);
  FUNC_3(VAR_7, &VAR_15->flags);

  FUNC_0(&(VAR_18->dbg_ctx), "Issuing MCP drain request.\n");
  FUNC_9(VAR_18);
 }




 if (VAR_15->tm_flags == VAR_2 ||
     VAR_15->tm_flags == VAR_3) {
  FUNC_3(VAR_8, &VAR_15->flags);
  VAR_15->sc_cmd = ((void*)0);
  FUNC_4(&VAR_15->tm_done);
 }

 if (VAR_15->sc_cmd) {
  if (!VAR_15->return_scsi_cmd_on_abts)
   FUNC_1(&VAR_18->dbg_ctx, VAR_12,
      "Not call scsi_done for xid=0x%x.\n",
      VAR_15->xid);
  if (VAR_15->return_scsi_cmd_on_abts)
   FUNC_13(VAR_18, VAR_15, VAR_0);
 }

 if (VAR_22 == VAR_14)
  VAR_15->event = VAR_10;
 else
  VAR_15->event = VAR_9;

 return VAR_22;
}
