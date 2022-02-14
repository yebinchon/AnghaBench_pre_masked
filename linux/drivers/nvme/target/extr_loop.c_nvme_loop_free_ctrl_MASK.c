
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int connect_q; } ;
struct nvme_loop_ctrl {struct nvme_loop_ctrl* queues; int tag_set; TYPE_1__ ctrl; int list; } ;
struct nvme_ctrl {int opts; scalar_t__ tagset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_loop_ctrl*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 struct nvme_loop_ctrl* FUNC_8 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_9(struct nvme_ctrl *VAR_1)
{
 struct nvme_loop_ctrl *VAR_2 = FUNC_8(VAR_1);

 if (FUNC_4(&VAR_2->list))
  goto free_ctrl;

 FUNC_5(&VAR_0);
 FUNC_3(&VAR_2->list);
 FUNC_6(&VAR_0);

 if (VAR_1->tagset) {
  FUNC_0(VAR_2->ctrl.connect_q);
  FUNC_1(&VAR_2->tag_set);
 }
 FUNC_2(VAR_2->queues);
 FUNC_7(VAR_1->opts);
free_ctrl:
 FUNC_2(VAR_2);
}
