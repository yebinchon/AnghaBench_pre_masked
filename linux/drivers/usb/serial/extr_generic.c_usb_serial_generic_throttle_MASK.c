
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int flags; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;

 FUNC_0(VAR_0, &VAR_2->flags);
}
