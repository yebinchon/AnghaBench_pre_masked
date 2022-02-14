
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct max3421_hcd {int urb_done; int lock; struct urb* curr_urb; } ;


 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_4 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static int
FUNC_5(struct usb_hcd *VAR_0)
{
 struct max3421_hcd *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;
 struct urb *VAR_3;
 int VAR_4;

 VAR_4 = VAR_1->urb_done;
 VAR_1->urb_done = 0;
 if (VAR_4 > 0)
  VAR_4 = 0;
 VAR_3 = VAR_1->curr_urb;
 if (VAR_3) {
  VAR_1->curr_urb = ((void*)0);
  FUNC_1(&VAR_1->lock, VAR_2);
  FUNC_4(VAR_0, VAR_3);
  FUNC_2(&VAR_1->lock, VAR_2);


  FUNC_3(VAR_0, VAR_3, VAR_4);
 }
 return 1;
}
