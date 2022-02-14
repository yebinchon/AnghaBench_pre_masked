
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcraid_resource_entry {int dummy; } ;
struct pmcraid_instance {int * cfg_table; int cfg_table_bus_addr; TYPE_1__* pdev; int free_res_q; TYPE_2__* res_entries; } ;
struct pmcraid_config_table {int dummy; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int,int *,int ) ;
 TYPE_2__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct pmcraid_instance*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pmcraid_instance*) ;

__attribute__((used)) static int FUNC_6(struct pmcraid_instance *VAR_3)
{
 int VAR_4;

 VAR_3->res_entries =
   FUNC_1(VAR_2,
    sizeof(struct pmcraid_resource_entry),
    VAR_1);

 if (((void*)0) == VAR_3->res_entries) {
  FUNC_4("failed to allocate memory for resource table\n");
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_2(&VAR_3->res_entries[VAR_4].queue,
         &VAR_3->free_res_q);

 VAR_3->cfg_table = FUNC_0(&VAR_3->pdev->dev,
         sizeof(struct pmcraid_config_table),
         &VAR_3->cfg_table_bus_addr,
         VAR_1);

 if (((void*)0) == VAR_3->cfg_table) {
  FUNC_4("couldn't alloc DMA memory for config table\n");
  FUNC_5(VAR_3);
  return -VAR_0;
 }

 if (FUNC_3(VAR_3)) {
  FUNC_4("could not alloc DMA memory for HCAMS\n");
  FUNC_5(VAR_3);
  return -VAR_0;
 }

 return 0;
}
