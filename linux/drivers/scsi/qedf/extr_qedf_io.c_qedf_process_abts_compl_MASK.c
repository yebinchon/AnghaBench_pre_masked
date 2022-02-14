
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct qedf_rport {int flags; } ;
struct qedf_ioreq {int refcount; int abts_done; scalar_t__ return_scsi_cmd_on_abts; int xid; scalar_t__ sc_cmd; int flags; int event; int state; int rrq_work; int timeout_work; int cmd_type; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; TYPE_3__* lport; int dpc_wq; } ;
struct TYPE_4__ {int r_ctl; } ;
struct TYPE_5__ {TYPE_1__ abts_info; } ;
struct fcoe_cqe {TYPE_2__ cqe_info; } ;
struct TYPE_6__ {int r_a_tov; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int FUNC_9 (struct qedf_ctx*,struct qedf_ioreq*,int ) ;
 int FUNC_10 (int ,int *,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct qedf_ctx *VAR_10, struct fcoe_cqe *VAR_11,
 struct qedf_ioreq *VAR_12)
{
 uint32_t VAR_13;
 uint16_t VAR_14;
 int VAR_15;
 struct qedf_rport *VAR_16 = VAR_12->fcport;

 FUNC_1(&(VAR_10->dbg_ctx), VAR_6, "Entered with xid = "
     "0x%x cmd_type = %d\n", VAR_12->xid, VAR_12->cmd_type);

 VAR_14 = VAR_12->xid;
 VAR_13 = VAR_11->cqe_info.abts_info.r_ctl;





 if (!VAR_16) {
  FUNC_1(&VAR_10->dbg_ctx, VAR_5,
     "Dropping ABTS completion xid=0x%x as fcport is NULL",
     VAR_12->xid);
  return;
 }





 if (FUNC_11(VAR_8, &VAR_16->flags) ||
     FUNC_11(VAR_7, &VAR_16->flags)) {
  FUNC_1(&VAR_10->dbg_ctx, VAR_5,
     "Dropping ABTS completion xid=0x%x as fcport is flushing",
     VAR_12->xid);
  return;
 }

 if (!FUNC_3(&VAR_12->timeout_work)) {
  FUNC_0(&VAR_10->dbg_ctx,
    "Wasn't able to cancel abts timeout work.\n");
 }

 switch (VAR_13) {
 case 129:
  FUNC_1(&(VAR_10->dbg_ctx), VAR_6,
      "ABTS response - ACC Send RRQ after R_A_TOV\n");
  VAR_12->event = VAR_4;
  VAR_15 = FUNC_6(&VAR_12->refcount);
  if (!VAR_15) {
   FUNC_1(&VAR_10->dbg_ctx, VAR_6,
      "kref is already zero so ABTS was already completed or flushed xid=0x%x.\n",
      VAR_12->xid);
   return;
  }




  FUNC_10(VAR_10->dpc_wq, &VAR_12->rrq_work,
      FUNC_8(VAR_10->lport->r_a_tov));
  FUNC_2(&VAR_12->state, VAR_1);
  break;

 case 128:
  FUNC_1(&(VAR_10->dbg_ctx), VAR_6,
     "ABTS response - RJT\n");
  VAR_12->event = VAR_3;
  break;
 default:
  FUNC_0(&(VAR_10->dbg_ctx), "Unknown ABTS response\n");
  break;
 }

 FUNC_4(VAR_2, &VAR_12->flags);

 if (VAR_12->sc_cmd) {
  if (!VAR_12->return_scsi_cmd_on_abts)
   FUNC_1(&VAR_10->dbg_ctx, VAR_6,
      "Not call scsi_done for xid=0x%x.\n",
      VAR_12->xid);
  if (VAR_12->return_scsi_cmd_on_abts)
   FUNC_9(VAR_10, VAR_12, VAR_0);
 }


 FUNC_5(&VAR_12->abts_done);

 FUNC_7(&VAR_12->refcount, VAR_9);
}
