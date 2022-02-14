
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct serial_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* get_serial ) (struct tty_struct*,struct serial_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,struct serial_struct*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, struct serial_struct *VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;

 if (VAR_3->serial->type->get_serial)
  return VAR_3->serial->type->get_serial(VAR_1, VAR_2);
 return -VAR_0;
}
