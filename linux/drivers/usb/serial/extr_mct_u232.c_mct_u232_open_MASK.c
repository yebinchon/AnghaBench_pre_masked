
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_serial_port {int bulk_out_size; TYPE_4__* interrupt_in_urb; int dev; TYPE_3__* read_urb; struct usb_serial* serial; } ;
struct usb_serial {TYPE_2__* dev; } ;
struct tty_struct {int dummy; } ;
struct mct_u232_private {int control_state; int last_lcr; unsigned char last_msr; TYPE_4__* read_urb; int lock; } ;
struct TYPE_9__ {int pipe; } ;
struct TYPE_8__ {int pipe; } ;
struct TYPE_6__ {int idProduct; } ;
struct TYPE_7__ {TYPE_1__ descriptor; } ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct usb_serial_port*,unsigned char*) ;
 int FUNC_4 (struct usb_serial_port*,unsigned int*,unsigned char) ;
 int FUNC_5 (struct usb_serial_port*,unsigned char) ;
 int FUNC_6 (struct usb_serial_port*,unsigned int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct mct_u232_private* FUNC_9 (struct usb_serial_port*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_7, struct usb_serial_port *VAR_8)
{
 struct usb_serial *VAR_9 = VAR_8->serial;
 struct mct_u232_private *VAR_10 = FUNC_9(VAR_8);
 int VAR_11 = 0;
 unsigned int VAR_12;
 unsigned long VAR_13;
 unsigned char VAR_14;
 unsigned char VAR_15;






 if (FUNC_2(VAR_9->dev->descriptor.idProduct)
      == VAR_3)
  VAR_8->bulk_out_size = 16;






 FUNC_7(&VAR_10->lock, VAR_13);
 if (VAR_7 && FUNC_0(VAR_7))
  VAR_10->control_state = VAR_5 | VAR_6;
 else
  VAR_10->control_state = 0;

 VAR_10->last_lcr = (VAR_1 |
     VAR_2 |
     VAR_4);
 VAR_12 = VAR_10->control_state;
 VAR_14 = VAR_10->last_lcr;
 FUNC_8(&VAR_10->lock, VAR_13);
 FUNC_6(VAR_8, VAR_12);
 FUNC_5(VAR_8, VAR_14);


 FUNC_3(VAR_8, &VAR_15);
 FUNC_7(&VAR_10->lock, VAR_13);
 VAR_10->last_msr = VAR_15;
 FUNC_4(VAR_8, &VAR_10->control_state, VAR_10->last_msr);
 FUNC_8(&VAR_10->lock, VAR_13);

 VAR_11 = FUNC_11(VAR_10->read_urb, VAR_0);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev,
   "usb_submit_urb(read) failed pipe 0x%x err %d\n",
   VAR_8->read_urb->pipe, VAR_11);
  goto error;
 }

 VAR_11 = FUNC_11(VAR_8->interrupt_in_urb, VAR_0);
 if (VAR_11) {
  FUNC_10(VAR_10->read_urb);
  FUNC_1(&VAR_8->dev,
   "usb_submit_urb(read int) failed pipe 0x%x err %d",
   VAR_8->interrupt_in_urb->pipe, VAR_11);
  goto error;
 }
 return 0;

error:
 return VAR_11;
}
