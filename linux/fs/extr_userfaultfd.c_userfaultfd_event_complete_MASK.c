
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event; } ;
struct userfaultfd_wait_queue {int wq; TYPE_1__ msg; } ;
struct userfaultfd_ctx {int event_wqh; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct userfaultfd_ctx *VAR_0,
           struct userfaultfd_wait_queue *VAR_1)
{
 VAR_1->msg.event = 0;
 FUNC_1(&VAR_0->event_wqh);
 FUNC_0(&VAR_0->event_wqh, &VAR_1->wq);
}
