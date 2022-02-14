
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct qt2_port_private {struct qt2_port_private* write_buffer; int write_urb; } ;


 int FUNC_0 (struct qt2_port_private*) ;
 int FUNC_1 (int ) ;
 struct qt2_port_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_0)
{
 struct qt2_port_private *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1->write_urb);
 FUNC_0(VAR_1->write_buffer);
 FUNC_0(VAR_1);

 return 0;
}
