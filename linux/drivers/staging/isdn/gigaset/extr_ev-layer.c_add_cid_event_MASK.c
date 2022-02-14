
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_t {int type; int cid; int parameter; int * at_state; int * arg; void* ptr; } ;
struct cardstate {unsigned int ev_tail; unsigned int ev_head; int ev_lock; struct event_t* events; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct cardstate *VAR_2, int VAR_3, int VAR_4,
     void *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 unsigned VAR_8, VAR_9;
 struct event_t *VAR_10;

 FUNC_1(VAR_0, "queueing event %d for cid %d", VAR_4, VAR_3);

 FUNC_3(&VAR_2->ev_lock, VAR_7);

 VAR_9 = VAR_2->ev_tail;
 VAR_8 = (VAR_9 + 1) % VAR_1;
 if (FUNC_5(VAR_8 == VAR_2->ev_head)) {
  FUNC_0(VAR_2->dev, "event queue full\n");
  FUNC_2(VAR_5);
 } else {
  VAR_10 = VAR_2->events + VAR_9;
  VAR_10->type = VAR_4;
  VAR_10->cid = VAR_3;
  VAR_10->ptr = VAR_5;
  VAR_10->arg = ((void*)0);
  VAR_10->parameter = VAR_6;
  VAR_10->at_state = ((void*)0);
  VAR_2->ev_tail = VAR_8;
 }

 FUNC_4(&VAR_2->ev_lock, VAR_7);
}
