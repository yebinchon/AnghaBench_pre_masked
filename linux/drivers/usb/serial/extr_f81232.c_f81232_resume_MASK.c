
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; int interrupt_in_urb; int port; } ;
struct usb_serial {struct usb_serial_port** port; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->port[0];
 int VAR_3;

 if (FUNC_1(&VAR_2->port)) {
  VAR_3 = FUNC_3(VAR_2->interrupt_in_urb, VAR_0);
  if (VAR_3) {
   FUNC_0(&VAR_2->dev, "submit interrupt urb failed: %d\n",
     VAR_3);
   return VAR_3;
  }
 }

 return FUNC_2(VAR_1);
}
