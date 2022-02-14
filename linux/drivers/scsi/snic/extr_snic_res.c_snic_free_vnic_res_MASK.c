
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {unsigned int wq_count; unsigned int cq_count; unsigned int intr_count; int * intr; int * cq; int * wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct snic *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_count; VAR_1++)
  FUNC_2(&VAR_0->wq[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->cq_count; VAR_1++)
  FUNC_0(&VAR_0->cq[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++)
  FUNC_1(&VAR_0->intr[VAR_1]);
}
