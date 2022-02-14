
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_loop_queue {int dummy; } ;
struct nvme_loop_ctrl {struct nvme_loop_queue* queues; } ;
struct blk_mq_hw_ctx {struct nvme_loop_queue* driver_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_hw_ctx *VAR_0, void *VAR_1,
  unsigned int VAR_2)
{
 struct nvme_loop_ctrl *VAR_3 = VAR_1;
 struct nvme_loop_queue *VAR_4 = &VAR_3->queues[0];

 FUNC_0(VAR_2 != 0);

 VAR_0->driver_data = VAR_4;
 return 0;
}
