
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_ctrl {TYPE_2__* ops; int reset_work; TYPE_1__* opts; int device; } ;
struct TYPE_4__ {int (* delete_ctrl ) (struct nvme_ctrl*) ;} ;
struct TYPE_3__ {int subsysnqn; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (struct nvme_ctrl*) ;
 int FUNC_5 (struct nvme_ctrl*) ;
 int FUNC_6 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_7(struct nvme_ctrl *VAR_0)
{
 FUNC_0(VAR_0->device,
   "Removing ctrl: NQN \"%s\"\n", VAR_0->opts->subsysnqn);

 FUNC_1(&VAR_0->reset_work);
 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 VAR_0->ops->delete_ctrl(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
}
