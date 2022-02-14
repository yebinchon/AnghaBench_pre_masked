
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct mct_u232_private {unsigned char last_lcr; int lock; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,unsigned char) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mct_u232_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1, int VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;
 struct mct_u232_private *VAR_4 = FUNC_3(VAR_3);
 unsigned char VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_4->lock, VAR_6);
 VAR_5 = VAR_4->last_lcr;

 if (VAR_2)
  VAR_5 |= VAR_0;
 FUNC_2(&VAR_4->lock, VAR_6);

 FUNC_0(VAR_3, VAR_5);
}
