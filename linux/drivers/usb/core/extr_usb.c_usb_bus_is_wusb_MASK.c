
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int wireless; } ;
struct usb_bus {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct usb_bus*) ;

__attribute__((used)) static unsigned FUNC_1(struct usb_bus *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->wireless;
}
