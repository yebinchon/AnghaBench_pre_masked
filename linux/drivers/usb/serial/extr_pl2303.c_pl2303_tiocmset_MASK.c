
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct pl2303_private {int lock; int line_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct usb_serial_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct pl2303_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct pl2303_private *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;
 u8 VAR_10;
 int VAR_11;

 FUNC_1(&VAR_8->lock, VAR_9);
 if (VAR_5 & VAR_3)
  VAR_8->line_control |= VAR_1;
 if (VAR_5 & VAR_2)
  VAR_8->line_control |= VAR_0;
 if (VAR_6 & VAR_3)
  VAR_8->line_control &= ~VAR_1;
 if (VAR_6 & VAR_2)
  VAR_8->line_control &= ~VAR_0;
 VAR_10 = VAR_8->line_control;
 FUNC_2(&VAR_8->lock, VAR_9);

 VAR_11 = FUNC_0(VAR_7, VAR_10);
 if (VAR_11)
  return FUNC_4(VAR_11);

 return 0;
}
