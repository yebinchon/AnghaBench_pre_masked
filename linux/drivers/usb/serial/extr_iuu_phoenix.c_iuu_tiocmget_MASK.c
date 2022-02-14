
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct iuu_private {int tiostatus; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct iuu_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct iuu_private *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->lock, VAR_3);
 VAR_4 = VAR_2->tiostatus;
 FUNC_1(&VAR_2->lock, VAR_3);

 return VAR_4;
}
