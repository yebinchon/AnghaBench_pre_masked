
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cqe; int * cmd; } ;
struct nvme_loop_iod {int work; int * queue; int cqe; TYPE_1__ req; int cmd; } ;
struct nvme_loop_ctrl {int * queues; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct nvme_loop_ctrl *VAR_1,
  struct nvme_loop_iod *VAR_2, unsigned int VAR_3)
{
 VAR_2->req.cmd = &VAR_2->cmd;
 VAR_2->req.cqe = &VAR_2->cqe;
 VAR_2->queue = &VAR_1->queues[VAR_3];
 FUNC_0(&VAR_2->work, VAR_0);
 return 0;
}
