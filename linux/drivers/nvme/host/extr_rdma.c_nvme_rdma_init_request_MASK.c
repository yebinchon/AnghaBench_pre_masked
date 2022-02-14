
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct nvme_rdma_request {struct nvme_rdma_queue* queue; TYPE_1__ sqe; } ;
struct nvme_rdma_queue {int dummy; } ;
struct blk_mq_tag_set {struct nvme_rdma_ctrl* driver_data; } ;
struct nvme_rdma_ctrl {int ctrl; struct nvme_rdma_queue* queues; struct blk_mq_tag_set tag_set; } ;
struct nvme_command {int dummy; } ;
struct TYPE_4__ {int * ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 int FUNC_1 (int,int ) ;
 TYPE_2__* FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_2,
  struct request *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5)
{
 struct nvme_rdma_ctrl *VAR_6 = VAR_2->driver_data;
 struct nvme_rdma_request *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = (VAR_2 == &VAR_6->tag_set) ? VAR_4 + 1 : 0;
 struct nvme_rdma_queue *VAR_9 = &VAR_6->queues[VAR_8];

 FUNC_2(VAR_3)->ctrl = &VAR_6->ctrl;
 VAR_7->sqe.data = FUNC_1(sizeof(struct nvme_command), VAR_1);
 if (!VAR_7->sqe.data)
  return -VAR_0;

 VAR_7->queue = VAR_9;

 return 0;
}
