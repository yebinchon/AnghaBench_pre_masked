
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int tag; } ;
struct nvme_rdma_request {struct nvme_rdma_queue* queue; } ;
struct nvme_rdma_queue {struct nvme_rdma_ctrl* ctrl; } ;
struct TYPE_2__ {scalar_t__ state; int device; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; int err_work; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvme_rdma_ctrl*) ;
 int FUNC_4 (struct nvme_rdma_queue*) ;
 int FUNC_5 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_6 (struct nvme_rdma_ctrl*,int) ;

__attribute__((used)) static enum blk_eh_timer_return
FUNC_7(struct request *VAR_4, bool VAR_5)
{
 struct nvme_rdma_request *VAR_6 = FUNC_0(VAR_4);
 struct nvme_rdma_queue *VAR_7 = VAR_6->queue;
 struct nvme_rdma_ctrl *VAR_8 = VAR_7->ctrl;

 FUNC_1(VAR_8->ctrl.device, "I/O %d QID %d timeout\n",
   VAR_4->tag, FUNC_4(VAR_7));






 if (VAR_8->ctrl.state == VAR_3)
  return VAR_1;

 if (VAR_8->ctrl.state != VAR_2) {





  FUNC_2(&VAR_8->err_work);
  FUNC_6(VAR_8, 0);
  FUNC_5(VAR_8, 0);
  return VAR_0;
 }

 FUNC_1(VAR_8->ctrl.device, "starting error recovery\n");
 FUNC_3(VAR_8);

 return VAR_1;
}
