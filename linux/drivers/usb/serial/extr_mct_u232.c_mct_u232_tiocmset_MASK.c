
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct mct_u232_private {unsigned int control_state; int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mct_u232_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_2->driver_data;
 struct mct_u232_private *VAR_6 = FUNC_3(VAR_5);
 unsigned int VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_6->lock, VAR_8);
 VAR_7 = VAR_6->control_state;

 if (VAR_3 & VAR_1)
  VAR_7 |= VAR_1;
 if (VAR_3 & VAR_0)
  VAR_7 |= VAR_0;
 if (VAR_4 & VAR_1)
  VAR_7 &= ~VAR_1;
 if (VAR_4 & VAR_0)
  VAR_7 &= ~VAR_0;

 VAR_6->control_state = VAR_7;
 FUNC_2(&VAR_6->lock, VAR_8);
 return FUNC_0(VAR_5, VAR_7);
}
