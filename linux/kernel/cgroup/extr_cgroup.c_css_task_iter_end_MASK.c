
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct css_task_iter {scalar_t__ cur_task; scalar_t__ cur_dcset; scalar_t__ cur_cset; int iters_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct css_task_iter *VAR_1)
{
 if (VAR_1->cur_cset) {
  FUNC_4(&VAR_0);
  FUNC_0(&VAR_1->iters_node);
  FUNC_2(VAR_1->cur_cset);
  FUNC_5(&VAR_0);
 }

 if (VAR_1->cur_dcset)
  FUNC_1(VAR_1->cur_dcset);

 if (VAR_1->cur_task)
  FUNC_3(VAR_1->cur_task);
}
