
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue_count; } ;
struct nvme_fc_ctrl {TYPE_1__ ctrl; } ;


 int FUNC_0 (struct nvme_fc_ctrl*,int) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_ctrl *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0->ctrl.queue_count; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
