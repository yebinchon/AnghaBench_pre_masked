
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union nvme_result {int u64; } ;
struct request {int dummy; } ;
struct nvmefc_fcp_req {int status; int rcv_rsplen; int transferred_length; int rspdma; } ;
struct nvme_fc_queue {TYPE_6__* ctrl; } ;
struct nvme_completion {scalar_t__ status; union nvme_result result; int command_id; } ;
struct TYPE_9__ {int status_code; int xfrd_len; int iu_len; struct nvme_completion cqe; } ;
struct TYPE_10__ {int command_id; } ;
struct nvme_command {TYPE_4__ common; } ;
struct TYPE_8__ {int data_len; struct nvme_command sqe; } ;
struct nvme_fc_fcp_op {int flags; int state; TYPE_3__ rsp_iu; TYPE_2__ cmd_iu; struct nvmefc_fcp_req fcp_req; struct nvme_fc_queue* queue; struct nvme_fc_ctrl* ctrl; struct request* rq; } ;
struct nvme_fc_ersp_iu {int dummy; } ;
struct TYPE_11__ {int device; } ;
struct nvme_fc_ctrl {int cnum; TYPE_5__ ctrl; TYPE_1__* lport; } ;
typedef scalar_t__ __le16 ;
struct TYPE_12__ {int ctrl; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_fcp_op*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,int,...) ;
 int FUNC_7 (int ,int ,int,int ) ;
 struct nvme_fc_fcp_op* FUNC_8 (struct nvmefc_fcp_req*) ;
 int FUNC_9 (int *,scalar_t__,union nvme_result*) ;
 int FUNC_10 (struct request*,scalar_t__,union nvme_result) ;
 int FUNC_11 (struct nvme_fc_ctrl*) ;
 int FUNC_12 (struct nvme_fc_ctrl*,char*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct nvmefc_fcp_req *VAR_7)
{
 struct nvme_fc_fcp_op *VAR_8 = FUNC_8(VAR_7);
 struct request *VAR_9 = VAR_8->rq;
 struct nvmefc_fcp_req *VAR_10 = &VAR_8->fcp_req;
 struct nvme_fc_ctrl *VAR_11 = VAR_8->ctrl;
 struct nvme_fc_queue *VAR_12 = VAR_8->queue;
 struct nvme_completion *VAR_13 = &VAR_8->rsp_iu.cqe;
 struct nvme_command *VAR_14 = &VAR_8->cmd_iu.sqe;
 __le16 VAR_15 = FUNC_5(VAR_6 << 1);
 union nvme_result VAR_16;
 bool VAR_17 = 1;
 int VAR_18;
 VAR_18 = FUNC_2(&VAR_8->state, VAR_3);

 FUNC_7(VAR_11->lport->dev, VAR_8->fcp_req.rspdma,
    sizeof(VAR_8->rsp_iu), VAR_0);

 if (VAR_18 == VAR_2)
  VAR_15 = FUNC_5(VAR_5 << 1);
 else if (VAR_10->status) {
  VAR_15 = FUNC_5(VAR_5 << 1);
  FUNC_6(VAR_11->ctrl.device,
   "NVME-FC{%d}: io failed due to lldd error %d\n",
   VAR_11->cnum, VAR_10->status);
 }






 if (VAR_15)
  goto done;
 switch (VAR_10->rcv_rsplen) {

 case 0:
 case 128:





  if (VAR_10->transferred_length !=
      FUNC_4(VAR_8->cmd_iu.data_len)) {
   VAR_15 = FUNC_5(VAR_5 << 1);
   FUNC_6(VAR_11->ctrl.device,
    "NVME-FC{%d}: io failed due to bad transfer "
    "length: %d vs expected %d\n",
    VAR_11->cnum, VAR_10->transferred_length,
    FUNC_4(VAR_8->cmd_iu.data_len));
   goto done;
  }
  VAR_16.u64 = 0;
  break;

 case sizeof(struct nvme_fc_ersp_iu):




  if (FUNC_13(FUNC_3(VAR_8->rsp_iu.iu_len) !=
     (VAR_10->rcv_rsplen / 4) ||
        FUNC_4(VAR_8->rsp_iu.xfrd_len) !=
     VAR_10->transferred_length ||
        VAR_8->rsp_iu.status_code ||
        VAR_14->common.command_id != VAR_13->command_id)) {
   VAR_15 = FUNC_5(VAR_5 << 1);
   FUNC_6(VAR_11->ctrl.device,
    "NVME-FC{%d}: io failed due to bad NVMe_ERSP: "
    "iu len %d, xfr len %d vs %d, status code "
    "%d, cmdid %d vs %d\n",
    VAR_11->cnum, FUNC_3(VAR_8->rsp_iu.iu_len),
    FUNC_4(VAR_8->rsp_iu.xfrd_len),
    VAR_10->transferred_length,
    VAR_8->rsp_iu.status_code,
    VAR_14->common.command_id,
    VAR_13->command_id);
   goto done;
  }
  VAR_16 = VAR_13->result;
  VAR_15 = VAR_13->status;
  break;

 default:
  VAR_15 = FUNC_5(VAR_5 << 1);
  FUNC_6(VAR_11->ctrl.device,
   "NVME-FC{%d}: io failed due to odd NVMe_xRSP iu "
   "len %d\n",
   VAR_11->cnum, VAR_10->rcv_rsplen);
  goto done;
 }

 VAR_17 = 0;

done:
 if (VAR_8->flags & VAR_1) {
  FUNC_9(&VAR_12->ctrl->ctrl, VAR_15, &VAR_16);
  FUNC_0(VAR_11, VAR_8, VAR_18);
  FUNC_1(&VAR_8->state, VAR_4);
  VAR_8->flags = VAR_1;
  FUNC_11(VAR_11);
  goto check_error;
 }

 FUNC_0(VAR_11, VAR_8, VAR_18);
 FUNC_10(VAR_9, VAR_15, VAR_16);

check_error:
 if (VAR_17)
  FUNC_12(VAR_11, "transport detected io error");
}
