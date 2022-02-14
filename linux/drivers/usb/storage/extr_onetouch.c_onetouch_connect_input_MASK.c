
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_onetouch {int data_dma; int data; TYPE_6__* irq; struct input_dev* dev; int phys; int name; struct usb_device* udev; } ;
struct TYPE_10__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct TYPE_12__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; int dev; TYPE_4__ descriptor; scalar_t__ manufacturer; } ;
struct us_data {int suspend_resume_hook; struct usb_onetouch* extra; int extra_destructor; TYPE_1__* pusb_intf; struct usb_device* pusb_dev; } ;
struct TYPE_13__ {int * parent; } ;
struct input_dev {int close; int open; int keybit; int evbit; TYPE_5__ dev; int id; int phys; int name; } ;
struct TYPE_14__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_11__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_9__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 struct input_dev* FUNC_1 () ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,struct usb_onetouch*) ;
 int FUNC_5 (struct usb_onetouch*) ;
 struct usb_onetouch* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,char*,int,int) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,scalar_t__,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_device*,int ,int ,int *) ;
 TYPE_6__* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct usb_endpoint_descriptor*) ;
 int FUNC_17 (TYPE_6__*,struct usb_device*,int,int ,int,int ,struct usb_onetouch*,int ) ;
 int FUNC_18 (struct usb_device*,int ,int ,int ) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (struct usb_device*,int ,int) ;
 int FUNC_21 (struct usb_device*,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_22 (int) ;
 int FUNC_23 (struct usb_device*,int ) ;
 int FUNC_24 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_25(struct us_data *VAR_12)
{
 struct usb_device *VAR_13 = VAR_12->pusb_dev;
 struct usb_host_interface *VAR_14;
 struct usb_endpoint_descriptor *VAR_15;
 struct usb_onetouch *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18, VAR_19;
 int VAR_20 = -VAR_1;

 VAR_14 = VAR_12->pusb_intf->cur_altsetting;

 if (VAR_14->desc.bNumEndpoints != 3)
  return -VAR_0;

 VAR_15 = &VAR_14->endpoint[2].desc;
 if (!FUNC_16(VAR_15))
  return -VAR_0;

 VAR_18 = FUNC_23(VAR_13, VAR_15->bEndpointAddress);
 VAR_19 = FUNC_21(VAR_13, VAR_18, FUNC_22(VAR_18));
 VAR_19 = FUNC_8(VAR_19, VAR_5);

 VAR_16 = FUNC_6(sizeof(struct usb_onetouch), VAR_3);
 VAR_17 = FUNC_1();
 if (!VAR_16 || !VAR_17)
  goto fail1;

 VAR_16->data = FUNC_14(VAR_13, VAR_5,
         VAR_3, &VAR_16->data_dma);
 if (!VAR_16->data)
  goto fail1;

 VAR_16->irq = FUNC_15(0, VAR_3);
 if (!VAR_16->irq)
  goto fail2;

 VAR_16->udev = VAR_13;
 VAR_16->dev = VAR_17;

 if (VAR_13->manufacturer)
  FUNC_12(VAR_16->name, VAR_13->manufacturer,
   sizeof(VAR_16->name));
 if (VAR_13->product) {
  if (VAR_13->manufacturer)
   FUNC_11(VAR_16->name, " ", sizeof(VAR_16->name));
  FUNC_11(VAR_16->name, VAR_13->product, sizeof(VAR_16->name));
 }

 if (!FUNC_13(VAR_16->name))
  FUNC_10(VAR_16->name, sizeof(VAR_16->name),
    "Maxtor Onetouch %04x:%04x",
    FUNC_7(VAR_13->descriptor.idVendor),
    FUNC_7(VAR_13->descriptor.idProduct));

 FUNC_20(VAR_13, VAR_16->phys, sizeof(VAR_16->phys));
 FUNC_11(VAR_16->phys, "/input0", sizeof(VAR_16->phys));

 VAR_17->name = VAR_16->name;
 VAR_17->phys = VAR_16->phys;
 FUNC_24(VAR_13, &VAR_17->id);
 VAR_17->dev.parent = &VAR_13->dev;

 FUNC_9(VAR_2, VAR_17->evbit);
 FUNC_9(VAR_4, VAR_17->keybit);
 FUNC_0(0, VAR_17->keybit);

 FUNC_4(VAR_17, VAR_16);

 VAR_17->open = VAR_10;
 VAR_17->close = VAR_8;

 FUNC_17(VAR_16->irq, VAR_13, VAR_18, VAR_16->data, VAR_19,
    VAR_9, VAR_16, VAR_15->bInterval);
 VAR_16->irq->transfer_dma = VAR_16->data_dma;
 VAR_16->irq->transfer_flags |= VAR_6;

 VAR_12->extra_destructor = VAR_7;
 VAR_12->extra = VAR_16;




 VAR_20 = FUNC_3(VAR_16->dev);
 if (VAR_20)
  goto fail3;

 return 0;

 fail3: FUNC_19(VAR_16->irq);
 fail2: FUNC_18(VAR_13, VAR_5,
     VAR_16->data, VAR_16->data_dma);
 fail1: FUNC_5(VAR_16);
 FUNC_2(VAR_17);
 return VAR_20;
}
