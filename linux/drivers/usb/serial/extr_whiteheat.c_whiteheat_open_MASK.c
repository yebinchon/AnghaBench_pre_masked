
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial_port {TYPE_3__* serial; TYPE_2__* write_urb; TYPE_1__* read_urb; } ;
struct tty_struct {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int pipe; } ;
struct TYPE_5__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (struct usb_serial_port*,int) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct tty_struct*,struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_2, struct usb_serial_port *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3->serial);
 if (VAR_4)
  goto exit;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_3->serial);
  goto exit;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_0 | VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3);
  FUNC_5(VAR_3->serial);
  goto exit;
 }

 if (VAR_2)
  FUNC_3(VAR_2);


 FUNC_6(VAR_3->serial->dev, VAR_3->read_urb->pipe);
 FUNC_6(VAR_3->serial->dev, VAR_3->write_urb->pipe);

 VAR_4 = FUNC_7(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3);
  FUNC_5(VAR_3->serial);
  goto exit;
 }
exit:
 return VAR_4;
}
