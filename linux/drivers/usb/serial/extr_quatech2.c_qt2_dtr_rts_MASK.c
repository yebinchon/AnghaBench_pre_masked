
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct qt2_port_private {int device_port; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct usb_device*,int ,int ,int ) ;
 int FUNC_2 (struct qt2_port_private*,int,int) ;
 struct qt2_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_3, int VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->serial->dev;
 struct qt2_port_private *VAR_6 = FUNC_3(VAR_3);


 if (!VAR_4) {
  if (FUNC_1(VAR_5, VAR_6->device_port,
        VAR_2, 0) < 0)
   FUNC_0(&VAR_3->dev, "error from flowcontrol urb\n");
 }

 if (VAR_4)
  FUNC_2(VAR_6, VAR_0 | VAR_1, 0);
 else
  FUNC_2(VAR_6, 0, VAR_0 | VAR_1);
}
