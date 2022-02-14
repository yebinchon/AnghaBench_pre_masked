
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_t {int * ptr; } ;
struct cardstate {unsigned int ev_head; unsigned int ev_tail; scalar_t__ cur_at_seq; int dev; int ev_lock; struct event_t* events; int commands_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (struct cardstate*,struct event_t*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct cardstate *VAR_2)
{
 struct event_t *VAR_3;
 unsigned VAR_4, VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 unsigned long VAR_9;

 FUNC_4(&VAR_2->ev_lock, VAR_9);
 VAR_4 = VAR_2->ev_head;

 for (VAR_6 = 0; VAR_6 < 2 * VAR_0; ++VAR_6) {
  VAR_5 = VAR_2->ev_tail;
  if (VAR_5 == VAR_4) {
   if (!VAR_7 && !VAR_2->commands_pending)
    break;
   VAR_7 = 0;
   FUNC_5(&VAR_2->ev_lock, VAR_9);
   FUNC_2(VAR_2);
   FUNC_4(&VAR_2->ev_lock, VAR_9);
   VAR_5 = VAR_2->ev_tail;
   if (VAR_5 == VAR_4) {
    if (!VAR_2->commands_pending)
     break;
    continue;
   }
  }

  VAR_3 = VAR_2->events + VAR_4;
  VAR_8 = VAR_2->cur_at_seq != VAR_1;
  FUNC_5(&VAR_2->ev_lock, VAR_9);
  FUNC_3(VAR_2, VAR_3);
  FUNC_4(&VAR_2->ev_lock, VAR_9);
  FUNC_1(VAR_3->ptr);
  VAR_3->ptr = ((void*)0);
  if (VAR_8 && VAR_2->cur_at_seq == VAR_1)
   VAR_7 = 1;

  VAR_4 = (VAR_4 + 1) % VAR_0;
  VAR_2->ev_head = VAR_4;
 }

 FUNC_5(&VAR_2->ev_lock, VAR_9);

 if (VAR_6 == 2 * VAR_0) {
  FUNC_0(VAR_2->dev,
   "infinite loop in process_events; aborting.\n");
 }
}
