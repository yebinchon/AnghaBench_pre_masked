
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int device; } ;
struct nvme_fc_ctrl {int connect_work; int cnum; TYPE_1__ ctrl; } ;





 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_ctrl *VAR_1)
{
 switch (VAR_1->ctrl.state) {
 case 129:
 case 130:




  FUNC_0(VAR_1->ctrl.device,
   "NVME-FC{%d}: connectivity re-established. "
   "Attempting reconnect\n", VAR_1->cnum);

  FUNC_1(VAR_0, &VAR_1->connect_work, 0);
  break;

 case 128:





  break;

 default:

  break;
 }
}
