
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int * bus; } ;
struct usb_gadget_driver {TYPE_4__ driver; } ;
struct usb_gadget {int dummy; } ;
struct udc {TYPE_3__* regs; TYPE_2__* ep; struct usb_gadget_driver* driver; } ;
struct TYPE_7__ {int ctl; } ;
struct TYPE_5__ {int driver_data; } ;
struct TYPE_6__ {TYPE_1__ ep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct udc*) ;
 struct udc* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (struct udc*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct usb_gadget *VAR_3,
  struct usb_gadget_driver *VAR_4)
{
 struct udc *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6;

 VAR_4->driver.bus = ((void*)0);
 VAR_5->driver = VAR_4;




 VAR_5->ep[VAR_2].ep.driver_data =
  VAR_5->ep[VAR_1].ep.driver_data;


 FUNC_2(VAR_5);


 VAR_6 = FUNC_1(&VAR_5->regs->ctl);
 VAR_6 = VAR_6 & FUNC_0(VAR_0);
 FUNC_5(VAR_6, &VAR_5->regs->ctl);

 FUNC_4(VAR_5);

 return 0;
}
