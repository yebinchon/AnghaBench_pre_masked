
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int bcdDevice; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; } ;
struct usb_device {int dev; TYPE_3__ descriptor; } ;
struct lbtf_private {int dummy; } ;
struct if_usb_card {int boot2_version; int ep_out_buf; void* cmd_urb; void* tx_urb; void* rx_urb; void* ep_in_size; void* ep_out_size; void* ep_out; void* ep_in; struct usb_device* udev; int fw_wq; int fw_timeout; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct if_usb_card*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int ) ;
 struct if_usb_card* FUNC_4 (int,int ) ;
 struct lbtf_private* FUNC_5 (struct if_usb_card*,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,...) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ) ;
 void* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 void* FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_interface*,struct if_usb_card*) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_7,
   const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9;
 struct usb_host_interface *VAR_10;
 struct usb_endpoint_descriptor *VAR_11;
 struct lbtf_private *VAR_12;
 struct if_usb_card *VAR_13;
 int VAR_14;

 FUNC_6(VAR_3);
 VAR_9 = FUNC_2(VAR_7);

 VAR_13 = FUNC_4(sizeof(struct if_usb_card), VAR_1);
 if (!VAR_13)
  goto error;

 FUNC_10(&VAR_13->fw_timeout, VAR_5, 0);
 FUNC_1(&VAR_13->fw_wq);

 VAR_13->udev = VAR_9;
 VAR_10 = VAR_7->cur_altsetting;

 FUNC_8(&VAR_9->dev, "bcdUSB = 0x%X bDeviceClass = 0x%X"
       " bDeviceSubClass = 0x%X, bDeviceProtocol = 0x%X\n",
       FUNC_9(VAR_9->descriptor.bcdUSB),
       VAR_9->descriptor.bDeviceClass,
       VAR_9->descriptor.bDeviceSubClass,
       VAR_9->descriptor.bDeviceProtocol);

 for (VAR_14 = 0; VAR_14 < VAR_10->desc.bNumEndpoints; ++VAR_14) {
  VAR_11 = &VAR_10->endpoint[VAR_14].desc;
  if (FUNC_12(VAR_11)) {
   VAR_13->ep_in_size =
    FUNC_9(VAR_11->wMaxPacketSize);
   VAR_13->ep_in = FUNC_14(VAR_11);

   FUNC_8(&VAR_9->dev, "in_endpoint = %d\n",
    VAR_13->ep_in);
   FUNC_8(&VAR_9->dev, "Bulk in size is %d\n",
    VAR_13->ep_in_size);
  } else if (FUNC_13(VAR_11)) {
   VAR_13->ep_out_size =
    FUNC_9(VAR_11->wMaxPacketSize);
   VAR_13->ep_out = FUNC_14(VAR_11);

   FUNC_8(&VAR_9->dev, "out_endpoint = %d\n",
    VAR_13->ep_out);
   FUNC_8(&VAR_9->dev, "Bulk out size is %d\n",
    VAR_13->ep_out_size);
  }
 }
 if (!VAR_13->ep_out_size || !VAR_13->ep_in_size) {
  FUNC_8(&VAR_9->dev, "Endpoints not found\n");

  goto dealloc;
 }

 VAR_13->rx_urb = FUNC_11(0, VAR_1);
 if (!VAR_13->rx_urb)
  goto dealloc;

 VAR_13->tx_urb = FUNC_11(0, VAR_1);
 if (!VAR_13->tx_urb)
  goto dealloc;

 VAR_13->cmd_urb = FUNC_11(0, VAR_1);
 if (!VAR_13->cmd_urb)
  goto dealloc;

 VAR_13->ep_out_buf = FUNC_3(VAR_4,
        VAR_1);
 if (!VAR_13->ep_out_buf) {
  FUNC_8(&VAR_9->dev, "Could not allocate buffer\n");
  goto dealloc;
 }

 VAR_13->boot2_version = VAR_9->descriptor.bcdDevice;
 VAR_12 = FUNC_5(VAR_13, &VAR_9->dev, &VAR_6);
 if (!VAR_12)
  goto dealloc;

 FUNC_15(VAR_9);
 FUNC_16(VAR_7, VAR_13);

 return 0;

dealloc:
 FUNC_0(VAR_13);
error:
FUNC_7(VAR_2);
 return -VAR_0;
}
