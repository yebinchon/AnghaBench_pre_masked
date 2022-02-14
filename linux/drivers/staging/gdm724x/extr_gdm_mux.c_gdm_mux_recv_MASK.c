
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct rx_cxt {int submit_list_lock; int rx_submit_list; } ;
struct mux_rx {int (* callback ) (void*,int,int,struct tty_dev*,int) ;int rx_submit_list; int urb; int buf; void* mux_dev; scalar_t__ offset; } ;
struct mux_dev {int (* rx_cb ) (void*,int,int,struct tty_dev*,int) ;struct rx_cxt rx; struct usb_device* usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mux_rx* FUNC_0 (struct rx_cxt*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct rx_cxt*,struct mux_rx*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct usb_device*,int ,int ,int ,int ,struct mux_rx*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(void *VAR_5,
   int (*VAR_6)(void *VAR_7, int VAR_8, int VAR_9,
      struct tty_dev *VAR_10, int VAR_11))
{
 struct mux_dev *VAR_12 = VAR_5;
 struct usb_device *VAR_13 = VAR_12->usbdev;
 struct mux_rx *VAR_14;
 struct rx_cxt *VAR_15 = &VAR_12->rx;
 unsigned long VAR_16;
 int VAR_17;

 if (!VAR_13) {
  FUNC_3("device is disconnected\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_15);
 if (!VAR_14) {
  FUNC_3("get_rx_struct fail\n");
  return -VAR_1;
 }

 VAR_14->offset = 0;
 VAR_14->mux_dev = (void *)VAR_12;
 VAR_14->callback = VAR_6;
 VAR_12->rx_cb = VAR_6;

 FUNC_7(VAR_14->urb,
     VAR_13,
     FUNC_9(VAR_13, 0x86),
     VAR_14->buf,
     VAR_3,
     VAR_4,
     VAR_14);

 FUNC_5(&VAR_15->submit_list_lock, VAR_16);
 FUNC_1(&VAR_14->rx_submit_list, &VAR_15->rx_submit_list);
 FUNC_6(&VAR_15->submit_list_lock, VAR_16);

 VAR_17 = FUNC_10(VAR_14->urb, VAR_2);

 if (VAR_17) {
  FUNC_5(&VAR_15->submit_list_lock, VAR_16);
  FUNC_2(&VAR_14->rx_submit_list);
  FUNC_6(&VAR_15->submit_list_lock, VAR_16);

  FUNC_4(VAR_15, VAR_14);

  FUNC_3("usb_submit_urb ret=%d\n", VAR_17);
 }

 FUNC_8(VAR_13);

 return VAR_17;
}
