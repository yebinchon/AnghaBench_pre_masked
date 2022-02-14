
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
 int FUNC_0 (struct usb_serial_port*) ;
 struct whiteheat_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_4->driver_data;
 struct whiteheat_private *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = 0;

 FUNC_0(VAR_5);
 if (VAR_6->mcr & VAR_2)
  VAR_7 |= VAR_0;
 if (VAR_6->mcr & VAR_3)
  VAR_7 |= VAR_1;

 return VAR_7;
}
