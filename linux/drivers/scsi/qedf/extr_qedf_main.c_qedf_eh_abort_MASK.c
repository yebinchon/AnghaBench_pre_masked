
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
struct scsi_cmnd {int * cmnd; TYPE_1__ SCp; TYPE_3__* device; } ;
struct qedf_rport {int flags; struct fc_rport_priv* rdata; } ;
struct qedf_ioreq {scalar_t__ event; int refcount; struct scsi_cmnd* xid; int abts_done; int fp_idx; struct scsi_cmnd* sc_cmd; } ;
struct qedf_ctx {int dbg_ctx; scalar_t__ stop_io_on_error; } ;
struct TYPE_5__ {int port_id; } ;
struct fc_rport_priv {int kref; TYPE_2__ ids; } ;
struct fc_rport_libfc_priv {int dummy; } ;
struct fc_rport {struct fc_rport_libfc_priv* dd_data; } ;
struct fc_lport {scalar_t__ state; int link_up; } ;
struct TYPE_6__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct fc_rport*) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct fc_lport*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct qedf_ioreq*,int) ;
 int VAR_9 ;
 int FUNC_10 (struct qedf_ctx*,struct qedf_ioreq*,int ) ;
 int FUNC_11 (struct qedf_ctx*) ;
 int FUNC_12 (TYPE_3__*) ;
 struct fc_lport* FUNC_13 (int ) ;
 struct fc_rport* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd *VAR_10)
{
 struct fc_rport *VAR_11 = FUNC_14(FUNC_12(VAR_10->device));
 struct fc_lport *VAR_12;
 struct qedf_ctx *VAR_13;
 struct qedf_ioreq *VAR_14;
 struct fc_rport_libfc_priv *VAR_15 = VAR_11->dd_data;
 struct fc_rport_priv *VAR_16;
 struct qedf_rport *VAR_17 = ((void*)0);
 int VAR_18 = VAR_1;
 int VAR_19 = 100;
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22 = 0;

 VAR_12 = FUNC_13(VAR_10->device->host);
 VAR_13 = (struct qedf_ctx *)FUNC_7(VAR_12);


 VAR_17 = (struct qedf_rport *)&VAR_15[1];
 VAR_16 = VAR_17->rdata;
 if (!VAR_16 || !FUNC_4(&VAR_16->kref)) {
  FUNC_0(&VAR_13->dbg_ctx, "stale rport, sc_cmd=%p\n", VAR_10);
  VAR_18 = 1;
  goto out;
 }


 VAR_14 = (struct qedf_ioreq *)VAR_10->SCp.ptr;
 if (!VAR_14) {
  FUNC_0(&VAR_13->dbg_ctx,
    "sc_cmd not queued with lld, sc_cmd=%p op=0x%02x, port_id=%06x\n",
    VAR_10, VAR_10->cmnd[0],
    VAR_16->ids.port_id);
  VAR_18 = VAR_7;
  goto drop_rdata_kref;
 }

 VAR_21 = FUNC_4(&VAR_14->refcount);
 if (VAR_21)
  VAR_22 = 1;


 if (!VAR_21 || VAR_14->sc_cmd != VAR_10) {
  FUNC_0(&VAR_13->dbg_ctx,
    "Freed/Incorrect io_req, io_req->sc_cmd=%p, sc_cmd=%p, port_id=%06x, bailing out.\n",
    VAR_14->sc_cmd, VAR_10, VAR_16->ids.port_id);

  goto drop_rdata_kref;
 }

 if (FUNC_2(VAR_11)) {
  VAR_20 = FUNC_6(&VAR_14->refcount);
  FUNC_0(&VAR_13->dbg_ctx,
    "rport not ready, io_req=%p, xid=0x%x sc_cmd=%p op=0x%02x, refcount=%d, port_id=%06x\n",
    VAR_14, VAR_14->xid, VAR_10, VAR_10->cmnd[0],
    VAR_20, VAR_16->ids.port_id);

  goto drop_rdata_kref;
 }

 VAR_18 = FUNC_1(VAR_10);
 if (VAR_18)
  goto drop_rdata_kref;

 if (FUNC_15(VAR_6, &VAR_17->flags)) {
  FUNC_0(&VAR_13->dbg_ctx,
    "Connection uploading, xid=0x%x., port_id=%06x\n",
    VAR_14->xid, VAR_16->ids.port_id);
  while (VAR_14->sc_cmd && (VAR_19 != 0)) {
   FUNC_8(100);
   VAR_19--;
  }
  if (VAR_19) {
   FUNC_0(&VAR_13->dbg_ctx, "ABTS succeeded\n");
   VAR_18 = VAR_7;
  } else {
   FUNC_0(&VAR_13->dbg_ctx, "ABTS failed\n");
   VAR_18 = VAR_1;
  }
  goto drop_rdata_kref;
 }

 if (VAR_12->state != VAR_2 || !(VAR_12->link_up)) {
  FUNC_0(&VAR_13->dbg_ctx, "link not ready.\n");
  goto drop_rdata_kref;
 }

 FUNC_0(&VAR_13->dbg_ctx,
   "Aborting io_req=%p sc_cmd=%p xid=0x%x fp_idx=%d, port_id=%06x.\n",
   VAR_14, VAR_10, VAR_14->xid, VAR_14->fp_idx,
   VAR_16->ids.port_id);

 if (VAR_13->stop_io_on_error) {
  FUNC_11(VAR_13);
  VAR_18 = VAR_7;
  goto drop_rdata_kref;
 }

 FUNC_3(&VAR_14->abts_done);
 VAR_21 = FUNC_9(VAR_14, 1);
 if (VAR_21) {
  FUNC_0(&(VAR_13->dbg_ctx), "Failed to queue ABTS.\n");




  VAR_18 = VAR_7;
  FUNC_10(VAR_13, VAR_14, VAR_0);
  goto drop_rdata_kref;
 }

 FUNC_16(&VAR_14->abts_done);

 if (VAR_14->event == VAR_4 ||
     VAR_14->event == VAR_3 ||
     VAR_14->event == VAR_5) {





  VAR_18 = VAR_7;
 } else {

  VAR_18 = VAR_1;
 }

 if (VAR_18 == VAR_7)
  FUNC_0(&(VAR_13->dbg_ctx), "ABTS succeeded, xid=0x%x.\n",
     VAR_14->xid);
 else
  FUNC_0(&(VAR_13->dbg_ctx), "ABTS failed, xid=0x%x.\n",
     VAR_14->xid);

drop_rdata_kref:
 FUNC_5(&VAR_16->kref, VAR_8);
out:
 if (VAR_22)
  FUNC_5(&VAR_14->refcount, VAR_9);
 return VAR_18;
}
