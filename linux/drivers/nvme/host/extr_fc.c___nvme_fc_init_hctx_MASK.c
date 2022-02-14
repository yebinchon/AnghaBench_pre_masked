
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_queue {struct blk_mq_hw_ctx* hctx; } ;
struct nvme_fc_ctrl {struct nvme_fc_queue* queues; } ;
struct blk_mq_hw_ctx {struct nvme_fc_queue* driver_data; } ;



__attribute__((used)) static inline void
FUNC_0(struct blk_mq_hw_ctx *VAR_0, struct nvme_fc_ctrl *VAR_1,
  unsigned int VAR_2)
{
 struct nvme_fc_queue *VAR_3 = &VAR_1->queues[VAR_2];

 VAR_0->driver_data = VAR_3;
 VAR_3->hctx = VAR_0;
}
