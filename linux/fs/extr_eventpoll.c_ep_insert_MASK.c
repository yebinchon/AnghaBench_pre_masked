
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_lock; int f_ep_links; } ;
struct eventpoll {int lock; int rbr; int poll_wait; TYPE_1__* user; int wq; int rdllist; } ;
struct epoll_event {int events; } ;
struct epitem {scalar_t__ nwait; int rdllink; int rbn; int fllink; int ws; struct epoll_event event; int next; int ffd; struct eventpoll* ep; int pwqlist; } ;
struct ep_pqueue {int pt; struct epitem* epi; } ;
typedef scalar_t__ __poll_t ;
struct TYPE_2__ {int epoll_watches; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (struct epitem*) ;
 scalar_t__ FUNC_5 (struct epitem*) ;
 scalar_t__ FUNC_6 (struct epitem*,int *,int) ;
 int FUNC_7 (struct epitem*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (struct eventpoll*,struct epitem*) ;
 int FUNC_10 (struct epitem*) ;
 int FUNC_11 (int *,struct file*,int) ;
 int FUNC_12 (struct eventpoll*,struct epitem*) ;
 int FUNC_13 (struct epitem*) ;
 int VAR_7 ;
 int FUNC_14 (int *,int ) ;
 struct epitem* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,struct epitem*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 long VAR_8 ;
 int FUNC_22 (int *,int *) ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

__attribute__((used)) static int FUNC_32(struct eventpoll *VAR_9, const struct epoll_event *VAR_10,
       struct file *VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15 = 0;
 __poll_t VAR_16;
 long VAR_17;
 struct epitem *VAR_18;
 struct ep_pqueue VAR_19;

 FUNC_21();

 VAR_17 = FUNC_3(&VAR_9->user->epoll_watches);
 if (FUNC_26(VAR_17 >= VAR_8))
  return -VAR_2;
 if (!(VAR_18 = FUNC_15(VAR_7, VAR_5)))
  return -VAR_1;


 FUNC_0(&VAR_18->rdllink);
 FUNC_0(&VAR_18->fllink);
 FUNC_0(&VAR_18->pwqlist);
 VAR_18->ep = VAR_9;
 FUNC_11(&VAR_18->ffd, VAR_11, VAR_12);
 VAR_18->event = *VAR_10;
 VAR_18->nwait = 0;
 VAR_18->next = VAR_4;
 if (VAR_18->event.events & VAR_3) {
  VAR_14 = FUNC_4(VAR_18);
  if (VAR_14)
   goto error_create_wakeup_source;
 } else {
  FUNC_1(VAR_18->ws, ((void*)0));
 }


 VAR_19.epi = VAR_18;
 FUNC_14(&VAR_19.pt, VAR_6);
 VAR_16 = FUNC_6(VAR_18, &VAR_19.pt, 1);






 VAR_14 = -VAR_1;
 if (VAR_18->nwait < 0)
  goto error_unregister;


 FUNC_24(&VAR_11->f_lock);
 FUNC_18(&VAR_18->fllink, &VAR_11->f_ep_links);
 FUNC_25(&VAR_11->f_lock);





 FUNC_9(VAR_9, VAR_18);


 VAR_14 = -VAR_0;
 if (VAR_13 && FUNC_23())
  goto error_remove_epi;


 FUNC_30(&VAR_9->lock);


 FUNC_10(VAR_18);


 if (VAR_16 && !FUNC_5(VAR_18)) {
  FUNC_17(&VAR_18->rdllink, &VAR_9->rdllist);
  FUNC_7(VAR_18);


  if (FUNC_27(&VAR_9->wq))
   FUNC_28(&VAR_9->wq);
  if (FUNC_27(&VAR_9->poll_wait))
   VAR_15++;
 }

 FUNC_31(&VAR_9->lock);

 FUNC_2(&VAR_9->user->epoll_watches);


 if (VAR_15)
  FUNC_8(&VAR_9->poll_wait);

 return 0;

error_remove_epi:
 FUNC_24(&VAR_11->f_lock);
 FUNC_20(&VAR_18->fllink);
 FUNC_25(&VAR_11->f_lock);

 FUNC_22(&VAR_18->rbn, &VAR_9->rbr);

error_unregister:
 FUNC_12(VAR_9, VAR_18);







 FUNC_30(&VAR_9->lock);
 if (FUNC_5(VAR_18))
  FUNC_19(&VAR_18->rdllink);
 FUNC_31(&VAR_9->lock);

 FUNC_29(FUNC_13(VAR_18));

error_create_wakeup_source:
 FUNC_16(VAR_7, VAR_18);

 return VAR_14;
}
