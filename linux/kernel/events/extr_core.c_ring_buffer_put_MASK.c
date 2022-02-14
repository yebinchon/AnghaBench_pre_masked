
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int rcu_head; int event_list; int refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ring_buffer *VAR_1)
{
 if (!FUNC_3(&VAR_1->refcount))
  return;

 FUNC_0(!FUNC_2(&VAR_1->event_list));

 FUNC_1(&VAR_1->rcu_head, VAR_0);
}
