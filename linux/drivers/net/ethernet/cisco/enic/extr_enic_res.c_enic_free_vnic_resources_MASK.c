
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {unsigned int wq_count; unsigned int rq_count; unsigned int cq_count; unsigned int intr_count; int * intr; int * cq; int * rq; int * wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct enic *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->wq_count; VAR_1++)
  FUNC_3(&VAR_0->wq[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->rq_count; VAR_1++)
  FUNC_2(&VAR_0->rq[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->cq_count; VAR_1++)
  FUNC_0(&VAR_0->cq[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++)
  FUNC_1(&VAR_0->intr[VAR_1]);
}
