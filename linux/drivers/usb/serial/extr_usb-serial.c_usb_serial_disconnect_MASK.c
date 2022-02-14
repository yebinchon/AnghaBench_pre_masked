
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int delta_msr_wait; } ;
struct usb_serial_port {int dev; int work; TYPE_2__ port; } ;
struct usb_serial {int disconnected; int num_ports; TYPE_1__* type; struct usb_serial_port** port; int disc_mutex; } ;
struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct tty_struct {int dummy; } ;
struct TYPE_3__ {int (* disconnect ) (struct usb_serial*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_serial*) ;
 int FUNC_7 (struct tty_struct*) ;
 struct tty_struct* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct tty_struct*) ;
 struct usb_serial* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct usb_serial*) ;
 int FUNC_12 (struct usb_serial_port*) ;
 int FUNC_13 (struct usb_serial*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct usb_interface *VAR_0)
{
 int VAR_1;
 struct usb_serial *VAR_2 = FUNC_10(VAR_0);
 struct device *VAR_3 = &VAR_0->dev;
 struct usb_serial_port *VAR_4;
 struct tty_struct *VAR_5;

 FUNC_11(VAR_2);

 FUNC_4(&VAR_2->disc_mutex);

 VAR_2->disconnected = 1;
 FUNC_5(&VAR_2->disc_mutex);

 for (VAR_1 = 0; VAR_1 < VAR_2->num_ports; ++VAR_1) {
  VAR_4 = VAR_2->port[VAR_1];
  VAR_5 = FUNC_8(&VAR_4->port);
  if (VAR_5) {
   FUNC_9(VAR_5);
   FUNC_7(VAR_5);
  }
  FUNC_12(VAR_4);
  FUNC_14(&VAR_4->port.delta_msr_wait);
  FUNC_0(&VAR_4->work);
  if (FUNC_3(&VAR_4->dev))
   FUNC_2(&VAR_4->dev);
 }
 if (VAR_2->type->disconnect)
  VAR_2->type->disconnect(VAR_2);


 FUNC_13(VAR_2);
 FUNC_1(VAR_3, "device disconnected\n");
}
