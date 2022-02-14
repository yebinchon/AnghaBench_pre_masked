
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct qt2_serial_private {int read_urb; } ;


 struct qt2_serial_private* FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_0)
{
 struct qt2_serial_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->read_urb);
}
