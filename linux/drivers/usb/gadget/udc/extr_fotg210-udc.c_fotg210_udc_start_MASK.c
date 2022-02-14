
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * bus; } ;
struct usb_gadget_driver {TYPE_1__ driver; } ;
struct usb_gadget {int dummy; } ;
struct fotg210_udc {scalar_t__ reg; struct usb_gadget_driver* driver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fotg210_udc* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_2,
  struct usb_gadget_driver *VAR_3)
{
 struct fotg210_udc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;


 VAR_3->driver.bus = ((void*)0);
 VAR_4->driver = VAR_3;


 VAR_5 = FUNC_1(VAR_4->reg + VAR_1);
 VAR_5 |= VAR_0;
 FUNC_2(VAR_5, VAR_4->reg + VAR_1);

 return 0;
}
