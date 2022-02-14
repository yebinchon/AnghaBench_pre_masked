
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedf_rport {int lun_reset_lun; int flags; int num_active_ios; TYPE_4__* rport; TYPE_3__* rdata; int ios_to_queue; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {int lun; int cmd_type; TYPE_1__* sc_cmd; int flags; int xid; int refcount; struct qedf_rport* fcport; int abts_done; int timeout_work; int rrq_work; int state; scalar_t__ alloc; } ;
struct qedf_ctx {int flush_mutex; int dbg_ctx; struct qedf_cmd_mgr* cmd_mgr; } ;
struct qedf_cmd_mgr {struct qedf_ioreq* cmds; int lock; } ;
struct TYPE_8__ {int scsi_target_id; } ;
struct TYPE_6__ {int port_id; } ;
struct TYPE_7__ {TYPE_2__ ids; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct qedf_ctx*,struct qedf_ioreq*) ;
 int FUNC_14 (struct qedf_ioreq*,int) ;
 int VAR_13 ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;

void FUNC_19(struct qedf_rport *VAR_14, int VAR_15)
{
 struct qedf_ioreq *VAR_16;
 struct qedf_ctx *VAR_17;
 struct qedf_cmd_mgr *VAR_18;
 int VAR_19, VAR_20;
 unsigned long VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 100;
 int VAR_24 = 0;

 if (!VAR_14) {
  FUNC_0(((void*)0), "fcport is NULL\n");
  return;
 }


 if (!FUNC_18(VAR_10, &VAR_14->flags)) {
  FUNC_0(((void*)0), "fcport is no longer offloaded.\n");
  return;
 }

 VAR_17 = VAR_14->qedf;

 if (!VAR_17) {
  FUNC_0(((void*)0), "qedf is NULL.\n");
  return;
 }


 if (FUNC_18(VAR_11, &VAR_14->flags) &&
     (VAR_15 == -1)) {
  while (FUNC_3(&VAR_14->ios_to_queue)) {
   FUNC_1(&VAR_17->dbg_ctx, VAR_7,
      "Waiting for %d I/Os to be queued\n",
      FUNC_3(&VAR_14->ios_to_queue));
   if (VAR_23 == 0) {
    FUNC_0(((void*)0),
      "%d IOs request could not be queued\n",
      FUNC_3(&VAR_14->ios_to_queue));
   }
   FUNC_10(20);
   VAR_23--;
  }
 }

 VAR_18 = VAR_17->cmd_mgr;

 FUNC_1(&VAR_17->dbg_ctx, VAR_7,
    "Flush active i/o's num=0x%x fcport=0x%p port_id=0x%06x scsi_id=%d.\n",
    FUNC_3(&VAR_14->num_active_ios), VAR_14,
    VAR_14->rdata->ids.port_id, VAR_14->rport->scsi_target_id);
 FUNC_1(&VAR_17->dbg_ctx, VAR_7, "Locking flush mutex.\n");

 FUNC_11(&VAR_17->flush_mutex);
 if (VAR_15 == -1) {
  FUNC_15(VAR_9, &VAR_14->flags);
 } else {
  FUNC_15(VAR_8, &VAR_14->flags);
  VAR_14->lun_reset_lun = VAR_15;
 }

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  VAR_16 = &VAR_18->cmds[VAR_19];

  if (!VAR_16)
   continue;
  if (!VAR_16->fcport)
   continue;

  FUNC_16(&VAR_18->lock, VAR_21);

  if (VAR_16->alloc) {
   if (!FUNC_18(VAR_5, &VAR_16->flags)) {
    if (VAR_16->cmd_type == VAR_12)
     FUNC_0(&VAR_17->dbg_ctx,
       "Allocated but not queued, xid=0x%x\n",
       VAR_16->xid);
   }
   FUNC_17(&VAR_18->lock, VAR_21);
  } else {
   FUNC_17(&VAR_18->lock, VAR_21);
   continue;
  }

  if (VAR_16->fcport != VAR_14)
   continue;






  if (!FUNC_18(VAR_5, &VAR_16->flags)) {
   VAR_24 = FUNC_9(&VAR_16->refcount);
   FUNC_1(&VAR_17->dbg_ctx, VAR_7,
      "Not outstanding, xid=0x%x, cmd_type=%d refcount=%d.\n",
      VAR_16->xid, VAR_16->cmd_type, VAR_24);



   if (FUNC_3(&VAR_16->state) ==
       VAR_1) {
    if (FUNC_4
        (&VAR_16->rrq_work)) {
     FUNC_1(&VAR_17->dbg_ctx, VAR_7,
        "Putting reference for pending RRQ work xid=0x%x.\n",
        VAR_16->xid);

     FUNC_8(&VAR_16->refcount,
       VAR_13);
    }
   }
   continue;
  }


  if (VAR_16->cmd_type == VAR_6 &&
      VAR_15 == -1) {
   VAR_20 = FUNC_7(&VAR_16->refcount);
   if (!VAR_20) {
    FUNC_0(&(VAR_17->dbg_ctx),
        "Could not get kref for ELS io_req=0x%p xid=0x%x.\n",
        VAR_16, VAR_16->xid);
    continue;
   }
   VAR_22++;
   FUNC_13(VAR_17, VAR_16);




   goto free_cmd;
  }

  if (VAR_16->cmd_type == VAR_2) {

   VAR_20 = FUNC_7(&VAR_16->refcount);
   if (!VAR_20) {
    FUNC_0(&(VAR_17->dbg_ctx),
        "Could not get kref for abort io_req=0x%p xid=0x%x.\n",
        VAR_16, VAR_16->xid);
    continue;
   }
   if (VAR_15 != -1 && VAR_16->lun != VAR_15)
    goto free_cmd;

   FUNC_1(&VAR_17->dbg_ctx, VAR_7,
       "Flushing abort xid=0x%x.\n", VAR_16->xid);

   if (FUNC_4(&VAR_16->rrq_work)) {
    FUNC_1(&VAR_17->dbg_ctx, VAR_7,
       "Putting ref for cancelled RRQ work xid=0x%x.\n",
       VAR_16->xid);
    FUNC_8(&VAR_16->refcount, VAR_13);
   }

   if (FUNC_4(&VAR_16->timeout_work)) {
    FUNC_1(&VAR_17->dbg_ctx, VAR_7,
       "Putting ref for cancelled tmo work xid=0x%x.\n",
       VAR_16->xid);
    FUNC_14(VAR_16, 1);



    FUNC_6(&VAR_16->abts_done);
    FUNC_5(VAR_4, &VAR_16->flags);

    FUNC_8(&VAR_16->refcount, VAR_13);
   }
   VAR_22++;
   goto free_cmd;
  }

  if (!VAR_16->sc_cmd)
   continue;
  if (!VAR_16->sc_cmd->device) {
   FUNC_1(&VAR_17->dbg_ctx, VAR_7,
      "Device backpointer NULL for sc_cmd=%p.\n",
      VAR_16->sc_cmd);

   VAR_16->sc_cmd = ((void*)0);
   FUNC_14(VAR_16, 0);
   FUNC_8(&VAR_16->refcount, VAR_13);
   continue;
  }
  if (VAR_15 > -1) {
   if (VAR_16->lun != VAR_15)
    continue;
  }





  VAR_20 = FUNC_7(&VAR_16->refcount);
  if (!VAR_20) {
   FUNC_0(&(VAR_17->dbg_ctx), "Could not get kref for "
       "io_req=0x%p xid=0x%x\n", VAR_16, VAR_16->xid);
   continue;
  }

  FUNC_1(&(VAR_17->dbg_ctx), VAR_7,
      "Cleanup xid=0x%x.\n", VAR_16->xid);
  VAR_22++;


  FUNC_14(VAR_16, 1);

free_cmd:
  FUNC_8(&VAR_16->refcount, VAR_13);
 }

 VAR_23 = 60;
 FUNC_1(&VAR_17->dbg_ctx, VAR_7,
    "Flushed 0x%x I/Os, active=0x%x.\n",
    VAR_22, FUNC_3(&VAR_14->num_active_ios));

 if (FUNC_18(VAR_11, &VAR_14->flags) &&
     (VAR_15 == -1)) {
  while (FUNC_3(&VAR_14->num_active_ios)) {
   FUNC_1(&VAR_17->dbg_ctx, VAR_7,
      "Flushed 0x%x I/Os, active=0x%x cnt=%d.\n",
      VAR_22,
      FUNC_3(&VAR_14->num_active_ios),
      VAR_23);
   if (VAR_23 == 0) {
    FUNC_0(&VAR_17->dbg_ctx,
      "Flushed %d I/Os, active=%d.\n",
      VAR_22,
      FUNC_3(&VAR_14->num_active_ios));
    for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
     VAR_16 = &VAR_18->cmds[VAR_19];
     if (VAR_16->fcport &&
         VAR_16->fcport == VAR_14) {
      VAR_24 =
      FUNC_9(&VAR_16->refcount);
      FUNC_15(VAR_3,
       &VAR_16->flags);
      FUNC_0(&VAR_17->dbg_ctx,
        "Outstanding io_req =%p xid=0x%x flags=0x%lx, sc_cmd=%p refcount=%d cmd_type=%d.\n",
        VAR_16, VAR_16->xid,
        VAR_16->flags,
        VAR_16->sc_cmd,
        VAR_24,
        VAR_16->cmd_type);
     }
    }
    FUNC_2(1);
    break;
   }
   FUNC_10(500);
   VAR_23--;
  }
 }

 FUNC_5(VAR_8, &VAR_14->flags);
 FUNC_5(VAR_9, &VAR_14->flags);
 FUNC_1(&VAR_17->dbg_ctx, VAR_7, "Unlocking flush mutex.\n");
 FUNC_12(&VAR_17->flush_mutex);
}
