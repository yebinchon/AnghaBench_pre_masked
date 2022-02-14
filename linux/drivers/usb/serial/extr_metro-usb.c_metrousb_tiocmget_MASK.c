
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct metrousb_private {unsigned long control_state; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct metrousb_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 unsigned long VAR_1 = 0;
 struct usb_serial_port *VAR_2 = VAR_0->driver_data;
 struct metrousb_private *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4 = 0;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_1 = VAR_3->control_state;
 FUNC_1(&VAR_3->lock, VAR_4);

 return VAR_1;
}
