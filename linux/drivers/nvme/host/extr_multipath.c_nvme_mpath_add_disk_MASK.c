
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvme_ns {TYPE_1__* head; int ana_state; TYPE_2__* ctrl; int ana_grpid; } ;
struct nvme_id_ns {int anagrpid; } ;
struct TYPE_5__ {int ana_lock; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct nvme_ns*) ;
 int FUNC_5 (TYPE_2__*,struct nvme_ns*,int ) ;
 int VAR_1 ;

void FUNC_6(struct nvme_ns *VAR_2, struct nvme_id_ns *VAR_3)
{
 if (FUNC_3(VAR_2->ctrl)) {
  FUNC_1(&VAR_2->ctrl->ana_lock);
  VAR_2->ana_grpid = FUNC_0(VAR_3->anagrpid);
  FUNC_5(VAR_2->ctrl, VAR_2, VAR_1);
  FUNC_2(&VAR_2->ctrl->ana_lock);
 } else {
  FUNC_1(&VAR_2->head->lock);
  VAR_2->ana_state = VAR_0;
  FUNC_4(VAR_2);
  FUNC_2(&VAR_2->head->lock);
 }
}
