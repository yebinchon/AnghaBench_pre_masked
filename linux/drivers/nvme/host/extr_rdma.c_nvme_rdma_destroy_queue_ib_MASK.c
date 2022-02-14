
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_rdma_queue {int queue_size; int rsp_ring; int ib_cq; TYPE_1__* qp; struct nvme_rdma_device* device; int flags; } ;
struct nvme_rdma_device {struct ib_device* dev; } ;
struct nvme_completion {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int rdma_mrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct nvme_rdma_device*) ;
 int FUNC_4 (struct ib_device*,int ,int ,int,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct nvme_rdma_queue *VAR_2)
{
 struct nvme_rdma_device *VAR_3;
 struct ib_device *VAR_4;

 if (!FUNC_5(VAR_1, &VAR_2->flags))
  return;

 VAR_3 = VAR_2->device;
 VAR_4 = VAR_3->dev;

 FUNC_2(VAR_2->qp, &VAR_2->qp->rdma_mrs);






 FUNC_0(VAR_2->qp);
 FUNC_1(VAR_2->ib_cq);

 FUNC_4(VAR_4, VAR_2->rsp_ring, VAR_2->queue_size,
   sizeof(struct nvme_completion), VAR_0);

 FUNC_3(VAR_3);
}
