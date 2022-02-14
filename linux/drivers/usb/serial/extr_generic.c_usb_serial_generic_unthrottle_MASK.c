
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int flags; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct usb_serial_port*,int ) ;

void FUNC_3(struct tty_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->driver_data;

 FUNC_0(VAR_1, &VAR_3->flags);





 FUNC_1();

 FUNC_2(VAR_3, VAR_0);
}
