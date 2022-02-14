
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_rdma_queue {int cm_error; int cm_id; TYPE_1__* ctrl; } ;
struct nvme_ctrl {int device; TYPE_2__* opts; } ;
struct TYPE_4__ {scalar_t__ tos; } ;
struct TYPE_3__ {struct nvme_ctrl ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct nvme_rdma_queue*) ;
 int FUNC_2 (struct nvme_rdma_queue*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct nvme_rdma_queue *VAR_1)
{
 struct nvme_ctrl *VAR_2 = &VAR_1->ctrl->ctrl;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->opts->tos >= 0)
  FUNC_4(VAR_1->cm_id, VAR_2->opts->tos);
 VAR_3 = FUNC_3(VAR_1->cm_id, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_2->device, "rdma_resolve_route failed (%d).\n",
   VAR_1->cm_error);
  goto out_destroy_queue;
 }

 return 0;

out_destroy_queue:
 FUNC_2(VAR_1);
 return VAR_3;
}
