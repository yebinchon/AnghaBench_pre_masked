
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int num_hrrq; int * hrrq_vector; int * isr_tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct pmcraid_instance *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_hrrq; VAR_2++)
  FUNC_0(&VAR_1->isr_tasklet[VAR_2],
        VAR_0,
        (unsigned long)&VAR_1->hrrq_vector[VAR_2]);
}
