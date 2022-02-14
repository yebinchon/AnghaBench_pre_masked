
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue_count; scalar_t__ state; int admin_q; } ;
struct nvme_loop_ctrl {int admin_tag_set; TYPE_1__ ctrl; int tag_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct nvme_loop_ctrl*) ;
 int FUNC_4 (struct nvme_loop_ctrl*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct nvme_loop_ctrl *VAR_2)
{
 if (VAR_2->ctrl.queue_count > 1) {
  FUNC_6(&VAR_2->ctrl);
  FUNC_1(&VAR_2->tag_set,
     VAR_1, &VAR_2->ctrl);
  FUNC_2(&VAR_2->tag_set);
  FUNC_4(VAR_2);
 }

 FUNC_0(VAR_2->ctrl.admin_q);
 if (VAR_2->ctrl.state == VAR_0)
  FUNC_5(&VAR_2->ctrl);

 FUNC_1(&VAR_2->admin_tag_set,
    VAR_1, &VAR_2->ctrl);
 FUNC_2(&VAR_2->admin_tag_set);
 FUNC_3(VAR_2);
}
