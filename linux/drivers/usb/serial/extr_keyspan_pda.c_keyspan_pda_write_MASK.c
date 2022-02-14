
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {int bulk_out_size; int write_urbs_free; int dev; TYPE_1__* write_urb; int lock; struct usb_serial* serial; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
struct keyspan_pda_private {int tx_throttled; int tx_room; int unthrottle_work; } ;
struct TYPE_2__ {int transfer_buffer_length; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,unsigned char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ,int,int,int ,int ,int*,int,int) ;
 struct keyspan_pda_private* FUNC_12 (struct usb_serial_port*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_15(struct tty_struct *VAR_7,
 struct usb_serial_port *VAR_8, const unsigned char *VAR_9, int VAR_10)
{
 struct usb_serial *VAR_11 = VAR_8->serial;
 int VAR_12 = 0;
 int VAR_13 = 0;
 struct keyspan_pda_private *VAR_14;

 VAR_14 = FUNC_12(VAR_8);
 if (VAR_10 == 0) {
  FUNC_1(&VAR_8->dev, "write request of 0 bytes\n");
  return 0;
 }





 FUNC_8(&VAR_8->lock);
 if (!FUNC_10(0, &VAR_8->write_urbs_free) || VAR_14->tx_throttled) {
  FUNC_9(&VAR_8->lock);
  return 0;
 }
 FUNC_0(0, &VAR_8->write_urbs_free);
 FUNC_9(&VAR_8->lock);






 VAR_10 = (VAR_10 > VAR_8->bulk_out_size) ? VAR_8->bulk_out_size : VAR_10;




 if (VAR_10 > VAR_14->tx_room && !FUNC_2()) {
  u8 *VAR_15;

  VAR_15 = FUNC_4(1, VAR_3);
  if (!VAR_15) {
   VAR_13 = -VAR_1;
   goto exit;
  }

  VAR_13 = FUNC_11(VAR_11->dev,
         FUNC_13(VAR_11->dev, 0),
         6,
         VAR_6 | VAR_5
         | VAR_4,
         0,
         0,
         VAR_15,
         1,
         2000);
  if (VAR_13 > 0) {
   FUNC_1(&VAR_8->dev, "roomquery says %d\n", *VAR_15);
   VAR_14->tx_room = *VAR_15;
  }
  FUNC_3(VAR_15);
  if (VAR_13 < 0) {
   FUNC_1(&VAR_8->dev, "roomquery failed\n");
   goto exit;
  }
  if (VAR_13 == 0) {
   FUNC_1(&VAR_8->dev, "roomquery returned 0 bytes\n");
   VAR_13 = -VAR_0;
   goto exit;
  }
 }
 if (VAR_10 > VAR_14->tx_room) {


  VAR_10 = VAR_14->tx_room;
  VAR_12 = 1;
 }

 if (VAR_10) {

  FUNC_5(VAR_8->write_urb->transfer_buffer, VAR_9, VAR_10);

  VAR_8->write_urb->transfer_buffer_length = VAR_10;

  VAR_14->tx_room -= VAR_10;

  VAR_13 = FUNC_14(VAR_8->write_urb, VAR_2);
  if (VAR_13) {
   FUNC_1(&VAR_8->dev, "usb_submit_urb(write bulk) failed\n");
   goto exit;
  }
 } else {


  VAR_12 = 1;
 }

 if (VAR_12) {
  VAR_14->tx_throttled = 1;
  FUNC_6(&VAR_14->unthrottle_work);
 }

 VAR_13 = VAR_10;
exit:
 if (VAR_13 < 0)
  FUNC_7(0, &VAR_8->write_urbs_free);
 return VAR_13;
}
