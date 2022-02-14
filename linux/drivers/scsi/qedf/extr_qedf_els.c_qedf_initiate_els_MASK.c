
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef size_t u16 ;
struct qedf_rport {int rport_lock; struct fcoe_wqe* sq; int sid; TYPE_2__* rdata; int flags; int rport; struct qedf_ctx* qedf; } ;
struct fc_frame_header {int dummy; } ;
struct qedf_mp_req {struct fc_frame_header req_fc_hdr; int req_buf; } ;
struct qedf_ioreq {void (* cb_func ) (struct qedf_els_cb_arg*) ;int flags; int xid; int refcount; struct qedf_els_cb_arg* cb_arg; int mp_req; int cpu; int data_xfer_len; struct qedf_rport* fcport; int cmd_type; int * sc_cmd; } ;
struct qedf_els_cb_arg {unsigned int op; struct qedf_ioreq* io_req; } ;
struct qedf_ctx {int dbg_ctx; int tasks; struct fc_lport* lport; } ;
struct fcoe_wqe {int dummy; } ;
struct fc_lport {scalar_t__ state; int link_up; } ;
struct e4_fcoe_task_context {int dummy; } ;
struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct fc_frame_header*,int ,int ,int ,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (struct fcoe_wqe*,int ,int) ;
 struct qedf_ioreq* FUNC_7 (struct qedf_rport*,int ) ;
 int FUNC_8 (struct qedf_ctx*,struct qedf_ioreq*,int ) ;
 size_t FUNC_9 (struct qedf_rport*) ;
 struct e4_fcoe_task_context* FUNC_10 (int *,int ) ;
 int FUNC_11 (struct qedf_ioreq*) ;
 int FUNC_12 (struct qedf_ioreq*,struct e4_fcoe_task_context*,struct fcoe_wqe*) ;
 int VAR_15 ;
 int FUNC_13 (struct qedf_rport*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct qedf_rport *VAR_16, unsigned int VAR_17,
 void *VAR_18, uint32_t VAR_19,
 void (*VAR_20)(struct qedf_els_cb_arg *VAR_21),
 struct qedf_els_cb_arg *VAR_22, uint32_t VAR_23)
{
 struct qedf_ctx *VAR_24;
 struct fc_lport *VAR_25;
 struct qedf_ioreq *VAR_26;
 struct qedf_mp_req *VAR_27;
 struct fc_frame_header *VAR_28;
 struct e4_fcoe_task_context *VAR_29;
 int VAR_30 = 0;
 uint32_t VAR_31, VAR_32;
 uint16_t VAR_33;
 struct fcoe_wqe *VAR_34;
 unsigned long VAR_35;
 u16 VAR_36;

 if (!VAR_16) {
  FUNC_0(((void*)0), "fcport is NULL");
  VAR_30 = -VAR_1;
  goto els_err;
 }

 VAR_24 = VAR_16->qedf;
 VAR_25 = VAR_24->lport;

 FUNC_1(&(VAR_24->dbg_ctx), VAR_13, "Sending ELS\n");

 VAR_30 = FUNC_3(VAR_16->rport);
 if (VAR_30) {
  FUNC_0(&(VAR_24->dbg_ctx), "els 0x%x: rport not ready\n", VAR_17);
  VAR_30 = -VAR_0;
  goto els_err;
 }
 if (VAR_25->state != VAR_10 || !(VAR_25->link_up)) {
  FUNC_0(&(VAR_24->dbg_ctx), "els 0x%x: link is not ready\n",
     VAR_17);
  VAR_30 = -VAR_0;
  goto els_err;
 }

 if (!FUNC_18(VAR_14, &VAR_16->flags)) {
  FUNC_0(&(VAR_24->dbg_ctx), "els 0x%x: fcport not ready\n", VAR_17);
  VAR_30 = -VAR_1;
  goto els_err;
 }

 VAR_26 = FUNC_7(VAR_16, VAR_12);
 if (!VAR_26) {
  FUNC_1(&VAR_24->dbg_ctx, VAR_13,
     "Failed to alloc ELS request 0x%x\n", VAR_17);
  VAR_30 = -VAR_4;
  goto els_err;
 }

 FUNC_1(&(VAR_24->dbg_ctx), VAR_13, "initiate_els els_req = "
     "0x%p cb_arg = %p xid = %x\n", VAR_26, VAR_22,
     VAR_26->xid);
 VAR_26->sc_cmd = ((void*)0);
 VAR_26->cmd_type = VAR_12;
 VAR_26->fcport = VAR_16;
 VAR_26->cb_func = VAR_20;
 VAR_22->io_req = VAR_26;
 VAR_22->op = VAR_17;
 VAR_26->cb_arg = VAR_22;
 VAR_26->data_xfer_len = VAR_19;


 VAR_26->cpu = FUNC_15();

 VAR_27 = (struct qedf_mp_req *)&(VAR_26->mp_req);
 VAR_30 = FUNC_11(VAR_26);
 if (VAR_30) {
  FUNC_0(&(VAR_24->dbg_ctx), "ELS MP request init failed\n");
  FUNC_4(&VAR_26->refcount, VAR_15);
  goto els_err;
 } else {
  VAR_30 = 0;
 }


 if ((VAR_17 >= VAR_3) && (VAR_17 <= VAR_2)) {
  FUNC_5(VAR_27->req_buf, VAR_18, VAR_19);
 } else {
  FUNC_0(&(VAR_24->dbg_ctx), "Invalid ELS op 0x%x\n", VAR_17);
  VAR_26->cb_func = ((void*)0);
  VAR_26->cb_arg = ((void*)0);
  FUNC_4(&VAR_26->refcount, VAR_15);
  VAR_30 = -VAR_1;
 }

 if (VAR_30)
  goto els_err;


 VAR_28 = &(VAR_27->req_fc_hdr);

 VAR_31 = VAR_16->rdata->ids.port_id;
 VAR_32 = VAR_16->sid;

 FUNC_2(VAR_28, VAR_8, VAR_31, VAR_32,
      VAR_9, VAR_6 | VAR_5 |
      VAR_7, 0);


 VAR_33 = VAR_26->xid;

 FUNC_16(&VAR_16->rport_lock, VAR_35);

 VAR_36 = FUNC_9(VAR_16);
 VAR_34 = &VAR_16->sq[VAR_36];
 FUNC_6(VAR_34, 0, sizeof(struct fcoe_wqe));


 VAR_29 = FUNC_10(&VAR_24->tasks, VAR_33);
 FUNC_12(VAR_26, VAR_29, VAR_34);


 if (VAR_23)
  FUNC_8(VAR_24, VAR_26, VAR_23);


 FUNC_1(&(VAR_24->dbg_ctx), VAR_13, "Ringing doorbell for ELS "
     "req\n");
 FUNC_13(VAR_16);
 FUNC_14(VAR_11, &VAR_26->flags);

 FUNC_17(&VAR_16->rport_lock, VAR_35);
els_err:
 return VAR_30;
}
