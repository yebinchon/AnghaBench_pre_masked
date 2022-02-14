
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__** write_urbs; } ;
struct tty_struct {int dummy; } ;
struct TYPE_2__ {int transfer_flags; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_1 (struct tty_struct*,struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1, struct usb_serial_port *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->write_urbs); ++VAR_3)
  VAR_2->write_urbs[VAR_3]->transfer_flags = VAR_0;


 return FUNC_1(VAR_1, VAR_2);
}
