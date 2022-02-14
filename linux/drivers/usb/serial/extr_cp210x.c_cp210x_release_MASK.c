
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct cp210x_serial_private {int dummy; } ;


 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (struct cp210x_serial_private*) ;
 struct cp210x_serial_private* FUNC_2 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial *VAR_0)
{
 struct cp210x_serial_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);

 FUNC_1(VAR_1);
}
