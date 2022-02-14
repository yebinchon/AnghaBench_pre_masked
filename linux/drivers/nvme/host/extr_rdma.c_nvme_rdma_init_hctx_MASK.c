
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_rdma_queue {int dummy; } ;
struct TYPE_2__ {unsigned int queue_count; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; struct nvme_rdma_queue* queues; } ;
struct blk_mq_hw_ctx {struct nvme_rdma_queue* driver_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_hw_ctx *VAR_0, void *VAR_1,
  unsigned int VAR_2)
{
 struct nvme_rdma_ctrl *VAR_3 = VAR_1;
 struct nvme_rdma_queue *VAR_4 = &VAR_3->queues[VAR_2 + 1];

 FUNC_0(VAR_2 >= VAR_3->ctrl.queue_count);

 VAR_0->driver_data = VAR_4;
 return 0;
}
