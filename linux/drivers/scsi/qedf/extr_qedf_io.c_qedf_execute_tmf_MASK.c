
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef size_t u16 ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct qedf_rport {int flags; int rport_lock; struct fcoe_wqe* sq; struct qedf_ctx* qedf; } ;
struct qedf_ioreq {int return_scsi_cmd_on_abts; scalar_t__ fcp_rsp_code; int refcount; struct scsi_cmnd* sc_cmd; int flags; int tm_done; int xid; scalar_t__ tm_flags; scalar_t__ data_xfer_len; int io_req_flags; int cpu; int cmd_type; struct qedf_rport* fcport; } ;
struct qedf_ctx {int dbg_ctx; int tasks; int target_resets; int lun_resets; struct fc_lport* lport; } ;
struct fcoe_wqe {int dummy; } ;
struct fc_lport {int dummy; } ;
struct e4_fcoe_task_context {int dummy; } ;
struct TYPE_2__ {scalar_t__ lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct fcoe_wqe*,int ,int) ;
 struct qedf_ioreq* FUNC_6 (struct qedf_rport*,int ) ;
 int FUNC_7 (struct qedf_rport*,int) ;
 size_t FUNC_8 (struct qedf_rport*) ;
 struct e4_fcoe_task_context* FUNC_9 (int *,int ) ;
 int FUNC_10 (struct qedf_rport*,struct fc_lport*,struct qedf_ioreq*,struct e4_fcoe_task_context*,struct fcoe_wqe*) ;
 int VAR_13 ;
 int FUNC_11 (struct qedf_rport*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static int FUNC_18(struct qedf_rport *VAR_14, struct scsi_cmnd *VAR_15,
 uint8_t VAR_16)
{
 struct qedf_ioreq *VAR_17;
 struct e4_fcoe_task_context *VAR_18;
 struct qedf_ctx *VAR_19 = VAR_14->qedf;
 struct fc_lport *VAR_20 = VAR_19->lport;
 int VAR_21 = 0;
 uint16_t VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 unsigned long VAR_25;
 struct fcoe_wqe *VAR_26;
 u16 VAR_27;

 if (!VAR_15) {
  FUNC_0(&VAR_19->dbg_ctx, "sc_cmd is NULL\n");
  return VAR_1;
 }

 VAR_24 = (int)VAR_15->device->lun;
 if (!FUNC_16(VAR_8, &VAR_14->flags)) {
  FUNC_0(&(VAR_19->dbg_ctx), "fcport not offloaded\n");
  VAR_21 = VAR_1;
  goto no_flush;
 }

 VAR_17 = FUNC_6(VAR_14, VAR_10);
 if (!VAR_17) {
  FUNC_0(&(VAR_19->dbg_ctx), "Failed TMF");
  VAR_21 = -VAR_0;
  goto no_flush;
 }

 if (VAR_16 == VAR_2)
  VAR_19->lun_resets++;
 else if (VAR_16 == VAR_3)
  VAR_19->target_resets++;


 VAR_17->sc_cmd = VAR_15;
 VAR_17->fcport = VAR_14;
 VAR_17->cmd_type = VAR_10;


 VAR_17->cpu = FUNC_13();


 VAR_17->io_req_flags = VAR_7;
 VAR_17->data_xfer_len = 0;
 VAR_17->tm_flags = VAR_16;


 VAR_17->return_scsi_cmd_on_abts = 0;


 VAR_22 = VAR_17->xid;

 FUNC_1(&(VAR_19->dbg_ctx), VAR_6, "TMF io_req xid = "
     "0x%x\n", VAR_22);


 VAR_18 = FUNC_9(&VAR_19->tasks, VAR_22);

 FUNC_3(&VAR_17->tm_done);

 FUNC_14(&VAR_14->rport_lock, VAR_25);

 VAR_27 = FUNC_8(VAR_14);
 VAR_26 = &VAR_14->sq[VAR_27];
 FUNC_5(VAR_26, 0, sizeof(struct fcoe_wqe));

 FUNC_10(VAR_14, VAR_20, VAR_17, VAR_18, VAR_26);
 FUNC_11(VAR_14);

 FUNC_15(&VAR_14->rport_lock, VAR_25);

 FUNC_12(VAR_5, &VAR_17->flags);
 VAR_23 = FUNC_17(&VAR_17->tm_done,
     VAR_11 * VAR_4);

 if (!VAR_23) {
  VAR_21 = VAR_1;
  FUNC_0(&(VAR_19->dbg_ctx), "wait for tm_cmpl timeout!\n");

  FUNC_2(VAR_5, &VAR_17->flags);
  VAR_17->sc_cmd = ((void*)0);
 } else {

  if (VAR_17->fcp_rsp_code == 0)
   VAR_21 = VAR_12;
  else
   VAR_21 = VAR_1;
 }




 if (FUNC_16(VAR_9, &VAR_14->flags)) {
  FUNC_0(&VAR_19->dbg_ctx,
    "fcport is uploading, not executing flush.\n");
  goto no_flush;
 }

 FUNC_4(&VAR_17->refcount, VAR_13);


 if (VAR_16 == VAR_2)
  FUNC_7(VAR_14, VAR_24);
 else
  FUNC_7(VAR_14, -1);

no_flush:
 if (VAR_21 != VAR_12) {
  FUNC_0(&(VAR_19->dbg_ctx), "task mgmt command failed...\n");
  VAR_21 = VAR_1;
 } else {
  FUNC_0(&(VAR_19->dbg_ctx), "task mgmt command success...\n");
  VAR_21 = VAR_12;
 }
 return VAR_21;
}
