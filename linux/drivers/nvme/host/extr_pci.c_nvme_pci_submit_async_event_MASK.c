
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {int dummy; } ;
struct nvme_dev {struct nvme_queue* queues; } ;
struct nvme_ctrl {int dummy; } ;
struct TYPE_2__ {int command_id; int opcode; } ;
struct nvme_command {TYPE_1__ common; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_command*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct nvme_queue*,struct nvme_command*,int) ;
 struct nvme_dev* FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_2)
{
 struct nvme_dev *VAR_3 = FUNC_2(VAR_2);
 struct nvme_queue *VAR_4 = &VAR_3->queues[0];
 struct nvme_command VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.common.opcode = VAR_1;
 VAR_5.common.command_id = VAR_0;
 FUNC_1(VAR_4, &VAR_5, 1);
}
