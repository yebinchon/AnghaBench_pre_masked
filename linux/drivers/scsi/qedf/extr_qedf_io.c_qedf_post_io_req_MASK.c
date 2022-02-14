
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {char* ptr; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_2__* device; TYPE_1__ SCp; } ;
struct qedf_rport {struct fcoe_wqe* sq; int flags; } ;
struct qedf_ioreq {size_t xid; int lun; struct scsi_cmnd* sc_cmd; int flags; int refcount; scalar_t__ io_req_flags; int cpu; int sge_type; int data_xfer_len; } ;
struct qedf_ctx {int dbg_ctx; int tasks; int control_requests; int output_requests; int input_requests; } ;
struct fcoe_wqe {int dummy; } ;
struct fc_lport {int dummy; } ;
struct e4_fcoe_task_context {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef enum fcoe_task_type { ____Placeholder_fcoe_task_type } fcoe_task_type ;
struct TYPE_4__ {scalar_t__ lun; struct Scsi_Host* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*,size_t) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int *,int ) ;
 struct qedf_ctx* FUNC_3 (struct fc_lport*) ;
 int FUNC_4 (struct fcoe_wqe*,int ,int) ;
 scalar_t__ FUNC_5 (struct qedf_ioreq*) ;
 size_t FUNC_6 (struct qedf_rport*) ;
 struct e4_fcoe_task_context* FUNC_7 (int *,size_t) ;
 int FUNC_8 (struct qedf_rport*,struct fc_lport*,struct qedf_ioreq*,struct e4_fcoe_task_context*,struct fcoe_wqe*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct qedf_rport*) ;
 int FUNC_10 (struct qedf_rport*,struct qedf_ioreq*,int ) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (int ,int *) ;
 struct fc_lport* FUNC_13 (struct Scsi_Host*) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int *) ;

int FUNC_16(struct qedf_rport *VAR_15, struct qedf_ioreq *VAR_16)
{
 struct scsi_cmnd *VAR_17 = VAR_16->sc_cmd;
 struct Scsi_Host *VAR_18 = VAR_17->device->host;
 struct fc_lport *VAR_19 = FUNC_13(VAR_18);
 struct qedf_ctx *VAR_20 = FUNC_3(VAR_19);
 struct e4_fcoe_task_context *VAR_21;
 u16 VAR_22;
 enum fcoe_task_type VAR_23 = 0;
 struct fcoe_wqe *VAR_24;
 u16 VAR_25;


 VAR_16->data_xfer_len = FUNC_11(VAR_17);
 VAR_17->SCp.ptr = (char *)VAR_16;
 VAR_16->sge_type = VAR_7;


 VAR_16->cpu = FUNC_14();

 if (VAR_17->sc_data_direction == VAR_0) {
  VAR_23 = VAR_4;
  VAR_16->io_req_flags = VAR_9;
  VAR_20->input_requests++;
 } else if (VAR_17->sc_data_direction == VAR_1) {
  VAR_23 = VAR_5;
  VAR_16->io_req_flags = VAR_12;
  VAR_20->output_requests++;
 } else {
  VAR_16->io_req_flags = 0;
  VAR_20->control_requests++;
 }

 VAR_22 = VAR_16->xid;


 if (FUNC_5(VAR_16)) {
  FUNC_0(&(VAR_20->dbg_ctx), "BD list creation failed.\n");

  VAR_16->sc_cmd = ((void*)0);
  FUNC_2(&VAR_16->refcount, VAR_14);
  return -VAR_2;
 }

 if (!FUNC_15(VAR_10, &VAR_15->flags) ||
     FUNC_15(VAR_11, &VAR_15->flags)) {
  FUNC_0(&(VAR_20->dbg_ctx), "Session not offloaded yet.\n");

  VAR_16->sc_cmd = ((void*)0);
  FUNC_2(&VAR_16->refcount, VAR_14);
  return -VAR_3;
 }


 VAR_16->lun = (int)VAR_17->device->lun;


 VAR_25 = FUNC_6(VAR_15);
 VAR_24 = &VAR_15->sq[VAR_25];
 FUNC_4(VAR_24, 0, sizeof(struct fcoe_wqe));


 VAR_21 = FUNC_7(&VAR_20->tasks, VAR_22);
 if (!VAR_21) {
  FUNC_1(&(VAR_20->dbg_ctx), "task_ctx is NULL, xid=%d.\n",
      VAR_22);

  VAR_16->sc_cmd = ((void*)0);
  FUNC_2(&VAR_16->refcount, VAR_14);
  return -VAR_3;
 }

 FUNC_8(VAR_15, VAR_19, VAR_16, VAR_21, VAR_24);


 FUNC_9(VAR_15);


 FUNC_12(VAR_6, &VAR_16->flags);

 if (VAR_13 && VAR_16->sc_cmd)
  FUNC_10(VAR_15, VAR_16, VAR_8);

 return 0;
}
