
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {int ib_cq; } ;
struct blk_mq_hw_ctx {struct nvme_rdma_queue* driver_data; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct blk_mq_hw_ctx *VAR_0)
{
 struct nvme_rdma_queue *VAR_1 = VAR_0->driver_data;

 return FUNC_0(VAR_1->ib_cq, -1);
}
