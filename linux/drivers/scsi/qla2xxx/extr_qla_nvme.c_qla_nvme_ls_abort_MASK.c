
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmefc_ls_req {struct nvme_private* private; } ;
struct nvme_private {int abort_work; int cmd_lock; TYPE_1__* sp; } ;
struct nvme_fc_remote_port {int dummy; } ;
struct nvme_fc_local_port {int dummy; } ;
struct TYPE_2__ {int cmd_kref; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct nvme_fc_local_port *VAR_1,
    struct nvme_fc_remote_port *VAR_2, struct nvmefc_ls_req *VAR_3)
{
 struct nvme_private *VAR_4 = VAR_3->private;
 unsigned long VAR_5;

 FUNC_3(&VAR_4->cmd_lock, VAR_5);
 if (!VAR_4->sp) {
  FUNC_4(&VAR_4->cmd_lock, VAR_5);
  return;
 }

 if (!FUNC_1(&VAR_4->sp->cmd_kref)) {
  FUNC_4(&VAR_4->cmd_lock, VAR_5);
  return;
 }
 FUNC_4(&VAR_4->cmd_lock, VAR_5);

 FUNC_0(&VAR_4->abort_work, VAR_0);
 FUNC_2(&VAR_4->abort_work);
}
