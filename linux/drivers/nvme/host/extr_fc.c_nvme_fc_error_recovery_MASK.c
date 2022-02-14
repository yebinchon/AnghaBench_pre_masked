
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int device; } ;
struct nvme_fc_ctrl {TYPE_1__ ctrl; int cnum; int err_work_active; int err_work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct nvme_fc_ctrl *VAR_3, char *VAR_4)
{
 int VAR_5;
 if (VAR_3->ctrl.state == VAR_0) {
  VAR_5 = FUNC_2(&VAR_3->err_work_active, 1);
  if (!VAR_5 && !FUNC_5(VAR_2, &VAR_3->err_work)) {
   FUNC_1(&VAR_3->err_work_active, 0);
   FUNC_0(1);
  }
  return;
 }


 if (VAR_3->ctrl.state != VAR_1)
  return;

 FUNC_3(VAR_3->ctrl.device,
  "NVME-FC{%d}: transport association error detected: %s\n",
  VAR_3->cnum, VAR_4);
 FUNC_3(VAR_3->ctrl.device,
  "NVME-FC{%d}: resetting controller\n", VAR_3->cnum);

 FUNC_4(&VAR_3->ctrl);
}
