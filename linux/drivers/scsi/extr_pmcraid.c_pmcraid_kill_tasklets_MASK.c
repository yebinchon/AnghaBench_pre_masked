
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int num_hrrq; int * isr_tasklet; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pmcraid_instance *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_hrrq; VAR_1++)
  FUNC_0(&VAR_0->isr_tasklet[VAR_1]);
}
