
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmcraid_instance {scalar_t__ cfg_table_bus_addr; TYPE_2__* res_entries; int * cfg_table; TYPE_1__* pdev; } ;
struct pmcraid_config_table {int dummy; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pmcraid_instance*) ;

__attribute__((used)) static void FUNC_4(struct pmcraid_instance *VAR_1)
{
 if (VAR_1->cfg_table != ((void*)0) &&
     VAR_1->cfg_table_bus_addr != 0) {
  FUNC_0(&VAR_1->pdev->dev,
        sizeof(struct pmcraid_config_table),
        VAR_1->cfg_table,
        VAR_1->cfg_table_bus_addr);
  VAR_1->cfg_table = ((void*)0);
  VAR_1->cfg_table_bus_addr = 0;
 }

 if (VAR_1->res_entries != ((void*)0)) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   FUNC_2(&VAR_1->res_entries[VAR_2].queue);
  FUNC_1(VAR_1->res_entries);
  VAR_1->res_entries = ((void*)0);
 }

 FUNC_3(VAR_1);
}
