
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_call_waiter {int list_node; int c; } ;
struct optee_call_queue {int mutex; int waiters; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct optee_call_queue *VAR_0,
      struct optee_call_waiter *VAR_1)
{
 FUNC_5(&VAR_1->c);

 FUNC_2(&VAR_0->mutex);


 FUNC_1(&VAR_1->list_node);
 FUNC_4(&VAR_1->c);
 FUNC_0(&VAR_1->list_node, &VAR_0->waiters);

 FUNC_3(&VAR_0->mutex);
}
