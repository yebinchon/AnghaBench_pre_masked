
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_t {int ptr; } ;
struct cardstate {unsigned int ev_head; unsigned int ev_tail; int ev_lock; struct event_t* events; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct cardstate *VAR_1)
{
 struct event_t *VAR_2;
 unsigned VAR_3, VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_1->ev_lock, VAR_5);

 VAR_3 = VAR_1->ev_head;
 VAR_4 = VAR_1->ev_tail;

 while (VAR_4 != VAR_3) {
  VAR_2 = VAR_1->events + VAR_3;
  FUNC_0(VAR_2->ptr);
  VAR_3 = (VAR_3 + 1) % VAR_0;
 }

 VAR_1->ev_head = VAR_4;

 FUNC_2(&VAR_1->ev_lock, VAR_5);
}
