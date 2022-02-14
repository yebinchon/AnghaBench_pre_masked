
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nvme_ns {TYPE_3__* ctrl; int list; TYPE_4__* disk; int queue; TYPE_2__* head; int siblings; int fault_inject; int flags; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int namespaces_rwsem; TYPE_1__* subsys; } ;
struct TYPE_8__ {int srcu; } ;
struct TYPE_7__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nvme_ns*) ;
 int FUNC_11 (struct nvme_ns*) ;
 int FUNC_12 (struct nvme_ns*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct nvme_ns *VAR_2)
{
 if (FUNC_15(VAR_1, &VAR_2->flags))
  return;

 FUNC_9(&VAR_2->fault_inject);

 FUNC_7(&VAR_2->ctrl->subsys->lock);
 FUNC_6(&VAR_2->siblings);
 FUNC_8(&VAR_2->ctrl->subsys->lock);
 FUNC_13();
 FUNC_11(VAR_2);
 FUNC_14(&VAR_2->head->srcu);

 if (VAR_2->disk && VAR_2->disk->flags & VAR_0) {
  FUNC_3(VAR_2->disk);
  FUNC_0(VAR_2->queue);
  if (FUNC_1(VAR_2->disk))
   FUNC_2(VAR_2->disk);
 }

 FUNC_4(&VAR_2->ctrl->namespaces_rwsem);
 FUNC_5(&VAR_2->list);
 FUNC_16(&VAR_2->ctrl->namespaces_rwsem);

 FUNC_10(VAR_2);
 FUNC_12(VAR_2);
}
