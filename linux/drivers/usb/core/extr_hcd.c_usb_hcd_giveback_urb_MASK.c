
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct giveback_urb_bh {int running; int bh; int lock; int head; } ;
struct usb_hcd {struct giveback_urb_bh low_prio_bh; struct giveback_urb_bh high_prio_bh; } ;
struct urb {int unlinked; int urb_list; int pipe; int dev; } ;


 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct giveback_urb_bh *VAR_3;
 bool VAR_4, VAR_5;


 if (FUNC_3(!VAR_1->unlinked))
  VAR_1->unlinked = VAR_2;

 if (!FUNC_1(VAR_0) && !FUNC_2(VAR_1->dev)) {
  FUNC_0(VAR_1);
  return;
 }

 if (FUNC_10(VAR_1->pipe) || FUNC_9(VAR_1->pipe)) {
  VAR_3 = &VAR_0->high_prio_bh;
  VAR_5 = 1;
 } else {
  VAR_3 = &VAR_0->low_prio_bh;
  VAR_5 = 0;
 }

 FUNC_5(&VAR_3->lock);
 FUNC_4(&VAR_1->urb_list, &VAR_3->head);
 VAR_4 = VAR_3->running;
 FUNC_6(&VAR_3->lock);

 if (VAR_4)
  ;
 else if (VAR_5)
  FUNC_7(&VAR_3->bh);
 else
  FUNC_8(&VAR_3->bh);
}
