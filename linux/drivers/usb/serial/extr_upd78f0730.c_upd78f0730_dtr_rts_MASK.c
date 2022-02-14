
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_struct* tty; } ;
struct usb_serial_port {TYPE_1__ port; } ;
struct tty_struct {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct tty_struct*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_2, int VAR_3)
{
 struct tty_struct *VAR_4 = VAR_2->port.tty;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 if (VAR_3)
  VAR_5 = VAR_0 | VAR_1;
 else
  VAR_6 = VAR_0 | VAR_1;

 FUNC_0(VAR_4, VAR_5, VAR_6);
}
