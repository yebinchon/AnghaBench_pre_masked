
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct usb_interface {struct device dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; int bmAttributes; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_13__ {char* name; char* default_trigger; int brightness_set; } ;
struct TYPE_11__ {int bRequestType; void* wLength; int bRequest; } ;
struct TYPE_10__ {int bRequestType; void* wLength; int bRequest; } ;
struct redrat3_dev {int carrier; struct usb_device* udev; TYPE_6__ led; int rc; int flash_in_buf; TYPE_4__ flash_control; void* flash_urb; int learn_buf; TYPE_3__ learn_control; void* learn_urb; int flash; TYPE_5__* wide_urb; int dma_in; int bulk_in_buf; TYPE_5__* narrow_urb; struct usb_endpoint_descriptor* ep_out; struct usb_endpoint_descriptor* ep_narrow; struct device* dev; } ;
struct TYPE_12__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 struct redrat3_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_13 ;
 int FUNC_9 (struct redrat3_dev*,struct usb_device*) ;
 int FUNC_10 (struct redrat3_dev*) ;
 int FUNC_11 (struct redrat3_dev*) ;
 int VAR_14 ;
 int FUNC_12 (struct redrat3_dev*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (struct redrat3_dev*) ;
 int FUNC_14 (struct usb_device*,int ,int ,int *) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_5__*,struct usb_device*,int,int ,int ,int ,struct redrat3_dev*) ;
 int FUNC_17 (void*,struct usb_device*,int ,unsigned char*,int *,int,int ,struct redrat3_dev*) ;
 int FUNC_18 (struct usb_device*,int) ;
 int FUNC_19 (struct usb_device*,int ) ;
 int FUNC_20 (struct usb_interface*,struct redrat3_dev*) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_17,
        const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_4(VAR_17);
 struct device *VAR_20 = &VAR_17->dev;
 struct usb_host_interface *VAR_21;
 struct redrat3_dev *VAR_22;
 struct usb_endpoint_descriptor *VAR_23;
 struct usb_endpoint_descriptor *VAR_24 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_25 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_26 = ((void*)0);
 u8 VAR_27, VAR_28;
 int VAR_29, VAR_30;
 int VAR_31 = -VAR_1;

 VAR_21 = VAR_17->cur_altsetting;


 for (VAR_30 = 0; VAR_30 < VAR_21->desc.bNumEndpoints; ++VAR_30) {
  VAR_23 = &VAR_21->endpoint[VAR_30].desc;
  VAR_27 = VAR_23->bEndpointAddress;
  VAR_28 = VAR_23->bmAttributes;

  if (((VAR_27 & VAR_10) == VAR_8) &&
      ((VAR_28 & VAR_11) ==
       VAR_12)) {
   FUNC_2(VAR_20, "found bulk-in endpoint at 0x%02x\n",
    VAR_23->bEndpointAddress);

   if (VAR_23->bEndpointAddress == VAR_5)
    VAR_24 = VAR_23;
   if (VAR_23->bEndpointAddress == VAR_6)
    VAR_25 = VAR_23;
  }

  if ((VAR_26 == ((void*)0)) &&
      ((VAR_27 & VAR_10) == VAR_9) &&
      ((VAR_28 & VAR_11) ==
       VAR_12)) {
   FUNC_2(VAR_20, "found bulk-out endpoint at 0x%02x\n",
    VAR_23->bEndpointAddress);
   VAR_26 = VAR_23;
  }
 }

 if (!VAR_24 || !VAR_26 || !VAR_25) {
  FUNC_3(VAR_20, "Couldn't find all endpoints\n");
  VAR_31 = -VAR_0;
  goto no_endpoints;
 }


 VAR_22 = FUNC_5(sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  goto no_endpoints;

 VAR_22->dev = &VAR_17->dev;
 VAR_22->ep_narrow = VAR_24;
 VAR_22->ep_out = VAR_26;
 VAR_22->udev = VAR_19;


 VAR_22->narrow_urb = FUNC_15(0, VAR_2);
 if (!VAR_22->narrow_urb)
  goto redrat_free;

 VAR_22->wide_urb = FUNC_15(0, VAR_2);
 if (!VAR_22->wide_urb)
  goto redrat_free;

 VAR_22->bulk_in_buf = FUNC_14(VAR_19,
  FUNC_6(VAR_24->wMaxPacketSize),
  VAR_2, &VAR_22->dma_in);
 if (!VAR_22->bulk_in_buf)
  goto redrat_free;

 VAR_29 = FUNC_18(VAR_19, VAR_24->bEndpointAddress);
 FUNC_16(VAR_22->narrow_urb, VAR_19, VAR_29, VAR_22->bulk_in_buf,
  FUNC_6(VAR_24->wMaxPacketSize),
  VAR_14, VAR_22);
 VAR_22->narrow_urb->transfer_dma = VAR_22->dma_in;
 VAR_22->narrow_urb->transfer_flags |= VAR_7;

 VAR_29 = FUNC_18(VAR_19, VAR_25->bEndpointAddress);
 FUNC_16(VAR_22->wide_urb, VAR_19, VAR_29, VAR_22->bulk_in_buf,
  FUNC_6(VAR_24->wMaxPacketSize),
  VAR_14, VAR_22);
 VAR_22->wide_urb->transfer_dma = VAR_22->dma_in;
 VAR_22->wide_urb->transfer_flags |= VAR_7;

 FUNC_13(VAR_22);
 FUNC_11(VAR_22);


 VAR_22->carrier = 38000;

 FUNC_0(&VAR_22->flash, 0);
 VAR_22->flash_urb = FUNC_15(0, VAR_2);
 if (!VAR_22->flash_urb)
  goto redrat_free;


 VAR_22->learn_urb = FUNC_15(0, VAR_2);
 if (!VAR_22->learn_urb)
  goto redrat_free;


 VAR_22->learn_control.bRequestType = 0xc0;
 VAR_22->learn_control.bRequest = VAR_4;
 VAR_22->learn_control.wLength = FUNC_1(1);

 FUNC_17(VAR_22->learn_urb, VAR_19, FUNC_19(VAR_19, 0),
   (unsigned char *)&VAR_22->learn_control,
   &VAR_22->learn_buf, sizeof(VAR_22->learn_buf),
   VAR_15, VAR_22);


 VAR_22->flash_control.bRequestType = 0xc0;
 VAR_22->flash_control.bRequest = VAR_3;
 VAR_22->flash_control.wLength = FUNC_1(1);

 FUNC_17(VAR_22->flash_urb, VAR_19, FUNC_19(VAR_19, 0),
   (unsigned char *)&VAR_22->flash_control,
   &VAR_22->flash_in_buf, sizeof(VAR_22->flash_in_buf),
   VAR_16, VAR_22);


 VAR_22->led.name = "redrat3:red:feedback";
 VAR_22->led.default_trigger = "rc-feedback";
 VAR_22->led.brightness_set = VAR_13;
 VAR_31 = FUNC_7(&VAR_17->dev, &VAR_22->led);
 if (VAR_31)
  goto redrat_free;

 VAR_22->rc = FUNC_12(VAR_22);
 if (!VAR_22->rc) {
  VAR_31 = -VAR_1;
  goto led_free;
 }


 VAR_31 = FUNC_10(VAR_22);
 if (VAR_31 < 0)
  goto led_free;


 FUNC_20(VAR_17, VAR_22);

 return 0;

led_free:
 FUNC_8(&VAR_22->led);
redrat_free:
 FUNC_9(VAR_22, VAR_22->udev);

no_endpoints:
 return VAR_31;
}
