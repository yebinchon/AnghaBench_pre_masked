
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns {TYPE_1__* head; int ana_state; int flags; int ana_grpid; } ;
struct nvme_ana_group_desc {int state; int grpid; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvme_ns*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct nvme_ana_group_desc *VAR_1,
  struct nvme_ns *VAR_2)
{
 FUNC_2(&VAR_2->head->lock);
 VAR_2->ana_grpid = FUNC_1(VAR_1->grpid);
 VAR_2->ana_state = VAR_1->state;
 FUNC_0(VAR_0, &VAR_2->flags);

 if (FUNC_5(VAR_2->ana_state))
  FUNC_4(VAR_2);
 FUNC_3(&VAR_2->head->lock);
}
