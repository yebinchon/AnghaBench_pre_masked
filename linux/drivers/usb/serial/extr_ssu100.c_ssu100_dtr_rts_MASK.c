
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_device*,int) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_3, int VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->serial->dev;


 if (!VAR_4) {
  if (FUNC_3(VAR_5, 0, VAR_2, 0) < 0)
   FUNC_1(&VAR_3->dev, "error from flowcontrol urb\n");
 }

 if (VAR_4)
  FUNC_2(VAR_5, VAR_0 | VAR_1);
 else
  FUNC_0(VAR_5, VAR_0 | VAR_1);
}
