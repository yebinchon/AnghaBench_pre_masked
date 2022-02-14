
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {unsigned int mA; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* vbus_draw ) (struct usb_gadget*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_gadget*,unsigned int) ;
 int FUNC_1 (struct usb_gadget*,int) ;

int FUNC_2(struct usb_gadget *VAR_1, unsigned VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1->ops->vbus_draw) {
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = VAR_1->ops->vbus_draw(VAR_1, VAR_2);
 if (!VAR_3)
  VAR_1->mA = VAR_2;

out:
 FUNC_1(VAR_1, VAR_3);

 return VAR_3;
}
