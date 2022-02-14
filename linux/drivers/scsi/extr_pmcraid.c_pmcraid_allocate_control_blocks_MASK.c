
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmcraid_instance {TYPE_3__** cmd_list; int control_pool; TYPE_2__* pdev; int ctl_pool_name; TYPE_1__* host; } ;
struct pmcraid_control_block {int dummy; } ;
struct TYPE_6__ {int ioa_cb; int ioa_cb_bus_addr; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *,int,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct pmcraid_instance*,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct pmcraid_instance *VAR_4)
{
 int VAR_5;

 FUNC_4(VAR_4->ctl_pool_name, "pmcraid_control_pool_%d",
  VAR_4->host->unique_id);

 VAR_4->control_pool =
  FUNC_1(VAR_4->ctl_pool_name,
    &VAR_4->pdev->dev,
    sizeof(struct pmcraid_control_block),
    VAR_2, 0);

 if (!VAR_4->control_pool)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->cmd_list[VAR_5]->ioa_cb =
   FUNC_0(
    VAR_4->control_pool,
    VAR_1,
    &(VAR_4->cmd_list[VAR_5]->ioa_cb_bus_addr));

  if (!VAR_4->cmd_list[VAR_5]->ioa_cb) {
   FUNC_3(VAR_4, VAR_5);
   return -VAR_0;
  }
  FUNC_2(VAR_4->cmd_list[VAR_5]->ioa_cb, 0,
   sizeof(struct pmcraid_control_block));
 }
 return 0;
}
