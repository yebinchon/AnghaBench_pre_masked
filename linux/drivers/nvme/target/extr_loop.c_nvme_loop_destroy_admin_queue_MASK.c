
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fabrics_q; int admin_q; } ;
struct nvme_loop_ctrl {int admin_tag_set; TYPE_2__ ctrl; TYPE_1__* queues; } ;
struct TYPE_3__ {int nvme_sq; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nvme_loop_ctrl *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->queues[0].flags);
 FUNC_3(&VAR_1->queues[0].nvme_sq);
 FUNC_0(VAR_1->ctrl.admin_q);
 FUNC_0(VAR_1->ctrl.fabrics_q);
 FUNC_1(&VAR_1->admin_tag_set);
}
