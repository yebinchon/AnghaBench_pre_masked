
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_3__ {int sgl; } ;
struct nvme_rdma_request {TYPE_1__ sg_table; int nents; int * mr; } ;
struct nvme_rdma_queue {TYPE_2__* qp; struct nvme_rdma_device* device; } ;
struct nvme_rdma_device {struct ib_device* dev; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int rdma_mrs; } ;


 int VAR_0 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct ib_device*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(struct nvme_rdma_queue *VAR_1,
  struct request *VAR_2)
{
 struct nvme_rdma_request *VAR_3 = FUNC_0(VAR_2);
 struct nvme_rdma_device *VAR_4 = VAR_1->device;
 struct ib_device *VAR_5 = VAR_4->dev;

 if (!FUNC_1(VAR_2))
  return;

 if (VAR_3->mr) {
  FUNC_3(VAR_1->qp, &VAR_1->qp->rdma_mrs, VAR_3->mr);
  VAR_3->mr = ((void*)0);
 }

 FUNC_2(VAR_5, VAR_3->sg_table.sgl, VAR_3->nents, FUNC_5(VAR_2));

 FUNC_4(VAR_2);
 FUNC_6(&VAR_3->sg_table, VAR_0);
}
