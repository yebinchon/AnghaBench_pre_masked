
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opal_dev; scalar_t__ admin_q; } ;
struct nvme_dev {int iod_mempool; TYPE_1__ ctrl; struct nvme_dev* queues; int dev; } ;
struct nvme_ctrl {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_dev*) ;
 int FUNC_5 (struct nvme_dev*) ;
 int FUNC_6 (int ) ;
 struct nvme_dev* FUNC_7 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_8(struct nvme_ctrl *VAR_0)
{
 struct nvme_dev *VAR_1 = FUNC_7(VAR_0);

 FUNC_4(VAR_1);
 FUNC_6(VAR_1->dev);
 FUNC_5(VAR_1);
 if (VAR_1->ctrl.admin_q)
  FUNC_0(VAR_1->ctrl.admin_q);
 FUNC_2(VAR_1->queues);
 FUNC_1(VAR_1->ctrl.opal_dev);
 FUNC_3(VAR_1->iod_mempool);
 FUNC_2(VAR_1);
}
