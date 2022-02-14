
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_rdma_queue {int flags; } ;
struct TYPE_3__ {int device; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; struct nvme_rdma_queue* queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_rdma_queue*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct nvme_rdma_queue*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nvme_rdma_ctrl *VAR_2, int VAR_3)
{
 struct nvme_rdma_queue *VAR_4 = &VAR_2->queues[VAR_3];
 bool VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (VAR_3)
  VAR_6 = FUNC_4(&VAR_2->ctrl, VAR_3, VAR_5);
 else
  VAR_6 = FUNC_3(&VAR_2->ctrl);

 if (!VAR_6) {
  FUNC_5(VAR_1, &VAR_4->flags);
 } else {
  if (FUNC_6(VAR_0, &VAR_4->flags))
   FUNC_0(VAR_4);
  FUNC_1(VAR_2->ctrl.device,
   "failed to connect queue: %d ret=%d\n", VAR_3, VAR_6);
 }
 return VAR_6;
}
