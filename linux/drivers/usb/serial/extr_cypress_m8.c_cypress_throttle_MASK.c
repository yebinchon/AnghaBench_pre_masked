
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct cypress_private {int lock; int rx_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cypress_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;
 struct cypress_private *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(&VAR_3->lock);
 VAR_3->rx_flags = VAR_0;
 FUNC_1(&VAR_3->lock);
}
