
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct TYPE_10__ {int * ptr; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__ SCp; int * cmnd; TYPE_5__* device; TYPE_4__* request; } ;
struct qedf_rport {int retry_delay_timestamp; scalar_t__ lun_reset_lun; int flags; } ;
struct qedf_ioreq {int xid; int fcp_rsp_len; int cdb_status; int fcp_status; int refcount; struct scsi_cmnd* sc_cmd; int flags; scalar_t__ fcp_resid; scalar_t__ fcp_rsp_code; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; int busy; int task_set_fulls; TYPE_2__* lport; int tasks; } ;
struct TYPE_13__ {int flags; } ;
struct fcoe_cqe_rsp_info {int retry_delay_timer; int fw_residual; TYPE_6__ rsp_flags; int fw_error_flags; } ;
struct TYPE_14__ {struct fcoe_cqe_rsp_info rsp_info; } ;
struct fcoe_cqe {TYPE_7__ cqe_info; } ;
struct e4_fcoe_task_context {int dummy; } ;
struct TYPE_12__ {scalar_t__ lun; int id; } ;
struct TYPE_11__ {int q; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_8__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,char*,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int *) ;
 int VAR_15 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct e4_fcoe_task_context* FUNC_7 (int *,int) ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (struct qedf_ioreq*,struct fcoe_cqe_rsp_info*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct qedf_rport*,struct qedf_ioreq*,int ) ;
 int FUNC_10 (struct qedf_ctx*,struct qedf_ioreq*) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

void FUNC_15(struct qedf_ctx *VAR_19, struct fcoe_cqe *VAR_20,
 struct qedf_ioreq *VAR_21)
{
 u16 VAR_22;
 struct e4_fcoe_task_context *VAR_23;
 struct scsi_cmnd *VAR_24;
 struct fcoe_cqe_rsp_info *VAR_25;
 struct qedf_rport *VAR_26;
 int VAR_27;
 u16 VAR_28, VAR_29 = 0;
 u8 VAR_30 = 0;

 if (!VAR_21)
  return;
 if (!VAR_20)
  return;

 if (!FUNC_14(VAR_7, &VAR_21->flags) ||
     FUNC_14(VAR_6, &VAR_21->flags) ||
     FUNC_14(VAR_5, &VAR_21->flags)) {
  FUNC_1(&VAR_19->dbg_ctx,
    "io_req xid=0x%x already in cleanup or abort processing or already completed.\n",
    VAR_21->xid);
  return;
 }

 VAR_22 = VAR_21->xid;
 VAR_23 = FUNC_7(&VAR_19->tasks, VAR_22);
 VAR_24 = VAR_21->sc_cmd;
 VAR_25 = &VAR_20->cqe_info.rsp_info;

 if (!VAR_24) {
  FUNC_3(&(VAR_19->dbg_ctx), "sc_cmd is NULL!\n");
  return;
 }

 if (!VAR_24->SCp.ptr) {
  FUNC_3(&(VAR_19->dbg_ctx), "SCp.ptr is NULL, returned in "
      "another context.\n");
  return;
 }

 if (!VAR_24->device) {
  FUNC_1(&VAR_19->dbg_ctx,
    "Device for sc_cmd %p is NULL.\n", VAR_24);
  return;
 }

 if (!VAR_24->request) {
  FUNC_3(&(VAR_19->dbg_ctx), "sc_cmd->request is NULL, "
      "sc_cmd=%p.\n", VAR_24);
  return;
 }

 if (!VAR_24->request->q) {
  FUNC_3(&(VAR_19->dbg_ctx), "request->q is NULL so request "
     "is not valid, sc_cmd=%p.\n", VAR_24);
  return;
 }

 VAR_26 = VAR_21->fcport;





 if (FUNC_14(VAR_12, &VAR_26->flags) ||
     (FUNC_14(VAR_11, &VAR_26->flags) &&
      VAR_24->device->lun == (u64)VAR_26->lun_reset_lun)) {
  FUNC_2(&VAR_19->dbg_ctx, VAR_9,
     "Dropping good completion xid=0x%x as fcport is flushing",
     VAR_21->xid);
  return;
 }

