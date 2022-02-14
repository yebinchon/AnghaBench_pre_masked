
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* wakeup ) (struct usb_gadget*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*,int) ;

int FUNC_2(struct usb_gadget *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->ops->wakeup) {
  VAR_2 = -VAR_0;
  goto out;
 }

 VAR_2 = VAR_1->ops->wakeup(VAR_1);

out:
 FUNC_1(VAR_1, VAR_2);

 return VAR_2;
}
