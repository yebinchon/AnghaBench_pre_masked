
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue_count; } ;
struct nvme_loop_ctrl {TYPE_1__* queues; TYPE_2__ ctrl; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nvme_loop_ctrl *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 1; VAR_2 < VAR_1->ctrl.queue_count; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_1->ctrl, VAR_2, 0);
  if (VAR_3)
   return VAR_3;
  FUNC_1(VAR_0, &VAR_1->queues[VAR_2].flags);
 }

 return 0;
}
