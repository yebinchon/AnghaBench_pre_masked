
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct garmin_data {int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct garmin_data* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->driver_data;
 struct garmin_data *VAR_4 = FUNC_2(VAR_3);



 FUNC_0(&VAR_4->lock);
 VAR_4->flags |= VAR_0|VAR_1;
 FUNC_1(&VAR_4->lock);
}
