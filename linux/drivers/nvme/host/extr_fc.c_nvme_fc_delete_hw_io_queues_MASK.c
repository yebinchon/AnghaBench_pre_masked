
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_queue {int dummy; } ;
struct TYPE_2__ {int queue_count; } ;
struct nvme_fc_ctrl {TYPE_1__ ctrl; struct nvme_fc_queue* queues; } ;


 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_queue*,int) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_ctrl *VAR_0)
{
 struct nvme_fc_queue *VAR_1 = &VAR_0->queues[VAR_0->ctrl.queue_count - 1];
 int VAR_2;

 for (VAR_2 = VAR_0->ctrl.queue_count - 1; VAR_2 >= 1; VAR_2--, VAR_1--)
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
