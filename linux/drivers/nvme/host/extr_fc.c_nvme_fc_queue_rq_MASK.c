
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct request {int dummy; } ;
struct nvme_ns {int dummy; } ;
struct nvme_fc_queue {struct nvme_fc_ctrl* ctrl; int flags; } ;
struct nvme_command {int dummy; } ;
struct nvme_fc_cmd_iu {struct nvme_command sqe; } ;
struct nvme_fc_fcp_op {struct nvme_fc_cmd_iu cmd_iu; } ;
struct nvme_fc_ctrl {int ctrl; TYPE_3__* rport; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct nvme_fc_queue* driver_data; TYPE_1__* queue; } ;
typedef enum nvmefc_fcp_datadir { ____Placeholder_nvmefc_fcp_datadir } nvmefc_fcp_datadir ;
typedef scalar_t__ blk_status_t ;
struct TYPE_5__ {scalar_t__ port_state; } ;
struct TYPE_6__ {TYPE_2__ remoteport; } ;
struct TYPE_4__ {struct nvme_ns* queuedata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nvme_fc_fcp_op* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct nvme_fc_ctrl*,struct nvme_fc_queue*,struct nvme_fc_fcp_op*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_5 (int *,struct request*,int) ;
 scalar_t__ FUNC_6 (int *,struct request*) ;
 scalar_t__ FUNC_7 (struct request*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static blk_status_t
FUNC_9(struct blk_mq_hw_ctx *VAR_6,
   const struct blk_mq_queue_data *VAR_7)
{
 struct nvme_ns *VAR_8 = VAR_6->queue->queuedata;
 struct nvme_fc_queue *VAR_9 = VAR_6->driver_data;
 struct nvme_fc_ctrl *VAR_10 = VAR_9->ctrl;
 struct request *VAR_11 = VAR_7->rq;
 struct nvme_fc_fcp_op *VAR_12 = FUNC_0(VAR_11);
 struct nvme_fc_cmd_iu *VAR_13 = &VAR_12->cmd_iu;
 struct nvme_command *VAR_14 = &VAR_13->sqe;
 enum nvmefc_fcp_datadir VAR_15;
 bool VAR_16 = FUNC_8(VAR_4, &VAR_9->flags);
 u32 VAR_17;
 blk_status_t VAR_18;

 if (VAR_10->rport->remoteport.port_state != VAR_0 ||
     !FUNC_5(&VAR_9->ctrl->ctrl, VAR_11, VAR_16))
  return FUNC_6(&VAR_9->ctrl->ctrl, VAR_11);

 VAR_18 = FUNC_4(VAR_8, VAR_11, VAR_14);
 if (VAR_18)
  return VAR_18;
 if (FUNC_1(VAR_11)) {
  VAR_17 = FUNC_2(VAR_11);
  VAR_15 = ((FUNC_7(VAR_11) == VAR_5) ?
     VAR_3 : VAR_2);
 } else {
  VAR_17 = 0;
  VAR_15 = VAR_1;
 }


 return FUNC_3(VAR_10, VAR_9, VAR_12, VAR_17, VAR_15);
}
