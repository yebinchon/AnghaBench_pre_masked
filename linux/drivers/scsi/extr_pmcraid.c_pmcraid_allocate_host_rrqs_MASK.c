
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {int num_hrrq; int* host_toggle_bit; int * hrrq_lock; scalar_t__* hrrq_start; scalar_t__* hrrq_end; scalar_t__* hrrq_curr; int * hrrq_start_bus_addr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct pmcraid_instance*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pmcraid_instance *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_2 * VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_hrrq; VAR_5++) {
  VAR_4->hrrq_start[VAR_5] =
   FUNC_0(&VAR_4->pdev->dev, VAR_6,
        &VAR_4->hrrq_start_bus_addr[VAR_5],
        VAR_1);
  if (!VAR_4->hrrq_start[VAR_5]) {
   FUNC_2("pci_alloc failed for hrrq vector : %d\n",
        VAR_5);
   FUNC_3(VAR_4, VAR_5);
   return -VAR_0;
  }

  FUNC_1(VAR_4->hrrq_start[VAR_5], 0, VAR_6);
  VAR_4->hrrq_curr[VAR_5] = VAR_4->hrrq_start[VAR_5];
  VAR_4->hrrq_end[VAR_5] =
   VAR_4->hrrq_start[VAR_5] + VAR_3 - 1;
  VAR_4->host_toggle_bit[VAR_5] = 1;
  FUNC_4(&VAR_4->hrrq_lock[VAR_5]);
 }
 return 0;
}
