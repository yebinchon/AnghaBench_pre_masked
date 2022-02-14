
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct cyberjack_private {int dummy; } ;


 int FUNC_0 (struct cyberjack_private*) ;
 struct cyberjack_private* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_0)
{
 struct cyberjack_private *VAR_1;

 FUNC_2(VAR_0->interrupt_in_urb);

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);

 return 0;
}
