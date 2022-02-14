
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request {scalar_t__ tag; } ;
struct TYPE_11__ {int done; } ;
struct nvme_rdma_qe {int dma; TYPE_4__ cqe; struct nvme_command* data; } ;
struct TYPE_12__ {int wr; } ;
struct nvme_rdma_request {struct nvme_rdma_qe sqe; TYPE_5__ reg_wr; scalar_t__ mr; int num_sge; int sge; } ;
struct nvme_rdma_queue {TYPE_3__* ctrl; TYPE_2__* device; int flags; } ;
struct nvme_ns {int dummy; } ;
struct nvme_command {int dummy; } ;
struct ib_device {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {struct nvme_rdma_queue* driver_data; TYPE_1__* queue; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_13__ {int device; } ;
struct TYPE_10__ {TYPE_6__ ctrl; } ;
struct TYPE_9__ {struct ib_device* dev; } ;
struct TYPE_8__ {struct nvme_ns* queuedata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct nvme_rdma_request* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct ib_device*,struct nvme_command*,int,int ) ;
 int FUNC_5 (struct ib_device*,int ) ;
 int FUNC_6 (struct ib_device*,int ,int,int ) ;
 int FUNC_7 (struct ib_device*,int ,int,int ) ;
 int FUNC_8 (struct ib_device*,int ,int,int ) ;
 int FUNC_9 (struct request*) ;
 int FUNC_10 (struct nvme_rdma_queue*,struct request*,struct nvme_command*) ;
 int FUNC_11 (struct nvme_rdma_queue*,struct nvme_rdma_qe*,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_12 (struct nvme_rdma_queue*,struct request*) ;
 scalar_t__ FUNC_13 (struct nvme_ns*,struct request*,struct nvme_command*) ;
 int FUNC_14 (TYPE_6__*,struct request*,int) ;
 scalar_t__ FUNC_15 (TYPE_6__*,struct request*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static blk_status_t FUNC_18(struct blk_mq_hw_ctx *VAR_8,
  const struct blk_mq_queue_data *VAR_9)
{
 struct nvme_ns *VAR_10 = VAR_8->queue->queuedata;
 struct nvme_rdma_queue *VAR_11 = VAR_8->driver_data;
 struct request *VAR_12 = VAR_9->rq;
 struct nvme_rdma_request *VAR_13 = FUNC_1(VAR_12);
 struct nvme_rdma_qe *VAR_14 = &VAR_13->sqe;
 struct nvme_command *VAR_15 = VAR_14->data;
 struct ib_device *VAR_16;
 bool VAR_17 = FUNC_16(VAR_6, &VAR_11->flags);
 blk_status_t VAR_18;
 int VAR_19;

 FUNC_0(VAR_12->tag < 0);

 if (!FUNC_14(&VAR_11->ctrl->ctrl, VAR_12, VAR_17))
  return FUNC_15(&VAR_11->ctrl->ctrl, VAR_12);

 VAR_16 = VAR_11->device->dev;

 VAR_13->sqe.dma = FUNC_4(VAR_16, VAR_13->sqe.data,
      sizeof(struct nvme_command),
      VAR_3);
 VAR_19 = FUNC_5(VAR_16, VAR_13->sqe.dma);
 if (FUNC_17(VAR_19))
  return VAR_2;

 FUNC_6(VAR_16, VAR_14->dma,
   sizeof(struct nvme_command), VAR_3);

 VAR_18 = FUNC_13(VAR_10, VAR_12, VAR_15);
 if (VAR_18)
  goto unmap_qe;

 FUNC_2(VAR_12);

 VAR_19 = FUNC_10(VAR_11, VAR_12, VAR_15);
 if (FUNC_17(VAR_19 < 0)) {
  FUNC_3(VAR_11->ctrl->ctrl.device,
        "Failed to map data (%d)\n", VAR_19);
  FUNC_9(VAR_12);
  goto err;
 }

 VAR_14->cqe.done = VAR_7;

 FUNC_7(VAR_16, VAR_14->dma,
   sizeof(struct nvme_command), VAR_3);

 VAR_19 = FUNC_11(VAR_11, VAR_14, VAR_13->sge, VAR_13->num_sge,
   VAR_13->mr ? &VAR_13->reg_wr.wr : ((void*)0));
 if (FUNC_17(VAR_19)) {
  FUNC_12(VAR_11, VAR_12);
  goto err;
 }

 return VAR_1;

err:
 if (VAR_19 == -VAR_5 || VAR_19 == -VAR_4)
  VAR_18 = VAR_2;
 else
  VAR_18 = VAR_0;
unmap_qe:
 FUNC_8(VAR_16, VAR_13->sqe.dma, sizeof(struct nvme_command),
       VAR_3);
 return VAR_18;
}
