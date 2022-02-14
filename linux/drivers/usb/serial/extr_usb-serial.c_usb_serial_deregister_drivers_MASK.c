
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_driver {struct usb_driver* usb_driver; } ;
struct usb_driver {int dummy; } ;


 int FUNC_0 (struct usb_driver*) ;
 int FUNC_1 (struct usb_driver*) ;
 int FUNC_2 (struct usb_serial_driver* const) ;

void FUNC_3(struct usb_serial_driver *const VAR_0[])
{
 struct usb_driver *VAR_1 = (*VAR_0)->usb_driver;

 for (; *VAR_0; ++VAR_0)
  FUNC_2(*VAR_0);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
