
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct megasas_instance {int max_fw_cmds; int mfi_pool_lock; int internal_reset_pending_q; TYPE_1__* pdev; struct megasas_cmd** cmd_list; } ;
struct megasas_cmd {int sync_cmd; int list; int scmd; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,struct megasas_cmd*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct megasas_instance *VAR_0)
{
 struct megasas_cmd *VAR_1;
 int VAR_2;
 u16 VAR_3 = VAR_0->max_fw_cmds;
 u32 VAR_4;
 unsigned long VAR_5;

 VAR_4 = 0;
 FUNC_4(&VAR_0->mfi_pool_lock, VAR_5);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_1 = VAR_0->cmd_list[VAR_2];
  if (VAR_1->sync_cmd == 1 || VAR_1->scmd) {
   FUNC_0(&VAR_0->pdev->dev, "moving cmd[%d]:%p:%d:%p"
     "on the defer queue as internal\n",
    VAR_4, VAR_1, VAR_1->sync_cmd, VAR_1->scmd);

   if (!FUNC_3(&VAR_1->list)) {
    FUNC_0(&VAR_0->pdev->dev, "ERROR while"
     " moving this cmd:%p, %d %p, it was"
     "discovered on some list?\n",
     VAR_1, VAR_1->sync_cmd, VAR_1->scmd);

    FUNC_2(&VAR_1->list);
   }
   VAR_4++;
   FUNC_1(&VAR_1->list,
    &VAR_0->internal_reset_pending_q);
  }
 }
 FUNC_5(&VAR_0->mfi_pool_lock, VAR_5);
}
