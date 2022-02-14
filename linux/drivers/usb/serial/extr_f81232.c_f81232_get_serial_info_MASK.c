
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; int minor; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int baud_base; int port; int line; int type; } ;
struct f81232_private {int baud_base; } ;


 int VAR_0 ;
 struct f81232_private* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1,
  struct serial_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;
 struct f81232_private *VAR_4 = FUNC_0(VAR_3);

 VAR_2->type = VAR_0;
 VAR_2->line = VAR_3->minor;
 VAR_2->port = VAR_3->port_number;
 VAR_2->baud_base = VAR_4->baud_base;
 return 0;
}
