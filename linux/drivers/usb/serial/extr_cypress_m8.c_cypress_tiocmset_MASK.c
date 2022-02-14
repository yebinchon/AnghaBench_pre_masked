
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct cypress_private {int cmd_ctrl; int lock; int line_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*,int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct cypress_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct cypress_private *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;

 FUNC_1(&VAR_8->lock, VAR_9);
 if (VAR_5 & VAR_3)
  VAR_8->line_control |= VAR_1;
 if (VAR_5 & VAR_2)
  VAR_8->line_control |= VAR_0;
 if (VAR_6 & VAR_3)
  VAR_8->line_control &= ~VAR_1;
 if (VAR_6 & VAR_2)
  VAR_8->line_control &= ~VAR_0;
 VAR_8->cmd_ctrl = 1;
 FUNC_2(&VAR_8->lock, VAR_9);

 return FUNC_0(VAR_4, VAR_7, ((void*)0), 0);
}
