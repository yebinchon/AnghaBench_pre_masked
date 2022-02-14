
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_fc_queue {int qnum; int cmnd_capsule_len; int dev; int csn; struct nvme_fc_ctrl* ctrl; } ;
struct TYPE_2__ {int ioccsz; } ;
struct nvme_fc_ctrl {TYPE_1__ ctrl; int dev; struct nvme_fc_queue* queues; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nvme_fc_queue*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_ctrl *VAR_0, int VAR_1)
{
 struct nvme_fc_queue *VAR_2;

 VAR_2 = &VAR_0->queues[VAR_1];
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->ctrl = VAR_0;
 VAR_2->qnum = VAR_1;
 FUNC_0(&VAR_2->csn, 0);
 VAR_2->dev = VAR_0->dev;

 if (VAR_1 > 0)
  VAR_2->cmnd_capsule_len = VAR_0->ctrl.ioccsz * 16;
 else
  VAR_2->cmnd_capsule_len = sizeof(struct nvme_command);
}
