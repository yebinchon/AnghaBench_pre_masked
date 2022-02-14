
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int admin_q; } ;
struct nvme_rdma_ctrl {TYPE_1__ ctrl; int reconnect_work; int err_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_5 (struct nvme_rdma_ctrl*,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct nvme_rdma_ctrl *VAR_0, bool VAR_1)
{
 FUNC_2(&VAR_0->err_work);
 FUNC_1(&VAR_0->reconnect_work);

 FUNC_5(VAR_0, VAR_1);
 FUNC_0(VAR_0->ctrl.admin_q);
 if (VAR_1)
  FUNC_6(&VAR_0->ctrl);
 else
  FUNC_3(&VAR_0->ctrl);
 FUNC_4(VAR_0, VAR_1);
}
