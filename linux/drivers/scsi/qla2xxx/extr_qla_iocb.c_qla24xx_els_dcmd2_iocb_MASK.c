
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_18__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_25__ {int els_cmd; scalar_t__ comp_status; int comp; TYPE_4__* els_plogi_pyld; void* els_resp_pyld; int els_resp_pyld_dma; int els_plogi_pyld_dma; int rx_size; int tx_size; } ;
struct TYPE_32__ {TYPE_18__ els_plogi; } ;
struct srb_iocb {TYPE_7__ u; int timeout; } ;
struct TYPE_28__ {int data; } ;
struct qla_hw_data {TYPE_3__ plogi_els_payld; TYPE_2__* pdev; } ;
struct els_plogi_payload {int dummy; } ;
struct TYPE_26__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_33__ {char* name; int (* free ) (TYPE_8__*) ;int handle; int done; int flags; TYPE_10__* fcport; int type; TYPE_1__ u; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_31__ {int b24; } ;
struct TYPE_34__ {TYPE_6__ d_id; struct qla_hw_data* hw; } ;
typedef TYPE_9__ scsi_qla_host_t ;
struct TYPE_30__ {int b24; } ;
struct TYPE_24__ {int flags; TYPE_5__ d_id; int loop_id; } ;
typedef TYPE_10__ fc_port_t ;
struct TYPE_29__ {int opcode; int data; } ;
struct TYPE_27__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (scalar_t__,TYPE_9__*,int,char*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (scalar_t__,TYPE_9__*,int,int *,int) ;
 int FUNC_6 (int ,TYPE_9__*,int,char*) ;
 int VAR_13 ;
 int FUNC_7 (TYPE_9__*,TYPE_18__*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_8__* FUNC_8 (TYPE_9__*,TYPE_10__*,int ) ;
 int FUNC_9 (TYPE_8__*,scalar_t__) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int *) ;

int
FUNC_13(scsi_qla_host_t *VAR_16, int VAR_17,
    fc_port_t *VAR_18, bool VAR_19)
{
 srb_t *VAR_20;
 struct srb_iocb *VAR_21 = ((void*)0);
 struct qla_hw_data *VAR_22 = VAR_16->hw;
 int VAR_23 = VAR_7;
 void *VAR_24, *VAR_25;


 VAR_20 = FUNC_8(VAR_16, VAR_18, VAR_5);
 if (!VAR_20) {
  FUNC_6(VAR_13, VAR_16, 0x70e6,
   "SRB allocation failed\n");
  return -VAR_3;
 }

 VAR_21 = &VAR_20->u.iocb_cmd;
 FUNC_4(VAR_12, VAR_16, 0x3073,
     "Enter: PLOGI portid=%06x\n", VAR_18->d_id.b24);

 VAR_18->flags |= VAR_4;
 VAR_20->type = VAR_8;
 VAR_20->name = "ELS_DCMD";
 VAR_20->fcport = VAR_18;

 VAR_21->timeout = VAR_14;
 FUNC_1(&VAR_21->u.els_plogi.comp);
 if (VAR_19)
  VAR_20->flags = VAR_9;

 FUNC_9(VAR_20, VAR_2 + 2);

 VAR_20->done = VAR_15;
 VAR_21->u.els_plogi.tx_size = VAR_21->u.els_plogi.rx_size = VAR_1;

 VAR_24 = VAR_21->u.els_plogi.els_plogi_pyld =
     FUNC_0(&VAR_22->pdev->dev, VAR_1,
  &VAR_21->u.els_plogi.els_plogi_pyld_dma, VAR_5);

 if (!VAR_21->u.els_plogi.els_plogi_pyld) {
  VAR_23 = VAR_6;
  goto out;
 }

 VAR_25 = VAR_21->u.els_plogi.els_resp_pyld =
     FUNC_0(&VAR_22->pdev->dev, VAR_1,
  &VAR_21->u.els_plogi.els_resp_pyld_dma, VAR_5);

 if (!VAR_21->u.els_plogi.els_resp_pyld) {
  VAR_23 = VAR_6;
  goto out;
 }

 FUNC_4(VAR_12, VAR_16, 0x3073, "PLOGI %p %p\n", VAR_24, VAR_25);

 FUNC_3(VAR_24, 0, sizeof(struct els_plogi_payload));
 FUNC_3(VAR_25, 0, sizeof(struct els_plogi_payload));
 FUNC_2(VAR_21->u.els_plogi.els_plogi_pyld->data,
     &VAR_22->plogi_els_payld.data,
     sizeof(VAR_21->u.els_plogi.els_plogi_pyld->data));

 VAR_21->u.els_plogi.els_cmd = VAR_17;
 VAR_21->u.els_plogi.els_plogi_pyld->opcode = VAR_17;

 FUNC_4(VAR_11 + VAR_10, VAR_16, 0x3073, "PLOGI buffer:\n");
 FUNC_5(VAR_11 + VAR_10, VAR_16, 0x0109,
     (uint8_t *)VAR_21->u.els_plogi.els_plogi_pyld, 0x70);

 VAR_23 = FUNC_10(VAR_20);
 if (VAR_23 != VAR_7) {
  VAR_23 = VAR_6;
 } else {
  FUNC_4(VAR_11, VAR_16, 0x3074,
      "%s PLOGI sent, hdl=%x, loopid=%x, to port_id %06x from port_id %06x\n",
      VAR_20->name, VAR_20->handle, VAR_18->loop_id,
      VAR_18->d_id.b24, VAR_16->d_id.b24);
 }

 if (VAR_19) {
  FUNC_12(&VAR_21->u.els_plogi.comp);

  if (VAR_21->u.els_plogi.comp_status != VAR_0)
   VAR_23 = VAR_6;
 } else {
  goto done;
 }

out:
 VAR_18->flags &= ~(VAR_4);
 FUNC_7(VAR_16, &VAR_21->u.els_plogi);
 VAR_20->free(VAR_20);
done:
 return VAR_23;
}
