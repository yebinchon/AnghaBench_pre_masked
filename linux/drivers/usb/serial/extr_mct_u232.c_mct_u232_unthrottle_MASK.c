
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct mct_u232_private {int rx_flags; unsigned int control_state; int lock; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct usb_serial_port*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mct_u232_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_2->driver_data;
 struct mct_u232_private *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5;

 FUNC_2(&VAR_4->lock);
 if ((VAR_4->rx_flags & VAR_0) && FUNC_0(VAR_2)) {
  VAR_4->rx_flags &= ~VAR_0;
  VAR_4->control_state |= VAR_1;
  VAR_5 = VAR_4->control_state;
  FUNC_3(&VAR_4->lock);
  FUNC_1(VAR_3, VAR_5);
 } else {
  FUNC_3(&VAR_4->lock);
 }
}
