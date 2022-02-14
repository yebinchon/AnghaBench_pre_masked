
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct c67x00_hcd {int lock; } ;


 int FUNC_0 (struct c67x00_hcd*,struct urb*) ;
 struct c67x00_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_7 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_8 (struct usb_hcd*,struct urb*) ;

int FUNC_9(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 struct c67x00_hcd *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_6(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  goto done;

 FUNC_0(VAR_3, VAR_1);
 FUNC_8(VAR_0, VAR_1);

 FUNC_4(&VAR_3->lock);
 FUNC_7(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock);

 FUNC_5(&VAR_3->lock, VAR_4);

 return 0;

 done:
 FUNC_5(&VAR_3->lock, VAR_4);
 return VAR_5;
}
