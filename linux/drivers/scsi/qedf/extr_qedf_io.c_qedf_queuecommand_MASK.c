
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int device; } ;
struct qedf_rport {int ios_to_queue; int rport_lock; int free_sqes; scalar_t__ retry_delay_timestamp; int flags; } ;
struct qedf_ioreq {struct scsi_cmnd* sc_cmd; } ;
struct qedf_ctx {int dbg_ctx; int link_state; int flags; TYPE_1__* pdev; } ;
struct fc_rport_libfc_priv {int dummy; } ;
struct fc_rport {int port_id; struct fc_rport_libfc_priv* dd_data; } ;
struct fc_lport {scalar_t__ state; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct fc_rport*) ;
 int VAR_14 ;
 struct qedf_ctx* FUNC_7 (struct fc_lport*) ;
 struct qedf_ioreq* FUNC_8 (struct qedf_rport*,int ) ;
 scalar_t__ FUNC_9 (struct qedf_rport*,struct qedf_ioreq*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (int ) ;
 struct fc_lport* FUNC_12 (struct Scsi_Host*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 struct fc_rport* FUNC_15 (int ) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 int FUNC_18 (struct scsi_cmnd*) ;
 int FUNC_19 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,scalar_t__) ;

int
FUNC_22(struct Scsi_Host *VAR_15, struct scsi_cmnd *VAR_16)
{
 struct fc_lport *VAR_17 = FUNC_12(VAR_15);
 struct qedf_ctx *VAR_18 = FUNC_7(VAR_17);
 struct fc_rport *VAR_19 = FUNC_15(FUNC_11(VAR_16->device));
 struct fc_rport_libfc_priv *VAR_20 = VAR_19->dd_data;
 struct qedf_rport *VAR_21;
 struct qedf_ioreq *VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 unsigned long VAR_25 = 0;
 int VAR_26 = 0;

 VAR_26 = FUNC_10(VAR_16);
 if (FUNC_10(VAR_16) > VAR_7) {
  FUNC_0(&VAR_18->dbg_ctx,
    "Number of SG elements %d exceeds what hardware limitation of %d.\n",
    VAR_26, VAR_7);
  VAR_16->result = VAR_0;
  VAR_16->scsi_done(VAR_16);
  return 0;
 }

 if (FUNC_20(VAR_11, &VAR_18->flags) ||
     FUNC_20(VAR_3, &VAR_18->flags)) {
  FUNC_1(&VAR_18->dbg_ctx, VAR_6,
     "Returning DNC as unloading or stop io, flags 0x%lx.\n",
     VAR_18->flags);
  VAR_16->result = VAR_1 << 16;
  VAR_16->scsi_done(VAR_16);
  return 0;
 }

 if (!VAR_18->pdev->msix_enabled) {
  FUNC_1(&(VAR_18->dbg_ctx), VAR_6,
      "Completing sc_cmd=%p DID_NO_CONNECT as MSI-X is not enabled.\n",
      VAR_16);
  VAR_16->result = VAR_1 << 16;
  VAR_16->scsi_done(VAR_16);
  return 0;
 }

 VAR_24 = FUNC_6(VAR_19);
 if (VAR_24) {
  FUNC_1(&VAR_18->dbg_ctx, VAR_6,
     "fc_remote_port_chkready failed=0x%x for port_id=0x%06x.\n",
     VAR_24, VAR_19->port_id);
  VAR_16->result = VAR_24;
  VAR_16->scsi_done(VAR_16);
  return 0;
 }


 if (FUNC_20(VAR_4, &VAR_18->flags)) {
  FUNC_1(&VAR_18->dbg_ctx, VAR_6, "Drain active.\n");
  VAR_23 = VAR_12;
  goto exit_qcmd;
 }

 if (VAR_17->state != VAR_2 ||
     FUNC_5(&VAR_18->link_state) != VAR_5) {
  FUNC_1(&VAR_18->dbg_ctx, VAR_6, "Link down.\n");
  VAR_23 = VAR_12;
  goto exit_qcmd;
 }


 VAR_21 = (struct qedf_rport *)&VAR_20[1];

 if (!FUNC_20(VAR_8, &VAR_21->flags) ||
     FUNC_20(VAR_9, &VAR_21->flags)) {




  VAR_23 = VAR_13;
  goto exit_qcmd;
 }

 FUNC_4(&VAR_21->ios_to_queue);

 if (VAR_21->retry_delay_timestamp) {
  if (FUNC_21(VAR_14, VAR_21->retry_delay_timestamp)) {
   VAR_21->retry_delay_timestamp = 0;
  } else {

   VAR_23 = VAR_13;
   FUNC_3(&VAR_21->ios_to_queue);
   goto exit_qcmd;
  }
 }

 VAR_22 = FUNC_8(VAR_21, VAR_10);
 if (!VAR_22) {
  VAR_23 = VAR_12;
  FUNC_3(&VAR_21->ios_to_queue);
  goto exit_qcmd;
 }

 VAR_22->sc_cmd = VAR_16;


 FUNC_13(&VAR_21->rport_lock, VAR_25);
 if (FUNC_9(VAR_21, VAR_22)) {
  FUNC_2(&(VAR_18->dbg_ctx), "Unable to post io_req\n");

  FUNC_4(&VAR_21->free_sqes);
  VAR_23 = VAR_12;
 }
 FUNC_14(&VAR_21->rport_lock, VAR_25);
 FUNC_3(&VAR_21->ios_to_queue);

exit_qcmd:
 return VAR_23;
}
