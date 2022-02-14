
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_t {int type; int cid; int parameter; void* arg; void* ptr; struct at_state_t* at_state; } ;
struct cardstate {unsigned int ev_tail; unsigned int ev_head; int ev_lock; struct event_t* events; int dev; } ;
struct at_state_t {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

struct event_t *FUNC_5(struct cardstate *VAR_2,
      struct at_state_t *VAR_3, int VAR_4,
      void *VAR_5, int VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 unsigned VAR_9, VAR_10;
 struct event_t *VAR_11 = ((void*)0);

 FUNC_1(VAR_0, "queueing event %d", VAR_4);

 FUNC_2(&VAR_2->ev_lock, VAR_8);

 VAR_10 = VAR_2->ev_tail;
 VAR_9 = (VAR_10 + 1) % VAR_1;
 if (FUNC_4(VAR_9 == VAR_2->ev_head))
  FUNC_0(VAR_2->dev, "event queue full\n");
 else {
  VAR_11 = VAR_2->events + VAR_10;
  VAR_11->type = VAR_4;
  VAR_11->at_state = VAR_3;
  VAR_11->cid = -1;
  VAR_11->ptr = VAR_5;
  VAR_11->arg = VAR_7;
  VAR_11->parameter = VAR_6;
  VAR_2->ev_tail = VAR_9;
 }

 FUNC_3(&VAR_2->ev_lock, VAR_8);

 return VAR_11;
}
