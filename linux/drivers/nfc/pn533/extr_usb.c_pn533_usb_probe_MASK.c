
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {int driver_info; } ;
struct pn533_usb_phy {unsigned char* ack_buffer; TYPE_3__* udev; void* ack_urb; void* out_urb; void* in_urb; struct pn533* priv; struct usb_interface* interface; } ;
struct pn533_frame_ops {int dummy; } ;
struct pn533 {int dummy; } ;
typedef enum pn533_protocol_type { ____Placeholder_pn533_protocol_type } pn533_protocol_type ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pn533*) ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct pn533*) ;
 struct pn533_usb_phy* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,char*,...) ;
 struct pn533_frame_ops VAR_11 ;
 int FUNC_7 (struct pn533_usb_phy*) ;
 int FUNC_8 (struct pn533*) ;
 struct pn533* FUNC_9 (int,int ,int,struct pn533_usb_phy*,int *,struct pn533_frame_ops*,int *,int *) ;
 int * VAR_12 ;
 int FUNC_10 (struct pn533*) ;
 void* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (void*,TYPE_3__*,int ,unsigned char*,int,int *,struct pn533_usb_phy*) ;
 int FUNC_15 (void*) ;
 TYPE_3__* FUNC_16 (int ) ;
 int FUNC_17 (void*) ;
 int VAR_13 ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (struct usb_interface*,struct pn533_usb_phy*) ;
 int FUNC_21 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_22(struct usb_interface *VAR_14,
   const struct usb_device_id *VAR_15)
{
 struct pn533 *VAR_16;
 struct pn533_usb_phy *VAR_17;
 struct usb_host_interface *VAR_18;
 struct usb_endpoint_descriptor *VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = -VAR_2;
 int VAR_23;
 u32 VAR_24;
 enum pn533_protocol_type VAR_25 = VAR_7;
 struct pn533_frame_ops *VAR_26 = ((void*)0);
 unsigned char *VAR_27;
 int VAR_28 = VAR_5 +
    VAR_9 +
    VAR_10;

 VAR_17 = FUNC_2(&VAR_14->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_27 = FUNC_5(VAR_28, VAR_3);
 if (!VAR_27)
  return -VAR_2;

 VAR_17->udev = FUNC_16(FUNC_3(VAR_14));
 VAR_17->interface = VAR_14;

 VAR_18 = VAR_14->cur_altsetting;
 for (VAR_23 = 0; VAR_23 < VAR_18->desc.bNumEndpoints; ++VAR_23) {
  VAR_19 = &VAR_18->endpoint[VAR_23].desc;

  if (!VAR_20 && FUNC_12(VAR_19))
   VAR_20 = VAR_19->bEndpointAddress;

  if (!VAR_21 && FUNC_13(VAR_19))
   VAR_21 = VAR_19->bEndpointAddress;
 }

 if (!VAR_20 || !VAR_21) {
  FUNC_6(&VAR_14->dev,
   "Could not find bulk-in or bulk-out endpoint\n");
  VAR_22 = -VAR_1;
  goto error;
 }

 VAR_17->in_urb = FUNC_11(0, VAR_3);
 VAR_17->out_urb = FUNC_11(0, VAR_3);
 VAR_17->ack_urb = FUNC_11(0, VAR_3);

 if (!VAR_17->in_urb || !VAR_17->out_urb || !VAR_17->ack_urb)
  goto error;

 FUNC_14(VAR_17->in_urb, VAR_17->udev,
     FUNC_19(VAR_17->udev, VAR_20),
     VAR_27, VAR_28, ((void*)0), VAR_17);

 FUNC_14(VAR_17->out_urb, VAR_17->udev,
     FUNC_21(VAR_17->udev, VAR_21),
     ((void*)0), 0, VAR_12, VAR_17);
 FUNC_14(VAR_17->ack_urb, VAR_17->udev,
     FUNC_21(VAR_17->udev, VAR_21),
     ((void*)0), 0, VAR_12, VAR_17);

 switch (VAR_15->driver_info) {
 case 128:
  VAR_24 = VAR_4;
  break;

 case 129:
  VAR_24 = VAR_6;
  break;

 case 130:
  VAR_24 = VAR_6;
  VAR_26 = &VAR_11;
  VAR_25 = VAR_8,

  VAR_22 = FUNC_7(VAR_17);
  if (VAR_22 < 0) {
   FUNC_6(&VAR_14->dev,
    "Couldn't poweron the reader (error %d)\n", VAR_22);
   goto error;
  }
  break;

 default:
  FUNC_6(&VAR_14->dev, "Unknown device type %lu\n",
   VAR_15->driver_info);
  VAR_22 = -VAR_0;
  goto error;
 }

 VAR_16 = FUNC_9(VAR_15->driver_info, VAR_24, VAR_25,
     VAR_17, &VAR_13, VAR_26,
     &VAR_17->udev->dev, &VAR_14->dev);

 if (FUNC_0(VAR_16)) {
  VAR_22 = FUNC_1(VAR_16);
  goto error;
 }

 VAR_17->priv = VAR_16;

 VAR_22 = FUNC_8(VAR_16);
 if (VAR_22)
  goto err_deregister;

 FUNC_20(VAR_14, VAR_17);

 return 0;

err_deregister:
 FUNC_10(VAR_17->priv);
error:
 FUNC_17(VAR_17->in_urb);
 FUNC_17(VAR_17->out_urb);
 FUNC_17(VAR_17->ack_urb);

 FUNC_15(VAR_17->in_urb);
 FUNC_15(VAR_17->out_urb);
 FUNC_15(VAR_17->ack_urb);
 FUNC_18(VAR_17->udev);
 FUNC_4(VAR_27);
 FUNC_4(VAR_17->ack_buffer);

 return VAR_22;
}
