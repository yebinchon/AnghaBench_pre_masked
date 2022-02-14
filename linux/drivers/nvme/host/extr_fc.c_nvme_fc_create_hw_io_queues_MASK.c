
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvme_fc_queue {int dummy; } ;
struct TYPE_2__ {int queue_count; } ;
struct nvme_fc_ctrl {struct nvme_fc_queue* queues; TYPE_1__ ctrl; } ;


 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_queue*,int,int ) ;
 int FUNC_1 (struct nvme_fc_ctrl*,struct nvme_fc_queue*,int) ;

__attribute__((used)) static int
FUNC_2(struct nvme_fc_ctrl *VAR_0, u16 VAR_1)
{
 struct nvme_fc_queue *VAR_2 = &VAR_0->queues[1];
 int VAR_3, VAR_4;

 for (VAR_3 = 1; VAR_3 < VAR_0->ctrl.queue_count; VAR_3++, VAR_2++) {
  VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_1);
  if (VAR_4)
   goto delete_queues;
 }

 return 0;

delete_queues:
 for (; VAR_3 >= 0; VAR_3--)
  FUNC_1(VAR_0, &VAR_0->queues[VAR_3], VAR_3);
 return VAR_4;
}
