
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int interrupt_in_urb; int dev; TYPE_2__* read_urb; TYPE_1__* write_urb; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
struct pl2303_serial_private {int quirks; } ;
struct TYPE_4__ {int pipe; } ;
struct TYPE_3__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct tty_struct*,struct usb_serial_port*,int *) ;
 int FUNC_2 (struct usb_serial*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 struct pl2303_serial_private* FUNC_4 (struct usb_serial*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_2, struct usb_serial_port *VAR_3)
{
 struct usb_serial *VAR_4 = VAR_3->serial;
 struct pl2303_serial_private *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 if (VAR_5->quirks & VAR_1) {
  FUNC_3(VAR_4->dev, VAR_3->write_urb->pipe);
  FUNC_3(VAR_4->dev, VAR_3->read_urb->pipe);
 } else {

  FUNC_2(VAR_4, 8, 0);
  FUNC_2(VAR_4, 9, 0);
 }


 if (VAR_2)
  FUNC_1(VAR_2, VAR_3, ((void*)0));

 VAR_6 = FUNC_7(VAR_3->interrupt_in_urb, VAR_0);
 if (VAR_6) {
  FUNC_0(&VAR_3->dev, "failed to submit interrupt urb: %d\n",
   VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_3->interrupt_in_urb);
  return VAR_6;
 }

 return 0;
}