 FUNC_8(VAR_21, VAR_25);

 FUNC_10(VAR_19, VAR_21);


 if (VAR_21->fcp_rsp_len > 3 && VAR_21->fcp_rsp_code) {
  FUNC_1(&(VAR_19->dbg_ctx),
      "FCP I/O protocol failure xid=0x%x fcp_rsp_len=%d "
      "fcp_rsp_code=%d.\n", VAR_21->xid, VAR_21->fcp_rsp_len,
      VAR_21->fcp_rsp_code);
  VAR_24->result = VAR_0 << 16;
  goto out;
 }

 VAR_30 = FUNC_0(VAR_20->cqe_info.rsp_info.fw_error_flags,
     VAR_3);
 if (VAR_30) {
  FUNC_1(&VAR_19->dbg_ctx,
    "Firmware detected underrun: xid=0x%x fcp_rsp.flags=0x%02x fcp_resid=%d fw_residual=0x%x lba=%02x%02x%02x%02x.\n",
    VAR_21->xid, VAR_25->rsp_flags.flags,
    VAR_21->fcp_resid,
    VAR_20->cqe_info.rsp_info.fw_residual, VAR_24->cmnd[2],
    VAR_24->cmnd[3], VAR_24->cmnd[4], VAR_24->cmnd[5]);

  if (VAR_21->cdb_status == 0)
   VAR_24->result = (VAR_1 << 16) | VAR_21->cdb_status;
  else
   VAR_24->result = (VAR_2 << 16) | VAR_21->cdb_status;





  FUNC_12(VAR_24, FUNC_11(VAR_24));
  goto out;
 }

 switch (VAR_21->fcp_status) {
 case 128:
  if (VAR_21->cdb_status == 0) {

   VAR_24->result = VAR_2 << 16;
  } else {
   VAR_27 = FUNC_6(&VAR_21->refcount);
   FUNC_2(&(VAR_19->dbg_ctx), VAR_9,
       "%d:0:%d:%lld xid=0x%0x op=0x%02x "
       "lba=%02x%02x%02x%02x cdb_status=%d "
       "fcp_resid=0x%x refcount=%d.\n",
       VAR_19->lport->host->host_no, VAR_24->device->id,
       VAR_24->device->lun, VAR_21->xid,
       VAR_24->cmnd[0], VAR_24->cmnd[2], VAR_24->cmnd[3],
       VAR_24->cmnd[4], VAR_24->cmnd[5],
       VAR_21->cdb_status, VAR_21->fcp_resid,
       VAR_27);
   VAR_24->result = (VAR_2 << 16) | VAR_21->cdb_status;

   if (VAR_21->cdb_status == VAR_14 ||
       VAR_21->cdb_status == VAR_13) {







    VAR_28 = VAR_25->retry_delay_timer & 0xC000;

    VAR_29 = VAR_25->retry_delay_timer & 0x3FFF;

    if (VAR_18 &&
        VAR_28 > 0 && VAR_29 > 0 &&
        VAR_29 <= 0x3FEF) {

     if (VAR_29 > VAR_10)
      VAR_29 =
          VAR_10;
     VAR_26->retry_delay_timestamp =
         VAR_15 + (VAR_29 * VAR_4 / 10);
    }

    if (VAR_21->cdb_status ==
        VAR_14)
     VAR_19->task_set_fulls++;
    else
     VAR_19->busy++;
   }
  }
  if (VAR_21->fcp_resid)
   FUNC_12(VAR_24, VAR_21->fcp_resid);
  break;
 default:
  FUNC_2(&(VAR_19->dbg_ctx), VAR_9, "fcp_status=%d.\n",
      VAR_21->fcp_status);
  break;
 }

out:
 if (VAR_16)
  FUNC_9(VAR_26, VAR_21, VAR_8);





 FUNC_4(VAR_7, &VAR_21->flags);

 VAR_21->sc_cmd = ((void*)0);
 VAR_24->SCp.ptr = ((void*)0);
 VAR_24->scsi_done(VAR_24);
 FUNC_5(&VAR_21->refcount, VAR_17);
}
