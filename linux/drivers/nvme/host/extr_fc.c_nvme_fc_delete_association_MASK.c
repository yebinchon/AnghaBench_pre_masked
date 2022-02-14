
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue_count; int admin_q; scalar_t__ tagset; } ;
struct nvme_fc_ctrl {int assoc_active; scalar_t__ iocnt; TYPE_1__ ctrl; int * queues; scalar_t__ association_id; int lock; int flags; int ioabort_wait; int admin_tag_set; int tag_set; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_fc_ctrl*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvme_fc_ctrl*) ;
 int FUNC_6 (struct nvme_fc_ctrl*) ;
 int FUNC_7 (struct nvme_fc_ctrl*) ;
 int FUNC_8 (struct nvme_fc_ctrl*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nvme_fc_ctrl*) ;
 int VAR_1 ;
 int FUNC_11 (struct nvme_fc_ctrl*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_19(struct nvme_fc_ctrl *VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_2->assoc_active)
  return;
 VAR_2->assoc_active = 0;

 FUNC_15(&VAR_2->lock, VAR_3);
 VAR_2->flags |= VAR_0;
 VAR_2->iocnt = 0;
 FUNC_17(&VAR_2->lock, VAR_3);
 if (VAR_2->ctrl.queue_count > 1) {
  FUNC_13(&VAR_2->ctrl);
  FUNC_2(&VAR_2->tag_set,
    VAR_1, &VAR_2->ctrl);
  FUNC_3(&VAR_2->tag_set);
 }
 FUNC_1(VAR_2->ctrl.admin_q);
 FUNC_2(&VAR_2->admin_tag_set,
    VAR_1, &VAR_2->ctrl);
 FUNC_3(&VAR_2->admin_tag_set);


 FUNC_5(VAR_2);


 FUNC_14(&VAR_2->lock);
 FUNC_18(VAR_2->ioabort_wait, VAR_2->iocnt == 0, VAR_2->lock);
 VAR_2->flags &= ~VAR_0;
 FUNC_16(&VAR_2->lock);

 FUNC_10(VAR_2);







 if (VAR_2->association_id)
  FUNC_11(VAR_2);

 if (VAR_2->ctrl.tagset) {
  FUNC_7(VAR_2);
  FUNC_8(VAR_2);
 }

 FUNC_0(VAR_2, &VAR_2->queues[0], 0);
 FUNC_9(&VAR_2->queues[0]);


 FUNC_4(VAR_2->ctrl.admin_q);


 FUNC_12(&VAR_2->ctrl);

 FUNC_6(VAR_2);
}
