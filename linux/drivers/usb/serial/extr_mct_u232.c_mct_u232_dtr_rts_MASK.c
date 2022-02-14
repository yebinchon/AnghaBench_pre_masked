
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct mct_u232_private {int control_state; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mct_u232_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 struct mct_u232_private *VAR_5 = FUNC_3(VAR_2);

 FUNC_1(&VAR_5->lock);
 if (VAR_3)
  VAR_5->control_state |= VAR_0 | VAR_1;
 else
  VAR_5->control_state &= ~(VAR_0 | VAR_1);
 VAR_4 = VAR_5->control_state;
 FUNC_2(&VAR_5->lock);

 FUNC_0(VAR_2, VAR_4);
}
