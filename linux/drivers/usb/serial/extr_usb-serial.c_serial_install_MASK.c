
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int disc_mutex; TYPE_2__* type; int interface; } ;
struct tty_struct {int index; struct usb_serial_port* driver_data; } ;
struct tty_driver {int ** termios; } ;
struct TYPE_3__ {int owner; } ;
struct TYPE_4__ {TYPE_1__ driver; int (* init_termios ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tty_driver*,struct tty_struct*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct usb_serial_port* FUNC_7 (int) ;
 int FUNC_8 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_9(struct tty_driver *VAR_1, struct tty_struct *VAR_2)
{
 int VAR_3 = VAR_2->index;
 struct usb_serial *VAR_4;
 struct usb_serial_port *VAR_5;
 bool VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_7(VAR_3);
 if (!VAR_5)
  return VAR_7;

 VAR_4 = VAR_5->serial;
 if (!FUNC_3(VAR_4->type->driver.owner))
  goto error_module_get;

 VAR_7 = FUNC_5(VAR_4->interface);
 if (VAR_7)
  goto error_get_interface;

 VAR_6 = (VAR_1->termios[VAR_3] == ((void*)0));

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7)
  goto error_init_termios;

 FUNC_1(&VAR_4->disc_mutex);


 if (VAR_6 && VAR_4->type->init_termios)
  VAR_4->type->init_termios(VAR_2);

 VAR_2->driver_data = VAR_5;

 return VAR_7;

 error_init_termios:
 FUNC_6(VAR_4->interface);
 error_get_interface:
 FUNC_0(VAR_4->type->driver.owner);
 error_module_get:
 FUNC_8(VAR_4);
 FUNC_1(&VAR_4->disc_mutex);
 return VAR_7;
}
