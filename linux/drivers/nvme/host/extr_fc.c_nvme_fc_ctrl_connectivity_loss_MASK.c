
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int device; } ;
struct nvme_fc_ctrl {TYPE_1__ ctrl; int cnum; } ;







 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct nvme_fc_ctrl *VAR_0)
{
 FUNC_0(VAR_0->ctrl.device,
  "NVME-FC{%d}: controller connectivity lost. Awaiting "
  "Reconnect", VAR_0->cnum);

 switch (VAR_0->ctrl.state) {
 case 129:
 case 130:







  if (FUNC_3(&VAR_0->ctrl)) {
   FUNC_1(VAR_0->ctrl.device,
    "NVME-FC{%d}: Couldn't schedule reset.\n",
    VAR_0->cnum);
   FUNC_2(&VAR_0->ctrl);
  }
  break;

 case 132:







  break;

 case 128:






  break;

 case 131:
 default:

  break;
 }
}
