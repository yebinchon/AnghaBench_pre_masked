
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* read_urb; TYPE_1__* serial; } ;
struct tty_struct {int dummy; } ;
struct opticon_private {int rts; int lock; } ;
struct TYPE_4__ {int pipe; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 struct opticon_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (struct tty_struct*,struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_2, struct usb_serial_port *VAR_3)
{
 struct opticon_private *VAR_4 = FUNC_4(VAR_3);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_4->rts = 0;
 FUNC_2(&VAR_4->lock, VAR_5);


 FUNC_0(VAR_3, VAR_0, 0);


 FUNC_3(VAR_3->serial->dev, VAR_3->read_urb->pipe);

 VAR_6 = FUNC_5(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;



 FUNC_0(VAR_3, VAR_1, 1);

 return VAR_6;
}
