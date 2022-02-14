
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {int dummy; } ;
struct ktermios {int dummy; } ;
struct edgeport_port {int dummy; } ;


 int FUNC_0 (struct tty_struct*,struct edgeport_port*,struct ktermios*) ;
 struct edgeport_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0,
  struct usb_serial_port *VAR_1, struct ktermios *VAR_2)
{
 struct edgeport_port *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_0, VAR_3, VAR_2);
}
