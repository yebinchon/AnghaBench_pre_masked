
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct task_struct {TYPE_1__ cg_list; } ;
struct css_task_iter {int flags; TYPE_1__* task_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct css_task_iter *VAR_2,
          struct task_struct *VAR_3)
{
 FUNC_0(&VAR_1);

 if (VAR_2->task_pos == &VAR_3->cg_list) {
  VAR_2->task_pos = VAR_2->task_pos->next;
  VAR_2->flags |= VAR_0;
 }
}
