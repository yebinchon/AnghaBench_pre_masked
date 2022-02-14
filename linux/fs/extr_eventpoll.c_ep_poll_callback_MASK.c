
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int entry; } ;
typedef TYPE_2__ wait_queue_entry_t ;
struct eventpoll {int poll_wait; int lock; int wq; int rdllist; int ovflist; } ;
struct TYPE_7__ {int events; } ;
struct epitem {scalar_t__ next; TYPE_1__ event; int rdllink; struct eventpoll* ep; } ;
typedef int __poll_t ;
struct TYPE_9__ {int whead; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct epitem*) ;
 int FUNC_2 (struct epitem*) ;
 struct epitem* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct epitem*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct epitem*) ;
 int FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(wait_queue_entry_t *VAR_5, unsigned VAR_6, int VAR_7, void *VAR_8)
{
 int VAR_9 = 0;
 struct epitem *VAR_10 = FUNC_3(VAR_5);
 struct eventpoll *VAR_11 = VAR_10->ep;
 __poll_t VAR_12 = FUNC_8(VAR_8);
 unsigned long VAR_13;
 int VAR_14 = 0;

 FUNC_11(&VAR_11->lock, VAR_13);

 FUNC_7(VAR_10);







 if (!(VAR_10->event.events & ~VAR_2))
  goto out_unlock;







 if (VAR_12 && !(VAR_12 & VAR_10->event.events))
  goto out_unlock;







 if (FUNC_0(VAR_11->ovflist) != VAR_3) {
  if (VAR_10->next == VAR_3 &&
      FUNC_1(VAR_10))
   FUNC_4(VAR_10);
  goto out_unlock;
 }


 if (!FUNC_2(VAR_10) &&
     FUNC_9(&VAR_10->rdllink, &VAR_11->rdllist)) {
  FUNC_4(VAR_10);
 }





 if (FUNC_14(&VAR_11->wq)) {
  if ((VAR_10->event.events & VAR_0) &&
     !(VAR_12 & VAR_4)) {
   switch (VAR_12 & VAR_1) {
   case 129:
    if (VAR_10->event.events & 129)
     VAR_14 = 1;
    break;
   case 128:
    if (VAR_10->event.events & 128)
     VAR_14 = 1;
    break;
   case 0:
    VAR_14 = 1;
    break;
   }
  }
  FUNC_15(&VAR_11->wq);
 }
 if (FUNC_14(&VAR_11->poll_wait))
  VAR_9++;

out_unlock:
 FUNC_12(&VAR_11->lock, VAR_13);


 if (VAR_9)
  FUNC_5(&VAR_11->poll_wait);

 if (!(VAR_10->event.events & VAR_0))
  VAR_14 = 1;

 if (VAR_12 & VAR_4) {





  FUNC_10(&VAR_5->entry);






  FUNC_13(&FUNC_6(VAR_5)->whead, ((void*)0));
 }

 return VAR_14;
}
