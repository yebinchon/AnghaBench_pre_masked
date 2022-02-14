
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int dma; } ;
struct nvme_rdma_request {TYPE_2__ sqe; struct nvme_rdma_queue* queue; } ;
struct nvme_rdma_queue {TYPE_1__* device; } ;
struct nvme_command {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {struct ib_device* dev; } ;


 int VAR_0 ;
 struct nvme_rdma_request* FUNC_0 (struct request*) ;
 int FUNC_1 (struct ib_device*,int ,int,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct nvme_rdma_queue*,struct request*) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_1)
{
 struct nvme_rdma_request *VAR_2 = FUNC_0(VAR_1);
 struct nvme_rdma_queue *VAR_3 = VAR_2->queue;
 struct ib_device *VAR_4 = VAR_3->device->dev;

 FUNC_3(VAR_3, VAR_1);
 FUNC_1(VAR_4, VAR_2->sqe.dma, sizeof(struct nvme_command),
       VAR_0);
 FUNC_2(VAR_1);
}
