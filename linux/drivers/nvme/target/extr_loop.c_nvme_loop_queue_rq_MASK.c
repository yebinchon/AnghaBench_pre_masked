
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


struct request {int q; } ;
struct nvme_ns {int dummy; } ;
struct nvme_loop_queue {int nvme_sq; int nvme_cq; TYPE_3__* ctrl; int flags; } ;
struct TYPE_11__ {int transfer_len; int sg_cnt; int sg; int port; } ;
struct TYPE_10__ {int sgl; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_12__ {TYPE_2__ common; } ;
struct nvme_loop_iod {int work; TYPE_5__ req; TYPE_4__ sg_table; int first_sgl; TYPE_6__ cmd; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct nvme_loop_queue* driver_data; TYPE_1__* queue; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_9__ {int port; int ctrl; } ;
struct TYPE_7__ {struct nvme_ns* queuedata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvme_loop_iod* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,struct request*,int ) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct nvme_ns*,struct request*,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,int *,int *,int *) ;
 int FUNC_8 (int *,struct request*,int) ;
 scalar_t__ FUNC_9 (int *,struct request*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_4__*,scalar_t__,int ,int ) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static blk_status_t FUNC_13(struct blk_mq_hw_ctx *VAR_6,
  const struct blk_mq_queue_data *VAR_7)
{
 struct nvme_ns *VAR_8 = VAR_6->queue->queuedata;
 struct nvme_loop_queue *VAR_9 = VAR_6->driver_data;
 struct request *VAR_10 = VAR_7->rq;
 struct nvme_loop_iod *VAR_11 = FUNC_0(VAR_10);
 bool VAR_12 = FUNC_12(VAR_3, &VAR_9->flags);
 blk_status_t VAR_13;

 if (!FUNC_8(&VAR_9->ctrl->ctrl, VAR_10, VAR_12))
  return FUNC_9(&VAR_9->ctrl->ctrl, VAR_10);

 VAR_13 = FUNC_6(VAR_8, VAR_10, &VAR_11->cmd);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_10);
 VAR_11->cmd.common.flags |= VAR_2;
 VAR_11->req.port = VAR_9->ctrl->port;
 if (!FUNC_7(&VAR_11->req, &VAR_9->nvme_cq,
   &VAR_9->nvme_sq, &VAR_5))
  return VAR_0;

 if (FUNC_3(VAR_10)) {
  VAR_11->sg_table.sgl = VAR_11->first_sgl;
  if (FUNC_11(&VAR_11->sg_table,
    FUNC_3(VAR_10),
    VAR_11->sg_table.sgl, VAR_4)) {
   FUNC_5(VAR_10);
   return VAR_1;
  }

  VAR_11->req.sg = VAR_11->sg_table.sgl;
  VAR_11->req.sg_cnt = FUNC_2(VAR_10->q, VAR_10, VAR_11->sg_table.sgl);
  VAR_11->req.transfer_len = FUNC_4(VAR_10);
 }

 FUNC_10(&VAR_11->work);
 return VAR_0;
}
