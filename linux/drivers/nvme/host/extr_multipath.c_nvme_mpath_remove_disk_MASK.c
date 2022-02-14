
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ns_head {TYPE_1__* disk; int requeue_work; } ;
struct TYPE_3__ {int flags; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct nvme_ns_head *VAR_1)
{
 if (!VAR_1->disk)
  return;
 if (VAR_1->disk->flags & VAR_0)
  FUNC_2(VAR_1->disk);
 FUNC_1(VAR_1->disk->queue);

 FUNC_4(&VAR_1->requeue_work);
 FUNC_3(&VAR_1->requeue_work);
 FUNC_0(VAR_1->disk->queue);
 FUNC_5(VAR_1->disk);
}
