
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct port100 {int udev; TYPE_3__* out_urb; TYPE_3__* in_urb; int nfc_digital_dev; int skb_tailroom; scalar_t__ skb_headroom; int cmd_type; int cmd_complete_work; int cmd_cancel_done; struct usb_interface* interface; int out_urb_lock; } ;
struct TYPE_7__ {int transfer_flags; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct port100* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct port100*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (int *,char*,int,int) ;
 int VAR_11 ;
 int FUNC_13 (struct port100*) ;
 int FUNC_14 (struct port100*) ;
 int * VAR_12 ;
 int FUNC_15 (struct port100*,int ) ;
 int VAR_13 ;
 void* FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_18 (struct usb_endpoint_descriptor*) ;
 int FUNC_19 (TYPE_3__*,int ,int ,int *,int ,int *,struct port100*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (struct usb_interface*,struct port100*) ;
 int FUNC_25 (int ,int) ;

__attribute__((used)) static int FUNC_26(struct usb_interface *VAR_14,
    const struct usb_device_id *VAR_15)
{
 struct port100 *VAR_16;
 int VAR_17;
 struct usb_host_interface *VAR_18;
 struct usb_endpoint_descriptor *VAR_19;
 int VAR_20;
 int VAR_21;
 u16 VAR_22;
 u64 VAR_23;
 int VAR_24;

 VAR_16 = FUNC_2(&VAR_14->dev, sizeof(struct port100), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_5(&VAR_16->out_urb_lock);
 VAR_16->udev = FUNC_21(FUNC_4(VAR_14));
 VAR_16->interface = VAR_14;
 FUNC_24(VAR_14, VAR_16);

 VAR_20 = VAR_21 = 0;
 VAR_18 = VAR_14->cur_altsetting;
 for (VAR_24 = 0; VAR_24 < VAR_18->desc.bNumEndpoints; ++VAR_24) {
  VAR_19 = &VAR_18->endpoint[VAR_24].desc;

  if (!VAR_20 && FUNC_17(VAR_19))
   VAR_20 = VAR_19->bEndpointAddress;

  if (!VAR_21 && FUNC_18(VAR_19))
   VAR_21 = VAR_19->bEndpointAddress;
 }

 if (!VAR_20 || !VAR_21) {
  FUNC_11(&VAR_14->dev,
   "Could not find bulk-in or bulk-out endpoint\n");
  VAR_17 = -VAR_0;
  goto error;
 }

 VAR_16->in_urb = FUNC_16(0, VAR_2);
 VAR_16->out_urb = FUNC_16(0, VAR_2);

 if (!VAR_16->in_urb || !VAR_16->out_urb) {
  FUNC_11(&VAR_14->dev, "Could not allocate USB URBs\n");
  VAR_17 = -VAR_1;
  goto error;
 }

 FUNC_19(VAR_16->in_urb, VAR_16->udev,
     FUNC_23(VAR_16->udev, VAR_20),
     ((void*)0), 0, ((void*)0), VAR_16);
 FUNC_19(VAR_16->out_urb, VAR_16->udev,
     FUNC_25(VAR_16->udev, VAR_21),
     ((void*)0), 0, VAR_12, VAR_16);
 VAR_16->out_urb->transfer_flags = VAR_10;

 VAR_16->skb_headroom = VAR_7 +
       VAR_6;
 VAR_16->skb_tailroom = VAR_8;

 FUNC_3(&VAR_16->cmd_cancel_done);
 FUNC_0(&VAR_16->cmd_complete_work, VAR_13);




 VAR_23 = FUNC_13(VAR_16);
 if (!VAR_23) {
  FUNC_11(&VAR_14->dev,
   "Could not get supported command types\n");
  VAR_17 = -VAR_0;
  goto error;
 }

 if (FUNC_1(VAR_23, VAR_5))
  VAR_16->cmd_type = VAR_5;
 else
  VAR_16->cmd_type = VAR_4;

 VAR_17 = FUNC_15(VAR_16, VAR_16->cmd_type);
 if (VAR_17) {
  FUNC_11(&VAR_14->dev,
   "The device does not support command type %u\n",
   VAR_16->cmd_type);
  goto error;
 }

 VAR_22 = FUNC_14(VAR_16);
 if (!VAR_22)
  FUNC_11(&VAR_14->dev,
   "Could not get device firmware version\n");

 FUNC_12(&VAR_14->dev,
   "Sony NFC Port-100 Series attached (firmware v%x.%02x)\n",
   (VAR_22 & 0xFF00) >> 8, VAR_22 & 0xFF);

 VAR_16->nfc_digital_dev = FUNC_6(&VAR_11,
          VAR_9,
          VAR_3,
          VAR_16->skb_headroom,
          VAR_16->skb_tailroom);
 if (!VAR_16->nfc_digital_dev) {
  FUNC_11(&VAR_14->dev,
   "Could not allocate nfc_digital_dev\n");
  VAR_17 = -VAR_1;
  goto error;
 }

 FUNC_10(VAR_16->nfc_digital_dev, &VAR_14->dev);
 FUNC_9(VAR_16->nfc_digital_dev, VAR_16);

 VAR_17 = FUNC_8(VAR_16->nfc_digital_dev);
 if (VAR_17) {
  FUNC_11(&VAR_14->dev,
   "Could not register digital device\n");
  goto free_nfc_dev;
 }

 return 0;

free_nfc_dev:
 FUNC_7(VAR_16->nfc_digital_dev);

error:
 FUNC_20(VAR_16->in_urb);
 FUNC_20(VAR_16->out_urb);
 FUNC_22(VAR_16->udev);

 return VAR_17;
}
