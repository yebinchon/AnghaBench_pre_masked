
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_rx {int (* callback ) (void*,void*,int,int) ;int rx_submit_list; int urb; int buf; struct rx_cxt* rx; void* index; void* cb_data; } ;
struct usb_device {int dummy; } ;
struct rx_cxt {int submit_lock; int rx_submit_list; } ;
struct lte_udev {int (* rx_cb ) (void*,void*,int,int) ;struct usb_device* usbdev; struct rx_cxt rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_rx* FUNC_0 (struct rx_cxt*,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct rx_cxt*,struct usb_rx*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct usb_device*,int ,int ,int ,int ,struct usb_rx*) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_7,
   int (*VAR_8)(void *VAR_9,
      void *VAR_10, int VAR_11, int VAR_12),
   void *VAR_13,
   int VAR_14)
{
 struct lte_udev *VAR_15 = VAR_7;
 struct usb_device *VAR_16 = VAR_15->usbdev;
 struct rx_cxt *VAR_17 = &VAR_15->rx;
 struct usb_rx *VAR_18;
 int VAR_19;
 int VAR_20;
 unsigned long VAR_21;

 if (!VAR_15->usbdev) {
  FUNC_3("invalid device\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_0(VAR_17, &VAR_19);
 if (!VAR_18) {
  FUNC_3("Out of Memory\n");
  return -VAR_1;
 }

 VAR_15->rx_cb = VAR_8;
 VAR_18->callback = VAR_8;
 VAR_18->cb_data = VAR_13;
 VAR_18->index = (void *)VAR_15;
 VAR_18->rx = VAR_17;

 FUNC_7(VAR_18->urb,
     VAR_16,
     FUNC_8(VAR_16, 0x83),
     VAR_18->buf,
     VAR_5,
     VAR_6,
     VAR_18);

 FUNC_5(&VAR_17->submit_lock, VAR_21);
 FUNC_1(&VAR_18->rx_submit_list, &VAR_17->rx_submit_list);
 FUNC_6(&VAR_17->submit_lock, VAR_21);

 if (VAR_14 == VAR_4)
  VAR_20 = FUNC_9(VAR_18->urb, VAR_3);
 else
  VAR_20 = FUNC_9(VAR_18->urb, VAR_2);

 if (VAR_20) {
  FUNC_5(&VAR_17->submit_lock, VAR_21);
  FUNC_2(&VAR_18->rx_submit_list);
  FUNC_6(&VAR_17->submit_lock, VAR_21);

  FUNC_3("usb_submit_urb failed (%p)\n", VAR_18);
  FUNC_4(VAR_17, VAR_18);
 }

 return VAR_20;
}
