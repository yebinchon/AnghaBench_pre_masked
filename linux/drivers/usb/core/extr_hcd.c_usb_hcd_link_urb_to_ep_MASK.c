
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {TYPE_2__* ep; int urb_list; scalar_t__ unlinked; TYPE_1__* dev; int reject; } ;
struct TYPE_4__ {int urb_list; int enabled; } ;
struct TYPE_3__ {int can_submit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct usb_hcd *VAR_5, struct urb *VAR_6)
{
 int VAR_7 = 0;

 FUNC_3(&VAR_4);


 if (FUNC_5(FUNC_1(&VAR_6->reject))) {
  VAR_7 = -VAR_2;
  goto done;
 }

 if (FUNC_5(!VAR_6->ep->enabled)) {
  VAR_7 = -VAR_1;
  goto done;
 }

 if (FUNC_5(!VAR_6->dev->can_submit)) {
  VAR_7 = -VAR_0;
  goto done;
 }





 if (FUNC_0(VAR_5)) {
  VAR_6->unlinked = 0;
  FUNC_2(&VAR_6->urb_list, &VAR_6->ep->urb_list);
 } else {
  VAR_7 = -VAR_3;
  goto done;
 }
 done:
 FUNC_4(&VAR_4);
 return VAR_7;
}
