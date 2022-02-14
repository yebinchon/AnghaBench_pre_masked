
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct qt2_port_private {int urb_lock; scalar_t__ urb_in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct qt2_port_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->driver_data;
 struct qt2_port_private *VAR_4;
 unsigned long VAR_5 = 0;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3);

 FUNC_0(&VAR_4->urb_lock, VAR_5);

 if (VAR_4->urb_in_use)
  VAR_6 = 0;
 else
  VAR_6 = VAR_0 - VAR_1;

 FUNC_1(&VAR_4->urb_lock, VAR_5);

 return VAR_6;
}
