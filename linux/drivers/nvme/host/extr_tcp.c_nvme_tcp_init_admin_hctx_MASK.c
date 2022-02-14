
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_queue {int dummy; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_queue* queues; } ;
struct blk_mq_hw_ctx {struct nvme_tcp_queue* driver_data; } ;



__attribute__((used)) static int FUNC_0(struct blk_mq_hw_ctx *VAR_0, void *VAR_1,
  unsigned int VAR_2)
{
 struct nvme_tcp_ctrl *VAR_3 = VAR_1;
 struct nvme_tcp_queue *VAR_4 = &VAR_3->queues[0];

 VAR_0->driver_data = VAR_4;
 return 0;
}
