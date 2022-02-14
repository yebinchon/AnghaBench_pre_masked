
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int num_hrrq; int* host_toggle_bit; scalar_t__* hrrq_start; scalar_t__* hrrq_end; scalar_t__* hrrq_curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pmcraid_instance *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_0 * VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_hrrq; VAR_3++) {
  FUNC_0(VAR_2->hrrq_start[VAR_3], 0, VAR_4);
  VAR_2->hrrq_curr[VAR_3] = VAR_2->hrrq_start[VAR_3];
  VAR_2->hrrq_end[VAR_3] =
   VAR_2->hrrq_start[VAR_3] + VAR_1 - 1;
  VAR_2->host_toggle_bit[VAR_3] = 1;
 }
}
