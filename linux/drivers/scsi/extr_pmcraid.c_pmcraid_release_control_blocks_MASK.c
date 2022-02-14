
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {int * control_pool; TYPE_1__** cmd_list; } ;
struct TYPE_2__ {scalar_t__ ioa_cb_bus_addr; int * ioa_cb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 struct pmcraid_instance *VAR_0,
 int VAR_1
)
{
 int VAR_2;

 if (VAR_0->control_pool == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_1(VAR_0->control_pool,
         VAR_0->cmd_list[VAR_2]->ioa_cb,
         VAR_0->cmd_list[VAR_2]->ioa_cb_bus_addr);
  VAR_0->cmd_list[VAR_2]->ioa_cb = ((void*)0);
  VAR_0->cmd_list[VAR_2]->ioa_cb_bus_addr = 0;
 }
 FUNC_0(VAR_0->control_pool);
 VAR_0->control_pool = ((void*)0);
}
