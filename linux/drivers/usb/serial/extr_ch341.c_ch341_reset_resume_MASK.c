
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; int interrupt_in_urb; int port; } ;
struct usb_serial {int dev; struct usb_serial_port** port; } ;
struct ch341_private {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ch341_private*) ;
 int FUNC_1 (int ,struct ch341_private*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ch341_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (struct usb_serial*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->port[0];
 struct ch341_private *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;


 FUNC_0(VAR_1->dev, VAR_3);

 if (FUNC_3(&VAR_2->port)) {
  VAR_4 = FUNC_6(VAR_2->interrupt_in_urb, VAR_0);
  if (VAR_4) {
   FUNC_2(&VAR_2->dev, "failed to submit interrupt urb: %d\n",
    VAR_4);
   return VAR_4;
  }

  VAR_4 = FUNC_1(VAR_2->serial->dev, VAR_3);
  if (VAR_4 < 0) {
   FUNC_2(&VAR_2->dev, "failed to read modem status: %d\n",
    VAR_4);
  }
 }

 return FUNC_5(VAR_1);
}
