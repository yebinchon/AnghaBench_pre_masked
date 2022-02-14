
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int * tags; } ;
struct blk_mq_hw_ctx {struct nvme_queue* driver_data; } ;



__attribute__((used)) static void FUNC_0(struct blk_mq_hw_ctx *VAR_0, unsigned int VAR_1)
{
 struct nvme_queue *VAR_2 = VAR_0->driver_data;

 VAR_2->tags = ((void*)0);
}
