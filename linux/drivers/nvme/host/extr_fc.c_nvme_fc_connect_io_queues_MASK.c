
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int queue_count; } ;
struct nvme_fc_ctrl {TYPE_2__* queues; TYPE_1__ ctrl; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_fc_ctrl*,TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct nvme_fc_ctrl *VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 1; VAR_3 < VAR_1->ctrl.queue_count; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, &VAR_1->queues[VAR_3], VAR_2,
     (VAR_2 / 5));
  if (VAR_4)
   break;
  VAR_4 = FUNC_1(&VAR_1->ctrl, VAR_3, 0);
  if (VAR_4)
   break;

  FUNC_2(VAR_0, &VAR_1->queues[VAR_3].flags);
 }

 return VAR_4;
}
