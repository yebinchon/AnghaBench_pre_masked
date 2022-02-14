
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* read_urb; TYPE_2__* write_urb; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
struct spcp8x5_private {int line_control; } ;
struct TYPE_4__ {int pipe; } ;
struct TYPE_3__ {int pipe; } ;


 int FUNC_0 (struct usb_serial_port*,int ) ;
 int FUNC_1 (struct tty_struct*,struct usb_serial_port*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int,int) ;
 struct spcp8x5_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (struct tty_struct*,struct usb_serial_port*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_0, struct usb_serial_port *VAR_1)
{
 struct usb_serial *VAR_2 = VAR_1->serial;
 struct spcp8x5_private *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 FUNC_2(VAR_2->dev, VAR_1->write_urb->pipe);
 FUNC_2(VAR_2->dev, VAR_1->read_urb->pipe);

 VAR_4 = FUNC_3(VAR_2->dev, FUNC_6(VAR_2->dev, 0),
         0x09, 0x00,
         0x01, 0x00, ((void*)0), 0x00, 100);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_1, VAR_3->line_control);

 if (VAR_0)
  FUNC_1(VAR_0, VAR_1, ((void*)0));

 return FUNC_5(VAR_0, VAR_1);
}
