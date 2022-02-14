
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whiteheat_private {int mcr; } ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_serial_port*,int) ;
 int FUNC_1 (struct usb_serial_port*,int) ;
 struct whiteheat_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4,
          unsigned int VAR_5, unsigned int VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_4->driver_data;
 struct whiteheat_private *VAR_8 = FUNC_2(VAR_7);

 if (VAR_5 & VAR_1)
  VAR_8->mcr |= VAR_3;
 if (VAR_5 & VAR_0)
  VAR_8->mcr |= VAR_2;

 if (VAR_6 & VAR_1)
  VAR_8->mcr &= ~VAR_3;
 if (VAR_6 & VAR_0)
  VAR_8->mcr &= ~VAR_2;

 FUNC_0(VAR_7, VAR_8->mcr & VAR_2);
 FUNC_1(VAR_7, VAR_8->mcr & VAR_3);
 return 0;
}
