
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {scalar_t__* host_toggle_bit; scalar_t__* hrrq_start_bus_addr; int ** hrrq_start; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct pmcraid_instance *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(&VAR_2->pdev->dev,
        VAR_0 * VAR_1,
        VAR_2->hrrq_start[VAR_4],
        VAR_2->hrrq_start_bus_addr[VAR_4]);


  VAR_2->hrrq_start[VAR_4] = ((void*)0);
  VAR_2->hrrq_start_bus_addr[VAR_4] = 0;
  VAR_2->host_toggle_bit[VAR_4] = 0;
 }
}
