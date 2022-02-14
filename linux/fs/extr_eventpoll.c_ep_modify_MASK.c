
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eventpoll {int poll_wait; int lock; int wq; int rdllist; } ;
struct epoll_event {int events; int data; } ;
struct TYPE_2__ {int events; int data; } ;
struct epitem {int rdllink; TYPE_1__ event; } ;
typedef int poll_table ;


 int VAR_0 ;
 int FUNC_0 (struct epitem*) ;
 int FUNC_1 (struct epitem*) ;
 scalar_t__ FUNC_2 (struct epitem*) ;
 int FUNC_3 (struct epitem*) ;
 scalar_t__ FUNC_4 (struct epitem*,int *,int) ;
 int FUNC_5 (struct epitem*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct eventpoll *VAR_1, struct epitem *VAR_2,
       const struct epoll_event *VAR_3)
{
 int VAR_4 = 0;
 poll_table VAR_5;

 FUNC_9();

 FUNC_7(&VAR_5, ((void*)0));






 VAR_2->event.events = VAR_3->events;
 VAR_2->event.data = VAR_3->data;
 if (VAR_2->event.events & VAR_0) {
  if (!FUNC_2(VAR_2))
   FUNC_0(VAR_2);
 } else if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
 }
 FUNC_10();







 if (FUNC_4(VAR_2, &VAR_5, 1)) {
  FUNC_13(&VAR_1->lock);
  if (!FUNC_3(VAR_2)) {
   FUNC_8(&VAR_2->rdllink, &VAR_1->rdllist);
   FUNC_5(VAR_2);


   if (FUNC_11(&VAR_1->wq))
    FUNC_12(&VAR_1->wq);
   if (FUNC_11(&VAR_1->poll_wait))
    VAR_4++;
  }
  FUNC_14(&VAR_1->lock);
 }


 if (VAR_4)
  FUNC_6(&VAR_1->poll_wait);

 return 0;
}
