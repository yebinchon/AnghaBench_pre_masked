
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int dummy; } ;
struct bcm63xx_udc {int lock; int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static int FUNC_3(struct bcm63xx_udc *VAR_0,
 struct usb_ctrlrequest *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->lock);
 VAR_2 = VAR_0->driver->setup(&VAR_0->gadget, VAR_1);
 FUNC_0(&VAR_0->lock);
 return VAR_2;
}
