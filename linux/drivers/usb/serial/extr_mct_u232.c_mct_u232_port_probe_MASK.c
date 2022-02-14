
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {TYPE_1__** port; } ;
struct mct_u232_private {int lock; TYPE_2__* read_urb; } ;
struct TYPE_4__ {struct usb_serial_port* context; } ;
struct TYPE_3__ {TYPE_2__* interrupt_in_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct mct_u232_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_serial_port*,struct mct_u232_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_3)
{
 struct usb_serial *VAR_4 = VAR_3->serial;
 struct mct_u232_private *VAR_5;


 if (!VAR_4->port[1] || !VAR_4->port[1]->interrupt_in_urb) {
  FUNC_0(&VAR_3->dev, "expected endpoint missing\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;


 VAR_5->read_urb = VAR_4->port[1]->interrupt_in_urb;
 VAR_5->read_urb->context = VAR_3;

 FUNC_2(&VAR_5->lock);

 FUNC_3(VAR_3, VAR_5);

 return 0;
}
