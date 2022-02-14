
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {scalar_t__ deactivations; int lock; int gadget; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct usb_function *VAR_0)
{
 struct usb_composite_dev *VAR_1 = VAR_0->config->cdev;
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_1->lock, VAR_2);

 if (VAR_1->deactivations == 0)
  VAR_3 = FUNC_2(VAR_1->gadget);
 if (VAR_3 == 0)
  VAR_1->deactivations++;

 FUNC_1(&VAR_1->lock, VAR_2);
 return VAR_3;
}
