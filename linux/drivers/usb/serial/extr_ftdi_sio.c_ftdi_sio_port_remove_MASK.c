
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct ftdi_private {int dummy; } ;


 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct ftdi_private*) ;
 int FUNC_2 (struct usb_serial_port*) ;
 struct ftdi_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_0)
{
 struct ftdi_private *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);

 FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 return 0;
}
