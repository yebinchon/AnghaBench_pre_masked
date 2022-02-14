
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {scalar_t__ deactivations; int lock; int gadget; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct usb_function *VAR_1)
{
 struct usb_composite_dev *VAR_2 = VAR_1->config->cdev;
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (FUNC_0(VAR_2->deactivations == 0))
  VAR_4 = -VAR_0;
 else {
  VAR_2->deactivations--;
  if (VAR_2->deactivations == 0)
   VAR_4 = FUNC_3(VAR_2->gadget);
 }

 FUNC_2(&VAR_2->lock, VAR_3);
 return VAR_4;
}
