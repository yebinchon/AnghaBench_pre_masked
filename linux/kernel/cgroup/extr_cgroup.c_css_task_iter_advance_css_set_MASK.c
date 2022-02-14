
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct css_task_iter {int iters_node; struct css_set* cur_cset; TYPE_1__* dying_tasks_head; TYPE_1__* mg_tasks_head; TYPE_1__* tasks_head; int * task_pos; } ;
struct TYPE_2__ {int * next; } ;
struct css_set {int task_iters; TYPE_1__ dying_tasks; TYPE_1__ mg_tasks; TYPE_1__ tasks; } ;


 int VAR_0 ;
 int FUNC_0 (struct css_set*) ;
 struct css_set* FUNC_1 (struct css_task_iter*) ;
 int FUNC_2 (struct css_set*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct css_set*) ;

__attribute__((used)) static void FUNC_8(struct css_task_iter *VAR_1)
{
 struct css_set *VAR_2;

 FUNC_6(&VAR_0);


 do {
  VAR_2 = FUNC_1(VAR_1);
  if (!VAR_2) {
   VAR_1->task_pos = ((void*)0);
   return;
  }
 } while (!FUNC_0(VAR_2) && FUNC_5(&VAR_2->dying_tasks));

 if (!FUNC_5(&VAR_2->tasks))
  VAR_1->task_pos = VAR_2->tasks.next;
 else if (!FUNC_5(&VAR_2->mg_tasks))
  VAR_1->task_pos = VAR_2->mg_tasks.next;
 else
  VAR_1->task_pos = VAR_2->dying_tasks.next;

 VAR_1->tasks_head = &VAR_2->tasks;
 VAR_1->mg_tasks_head = &VAR_2->mg_tasks;
 VAR_1->dying_tasks_head = &VAR_2->dying_tasks;
 if (VAR_1->cur_cset) {
  FUNC_4(&VAR_1->iters_node);
  FUNC_7(VAR_1->cur_cset);
 }
 FUNC_2(VAR_2);
 VAR_1->cur_cset = VAR_2;
 FUNC_3(&VAR_1->iters_node, &VAR_2->task_iters);
}
