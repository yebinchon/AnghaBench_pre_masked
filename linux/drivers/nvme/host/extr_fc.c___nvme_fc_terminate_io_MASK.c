
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int device; } ;
struct nvme_fc_ctrl {int cnum; TYPE_1__ ctrl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (struct nvme_fc_ctrl*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct nvme_fc_ctrl *VAR_1)
{
 FUNC_3(&VAR_1->ctrl);


 FUNC_2(VAR_1);

 if (VAR_1->ctrl.state != VAR_0 &&
     !FUNC_1(&VAR_1->ctrl, VAR_0))
  FUNC_0(VAR_1->ctrl.device,
   "NVME-FC{%d}: error_recovery: Couldn't change state "
   "to CONNECTING\n", VAR_1->cnum);
}
