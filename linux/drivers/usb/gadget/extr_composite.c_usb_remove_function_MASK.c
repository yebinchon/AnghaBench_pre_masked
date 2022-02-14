
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {scalar_t__ bind_deactivated; int (* unbind ) (struct usb_configuration*,struct usb_function*) ;int list; int endpoints; int (* disable ) (struct usb_function*) ;} ;
struct usb_configuration {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_function*) ;
 int FUNC_3 (struct usb_configuration*,struct usb_function*) ;
 int FUNC_4 (struct usb_function*) ;

void FUNC_5(struct usb_configuration *VAR_0, struct usb_function *VAR_1)
{
 if (VAR_1->disable)
  VAR_1->disable(VAR_1);

 FUNC_0(VAR_1->endpoints, 32);
 FUNC_1(&VAR_1->list);
 if (VAR_1->unbind)
  VAR_1->unbind(VAR_0, VAR_1);

 if (VAR_1->bind_deactivated)
  FUNC_4(VAR_1);
}
