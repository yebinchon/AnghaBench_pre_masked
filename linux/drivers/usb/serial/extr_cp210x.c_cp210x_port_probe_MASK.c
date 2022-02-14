
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct cp210x_port_private {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct usb_serial*) ;
 int FUNC_2 (struct cp210x_port_private*) ;
 struct cp210x_port_private* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_serial_port*,struct cp210x_port_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_2)
{
 struct usb_serial *VAR_3 = VAR_2->serial;
 struct cp210x_port_private *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->bInterfaceNumber = FUNC_1(VAR_3);

 FUNC_4(VAR_2, VAR_4);

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 return 0;
}
