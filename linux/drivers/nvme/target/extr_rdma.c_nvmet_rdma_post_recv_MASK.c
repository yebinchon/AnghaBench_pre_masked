
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvmet_rdma_device {scalar_t__ srq; int device; } ;
struct nvmet_rdma_cmd {int wr; TYPE_2__* queue; TYPE_3__* sge; } ;
struct TYPE_6__ {int length; int addr; } ;
struct TYPE_5__ {TYPE_1__* cm_id; } ;
struct TYPE_4__ {int qp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct nvmet_rdma_device *VAR_1,
  struct nvmet_rdma_cmd *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->device,
  VAR_2->sge[0].addr, VAR_2->sge[0].length,
  VAR_0);

 if (VAR_1->srq)
  VAR_3 = FUNC_2(VAR_1->srq, &VAR_2->wr, ((void*)0));
 else
  VAR_3 = FUNC_1(VAR_2->queue->cm_id->qp, &VAR_2->wr, ((void*)0));

 if (FUNC_4(VAR_3))
  FUNC_3("post_recv cmd failed\n");

 return VAR_3;
}
