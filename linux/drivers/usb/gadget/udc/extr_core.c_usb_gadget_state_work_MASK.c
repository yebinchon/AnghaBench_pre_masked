
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_udc {TYPE_1__ dev; } ;
struct usb_gadget {struct usb_udc* udc; } ;


 int FUNC_0 (int *,int *,char*) ;
 struct usb_gadget* FUNC_1 (struct work_struct*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_0)
{
 struct usb_gadget *VAR_1 = FUNC_1(VAR_0);
 struct usb_udc *VAR_2 = VAR_1->udc;

 if (VAR_2)
  FUNC_0(&VAR_2->dev.kobj, ((void*)0), "state");
}
