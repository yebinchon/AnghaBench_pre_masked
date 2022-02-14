
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct nvme_fc_queue {int lldd_handle; int csn; int qnum; int connection_id; } ;
struct TYPE_18__ {int io_dir; int cmddma; int sqid; int status; scalar_t__ rcv_rsplen; scalar_t__ transferred_length; int payload_length; } ;
struct TYPE_11__ {int type; scalar_t__ addr; int length; } ;
struct TYPE_12__ {TYPE_2__ sgl; } ;
struct TYPE_13__ {TYPE_3__ dptr; } ;
struct TYPE_10__ {int flags; int metadata; } ;
struct nvme_command {TYPE_4__ rw; TYPE_1__ common; } ;
struct nvme_fc_cmd_iu {void* csn; int flags; void* data_len; int connection_id; struct nvme_command sqe; } ;
struct nvme_fc_fcp_op {int flags; int rq; int state; TYPE_9__ fcp_req; struct nvme_fc_cmd_iu cmd_iu; } ;
struct nvme_fc_ctrl {TYPE_7__* rport; TYPE_6__* lport; } ;
typedef enum nvmefc_fcp_datadir { ____Placeholder_nvmefc_fcp_datadir } nvmefc_fcp_datadir ;
typedef int blk_status_t ;
struct TYPE_17__ {scalar_t__ port_state; } ;
struct TYPE_16__ {TYPE_8__ remoteport; } ;
struct TYPE_15__ {int localport; TYPE_5__* ops; int dev; } ;
struct TYPE_14__ {int (* fcp_io ) (int *,TYPE_8__*,int ,TYPE_9__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_fc_ctrl*,struct nvme_fc_fcp_op*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nvme_fc_ctrl*) ;
 int FUNC_13 (struct nvme_fc_ctrl*) ;
 int FUNC_14 (struct nvme_fc_ctrl*,int ,struct nvme_fc_fcp_op*) ;
 int FUNC_15 (struct nvme_fc_ctrl*,int ,struct nvme_fc_fcp_op*) ;
 int FUNC_16 (int *,TYPE_8__*,int ,TYPE_9__*) ;

__attribute__((used)) static blk_status_t
FUNC_17(struct nvme_fc_ctrl *VAR_17, struct nvme_fc_queue *VAR_18,
 struct nvme_fc_fcp_op *VAR_19, u32 VAR_20,
 enum nvmefc_fcp_datadir VAR_21)
{
 struct nvme_fc_cmd_iu *VAR_22 = &VAR_19->cmd_iu;
 struct nvme_command *VAR_23 = &VAR_22->sqe;
 int VAR_24, VAR_25;





 if (VAR_17->rport->remoteport.port_state != VAR_12)
  return VAR_2;

 if (!FUNC_12(VAR_17))
  return VAR_0;


 VAR_22->connection_id = FUNC_7(VAR_18->connection_id);
 VAR_22->data_len = FUNC_6(VAR_20);
 switch (VAR_21) {
 case 128:
  VAR_22->flags = VAR_8;
  break;
 case 129:
  VAR_22->flags = VAR_7;
  break;
 case 130:
  VAR_22->flags = 0;
  break;
 }
 VAR_19->fcp_req.payload_length = VAR_20;
 VAR_19->fcp_req.io_dir = VAR_21;
 VAR_19->fcp_req.transferred_length = 0;
 VAR_19->fcp_req.rcv_rsplen = 0;
 VAR_19->fcp_req.status = VAR_14;
 VAR_19->fcp_req.sqid = FUNC_8(VAR_18->qnum);





 FUNC_0(VAR_23->common.metadata);
 VAR_23->common.flags |= VAR_13;
 VAR_23->rw.dptr.sgl.type = (VAR_16 << 4) |
     VAR_15;
 VAR_23->rw.dptr.sgl.length = FUNC_9(VAR_20);
 VAR_23->rw.dptr.sgl.addr = 0;

 if (!(VAR_19->flags & VAR_9)) {
  VAR_24 = FUNC_14(VAR_17, VAR_19->rq, VAR_19);
  if (VAR_24 < 0) {
   FUNC_11(VAR_19->rq);
   FUNC_13(VAR_17);
   if (VAR_24 == -VAR_6 || VAR_24 == -VAR_4)
    return VAR_2;
   return VAR_0;
  }
 }

 FUNC_10(VAR_17->lport->dev, VAR_19->fcp_req.cmddma,
      sizeof(VAR_19->cmd_iu), VAR_3);

 FUNC_3(&VAR_19->state, VAR_10);

 if (!(VAR_19->flags & VAR_9))
  FUNC_5(VAR_19->rq);

 VAR_22->csn = FUNC_6(FUNC_2(&VAR_18->csn));
 VAR_24 = VAR_17->lport->ops->fcp_io(&VAR_17->lport->localport,
     &VAR_17->rport->remoteport,
     VAR_18->lldd_handle, &VAR_19->fcp_req);

 if (VAR_24) {
  VAR_25 = FUNC_4(&VAR_19->state, VAR_11);
  FUNC_1(VAR_17, VAR_19, VAR_25);

  if (!(VAR_19->flags & VAR_9))
   FUNC_15(VAR_17, VAR_19->rq, VAR_19);

  FUNC_13(VAR_17);

  if (VAR_17->rport->remoteport.port_state == VAR_12 &&
    VAR_24 != -VAR_5)
   return VAR_0;

  return VAR_2;
 }

 return VAR_1;
}
