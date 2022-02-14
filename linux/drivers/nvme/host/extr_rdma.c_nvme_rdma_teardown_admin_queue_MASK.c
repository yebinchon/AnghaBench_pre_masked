
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int admin_q; scalar_t__ admin_tagset; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; int * queues; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nvme_rdma_ctrl *VAR_1,
  bool VAR_2)
{
 FUNC_0(VAR_1->ctrl.admin_q);
 FUNC_5(&VAR_1->queues[0]);
 if (VAR_1->ctrl.admin_tagset) {
  FUNC_1(VAR_1->ctrl.admin_tagset,
   VAR_0, &VAR_1->ctrl);
  FUNC_2(VAR_1->ctrl.admin_tagset);
 }
 if (VAR_2)
  FUNC_3(VAR_1->ctrl.admin_q);
 FUNC_4(VAR_1, VAR_2);
}
