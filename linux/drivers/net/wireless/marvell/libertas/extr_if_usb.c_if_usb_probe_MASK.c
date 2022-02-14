
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct TYPE_6__ {int bcdDevice; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; } ;
struct usb_device {int dev; TYPE_3__ descriptor; } ;
struct lbs_private {int is_polling; int reset_card; int * reset_deep_sleep_wakeup; int * exit_deep_sleep; int * enter_deep_sleep; int hw_host_to_card; } ;
struct if_usb_card {scalar_t__ model; int boot2_version; struct lbs_private* priv; int ep_out_buf; void* tx_urb; void* rx_urb; void* ep_in_size; void* ep_out_size; void* ep_out; void* ep_in; struct usb_device* udev; int fw_wq; int fw_timeout; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lbs_private*) ;
 int VAR_2 ;
 int FUNC_1 (struct lbs_private*) ;
 int VAR_3 ;
 int FUNC_2 (struct if_usb_card*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct if_usb_card*) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ,int ) ;
 struct if_usb_card* FUNC_7 (int,int ) ;
 struct lbs_private* FUNC_8 (struct if_usb_card*,int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (struct lbs_private*,int *,scalar_t__,int ,int ) ;
 int FUNC_11 (struct lbs_private*) ;
 void* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int *,int ,int ) ;
 void* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_17 (struct usb_endpoint_descriptor*) ;
 void* FUNC_18 (struct usb_endpoint_descriptor*) ;
 int FUNC_19 (struct usb_device*) ;
 int FUNC_20 (struct usb_interface*,struct if_usb_card*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_8,
   const struct usb_device_id *VAR_9)
{
 struct usb_device *VAR_10;
 struct usb_host_interface *VAR_11;
 struct usb_endpoint_descriptor *VAR_12;
 struct lbs_private *VAR_13;
 struct if_usb_card *VAR_14;
 int VAR_15 = -VAR_0;
 int VAR_16;

 VAR_10 = FUNC_5(VAR_8);

 VAR_14 = FUNC_7(sizeof(struct if_usb_card), VAR_1);
 if (!VAR_14)
  goto error;

 FUNC_14(&VAR_14->fw_timeout, VAR_4, 0);
 FUNC_4(&VAR_14->fw_wq);

 VAR_14->udev = VAR_10;
 VAR_14->model = (uint32_t) VAR_9->driver_info;
 VAR_11 = VAR_8->cur_altsetting;

 FUNC_9(&VAR_10->dev, "bcdUSB = 0x%X bDeviceClass = 0x%X"
       " bDeviceSubClass = 0x%X, bDeviceProtocol = 0x%X\n",
       FUNC_12(VAR_10->descriptor.bcdUSB),
       VAR_10->descriptor.bDeviceClass,
       VAR_10->descriptor.bDeviceSubClass,
       VAR_10->descriptor.bDeviceProtocol);

 for (VAR_16 = 0; VAR_16 < VAR_11->desc.bNumEndpoints; ++VAR_16) {
  VAR_12 = &VAR_11->endpoint[VAR_16].desc;
  if (FUNC_16(VAR_12)) {
   VAR_14->ep_in_size = FUNC_12(VAR_12->wMaxPacketSize);
   VAR_14->ep_in = FUNC_18(VAR_12);

   FUNC_9(&VAR_10->dev, "in_endpoint = %d\n", VAR_14->ep_in);
   FUNC_9(&VAR_10->dev, "Bulk in size is %d\n", VAR_14->ep_in_size);

  } else if (FUNC_17(VAR_12)) {
   VAR_14->ep_out_size = FUNC_12(VAR_12->wMaxPacketSize);
   VAR_14->ep_out = FUNC_18(VAR_12);

   FUNC_9(&VAR_10->dev, "out_endpoint = %d\n", VAR_14->ep_out);
   FUNC_9(&VAR_10->dev, "Bulk out size is %d\n", VAR_14->ep_out_size);
  }
 }
 if (!VAR_14->ep_out_size || !VAR_14->ep_in_size) {
  FUNC_9(&VAR_10->dev, "Endpoints not found\n");
  goto dealloc;
 }
 if (!(VAR_14->rx_urb = FUNC_15(0, VAR_1))) {
  FUNC_9(&VAR_10->dev, "Rx URB allocation failed\n");
  goto dealloc;
 }
 if (!(VAR_14->tx_urb = FUNC_15(0, VAR_1))) {
  FUNC_9(&VAR_10->dev, "Tx URB allocation failed\n");
  goto dealloc;
 }
 VAR_14->ep_out_buf = FUNC_6(VAR_2, VAR_1);
 if (!VAR_14->ep_out_buf) {
  FUNC_9(&VAR_10->dev, "Could not allocate buffer\n");
  goto dealloc;
 }

 VAR_13 = FUNC_8(VAR_14, &VAR_8->dev);
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_1(VAR_13);
  goto err_add_card;
 }

 VAR_14->priv = VAR_13;

 VAR_13->hw_host_to_card = VAR_5;
 VAR_13->enter_deep_sleep = ((void*)0);
 VAR_13->exit_deep_sleep = ((void*)0);
 VAR_13->reset_deep_sleep_wakeup = ((void*)0);
 VAR_13->is_polling = 0;





 VAR_14->boot2_version = VAR_10->descriptor.bcdDevice;

 FUNC_19(VAR_10);
 FUNC_20(VAR_8, VAR_14);

 VAR_15 = FUNC_10(VAR_13, &VAR_10->dev, VAR_14->model,
       VAR_3, VAR_6);
 if (VAR_15)
  goto err_get_fw;

 return 0;

err_get_fw:
 FUNC_11(VAR_13);
err_add_card:
 FUNC_3(VAR_14);
dealloc:
 FUNC_2(VAR_14);

error:
 return VAR_15;
}
