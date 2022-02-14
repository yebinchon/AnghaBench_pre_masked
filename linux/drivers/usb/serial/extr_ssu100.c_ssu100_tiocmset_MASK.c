
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int FUNC_0 (struct usb_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_0->driver_data;
 struct usb_device *VAR_4 = VAR_3->serial->dev;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
