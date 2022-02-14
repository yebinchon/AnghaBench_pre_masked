
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct tty_struct {int dummy; } ;
struct ftdi_private {int interface; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*,int *) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ,int ,int ,int *,int ,int ) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_4, struct usb_serial_port *VAR_5)
{
 struct usb_device *VAR_6 = VAR_5->serial->dev;
 struct ftdi_private *VAR_7 = FUNC_2(VAR_5);



 FUNC_1(VAR_6, FUNC_4(VAR_6, 0),
   VAR_0, VAR_1,
   VAR_2,
   VAR_7->interface, ((void*)0), 0, VAR_3);






 if (VAR_4)
  FUNC_0(VAR_4, VAR_5, ((void*)0));

 return FUNC_3(VAR_4, VAR_5);
}
