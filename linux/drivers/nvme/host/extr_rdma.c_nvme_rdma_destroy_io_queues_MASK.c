
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tagset; int connect_q; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_rdma_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct nvme_rdma_ctrl *VAR_0,
  bool VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_0->ctrl.connect_q);
  FUNC_1(VAR_0->ctrl.tagset);
 }
 FUNC_2(VAR_0);
}
