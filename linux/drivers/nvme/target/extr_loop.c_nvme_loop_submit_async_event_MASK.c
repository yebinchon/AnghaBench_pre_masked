
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvme_loop_queue {int nvme_sq; int nvme_cq; } ;
struct TYPE_4__ {int flags; int command_id; int opcode; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct nvme_loop_iod {int work; int req; TYPE_3__ cmd; } ;
struct TYPE_5__ {int device; } ;
struct nvme_loop_ctrl {TYPE_2__ ctrl; struct nvme_loop_iod async_event_iod; struct nvme_loop_queue* queues; } ;
struct nvme_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 struct nvme_loop_ctrl* FUNC_4 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_5(struct nvme_ctrl *VAR_4)
{
 struct nvme_loop_ctrl *VAR_5 = FUNC_4(VAR_4);
 struct nvme_loop_queue *VAR_6 = &VAR_5->queues[0];
 struct nvme_loop_iod *VAR_7 = &VAR_5->async_event_iod;

 FUNC_1(&VAR_7->cmd, 0, sizeof(VAR_7->cmd));
 VAR_7->cmd.common.opcode = VAR_2;
 VAR_7->cmd.common.command_id = VAR_0;
 VAR_7->cmd.common.flags |= VAR_1;

 if (!FUNC_2(&VAR_7->req, &VAR_6->nvme_cq, &VAR_6->nvme_sq,
   &VAR_3)) {
  FUNC_0(VAR_5->ctrl.device, "failed async event work\n");
  return;
 }

 FUNC_3(&VAR_7->work);
}
