
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_udc {TYPE_2__* gadget; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_4__ {TYPE_1__* ops; int max_speed; } ;
struct TYPE_3__ {int (* udc_set_speed ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static inline void FUNC_2(struct usb_udc *VAR_0,
         enum usb_device_speed VAR_1)
{
 if (VAR_0->gadget->ops->udc_set_speed) {
  enum usb_device_speed VAR_2;

  VAR_2 = FUNC_0(VAR_1, VAR_0->gadget->max_speed);
  VAR_0->gadget->ops->udc_set_speed(VAR_0->gadget, VAR_2);
 }
}
