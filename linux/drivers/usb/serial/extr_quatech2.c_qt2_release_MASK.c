
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct qt2_serial_private {struct qt2_serial_private* read_buffer; int read_urb; } ;


 int FUNC_0 (struct qt2_serial_private*) ;
 int FUNC_1 (int ) ;
 struct qt2_serial_private* FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial *VAR_0)
{
 struct qt2_serial_private *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->read_urb);
 FUNC_1(VAR_1->read_urb);
 FUNC_0(VAR_1->read_buffer);
 FUNC_0(VAR_1);
}
