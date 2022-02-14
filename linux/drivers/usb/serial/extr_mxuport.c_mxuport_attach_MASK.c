
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct usb_serial {struct usb_serial_port** port; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct usb_serial_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->port[0];
 struct usb_serial_port *VAR_3 = VAR_1->port[1];
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_2);
  return VAR_4;
 }

 return 0;
}
