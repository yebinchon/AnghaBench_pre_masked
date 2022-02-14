
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct keyspan_serial_private {struct keyspan_device_details* device_details; } ;
struct keyspan_device_details {int msg_format; } ;


 int FUNC_0 (struct usb_serial*,struct usb_serial_port*,int) ;
 int FUNC_1 (struct usb_serial*,struct usb_serial_port*,int) ;
 int FUNC_2 (struct usb_serial*,struct usb_serial_port*,int) ;
 int FUNC_3 (struct usb_serial*,struct usb_serial_port*,int) ;
 int FUNC_4 (struct usb_serial*,struct usb_serial_port*,int) ;





 struct keyspan_serial_private* FUNC_5 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_6(struct usb_serial_port *VAR_0, int VAR_1)
{
 struct usb_serial *VAR_2 = VAR_0->serial;
 struct keyspan_serial_private *VAR_3;
 const struct keyspan_device_details *VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = VAR_3->device_details;

 switch (VAR_4->msg_format) {
 case 132:
  FUNC_0(VAR_2, VAR_0, VAR_1);
  break;
 case 131:
  FUNC_1(VAR_2, VAR_0, VAR_1);
  break;
 case 130:
  FUNC_2(VAR_2, VAR_0, VAR_1);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_0, VAR_1);
  break;
 case 129:
  FUNC_3(VAR_2, VAR_0, VAR_1);
  break;
 }
}
