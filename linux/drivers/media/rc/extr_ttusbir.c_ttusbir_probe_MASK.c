
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {int num_altsetting; int dev; TYPE_4__* altsetting; } ;
struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct urb {int interval; int transfer_flags; int number_of_packets; int transfer_buffer_length; int transfer_dma; void* transfer_buffer; TYPE_1__* iso_frame_desc; int complete; int pipe; struct ttusbir* context; int dev; } ;
struct TYPE_11__ {char* name; char* default_trigger; int brightness_get; int brightness_set; } ;
struct ttusbir {int bulk_out_endp; int iso_in_endp; int* bulk_buffer; int is_led_on; int led_on; struct urb* bulk_urb; int udev; struct urb** urb; TYPE_5__ led; int * dev; int phys; int led_complete; struct rc_dev* rc; } ;
struct TYPE_8__ {int * parent; } ;
struct rc_dev {int min_timeout; int timeout; int max_timeout; int rx_resolution; int map_name; int driver_name; struct ttusbir* priv; int allowed_protocols; TYPE_2__ dev; int input_id; int input_phys; int device_name; } ;
struct TYPE_10__ {TYPE_3__* endpoint; struct usb_interface_descriptor desc; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_7__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct ttusbir*) ;
 struct ttusbir* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 struct rc_dev* FUNC_8 (int ) ;
 int FUNC_9 (struct rc_dev*) ;
 int FUNC_10 (struct rc_dev*) ;
 int FUNC_11 (struct rc_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_12 (int ,int,int ,int *) ;
 void* FUNC_13 (int,int ) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_16 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_17 (struct usb_endpoint_descriptor*) ;
 int FUNC_18 (struct urb*,int ,int ,int*,int,int ,struct ttusbir*) ;
 int FUNC_19 (int ,int,void*,int ) ;
 int FUNC_20 (struct urb*) ;
 int FUNC_21 (struct urb*) ;
 int FUNC_22 (int ,int ,int) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (struct usb_interface*,struct ttusbir*) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (struct urb*,int ) ;
 int FUNC_28 (int ,int *) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_17,
    const struct usb_device_id *VAR_18)
{
 struct ttusbir *VAR_19;
 struct usb_interface_descriptor *VAR_20;
 struct usb_endpoint_descriptor *VAR_21;
 struct rc_dev *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 int VAR_26 = -1;

 VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_4);
 VAR_22 = FUNC_8(VAR_8);
 if (!VAR_19 || !VAR_22) {
  VAR_25 = -VAR_3;
  goto out;
 }


 for (VAR_23 = 0; VAR_23 < VAR_17->num_altsetting && VAR_26 == -1; VAR_23++) {
  int VAR_27, VAR_28 = -1, VAR_29 = -1;

  VAR_20 = &VAR_17->altsetting[VAR_23].desc;

  for (VAR_24 = 0; VAR_24 < VAR_20->bNumEndpoints; VAR_24++) {
   VAR_21 = &VAR_17->altsetting[VAR_23].endpoint[VAR_24].desc;
   VAR_27 = FUNC_5(VAR_21->wMaxPacketSize);
   if (FUNC_14(VAR_21) &&
     FUNC_17(VAR_21) &&
     VAR_27 == 0x10)
    VAR_29 = VAR_24;
   else if (FUNC_15(VAR_21) &&
     FUNC_16(VAR_21) &&
     VAR_27 == 0x20)
    VAR_28 = VAR_24;

   if (VAR_28 != -1 && VAR_29 != -1) {
    VAR_19->bulk_out_endp = VAR_28;
    VAR_19->iso_in_endp = VAR_29;
    VAR_26 = VAR_23;
    break;
   }
  }
 }

 if (VAR_26 == -1) {
  FUNC_1(&VAR_17->dev, "cannot find expected altsetting\n");
  VAR_25 = -VAR_2;
  goto out;
 }

 VAR_19->dev = &VAR_17->dev;
 VAR_19->udev = FUNC_2(VAR_17);
 VAR_19->rc = VAR_22;

 VAR_25 = FUNC_24(VAR_19->udev, 0, VAR_26);
 if (VAR_25)
  goto out;

 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {
  struct urb *VAR_30 = FUNC_13(8, VAR_4);
  void *VAR_31;

  if (!VAR_30) {
   VAR_25 = -VAR_3;
   goto out;
  }

  VAR_30->dev = VAR_19->udev;
  VAR_30->context = VAR_19;
  VAR_30->pipe = FUNC_23(VAR_19->udev, VAR_19->iso_in_endp);
  VAR_30->interval = 1;
  VAR_31 = FUNC_12(VAR_19->udev, 128, VAR_4,
      &VAR_30->transfer_dma);
  if (!VAR_31) {
   FUNC_20(VAR_30);
   VAR_25 = -VAR_3;
   goto out;
  }
  VAR_30->transfer_flags = VAR_12 | VAR_11;
  VAR_30->transfer_buffer = VAR_31;
  VAR_30->complete = VAR_16;
  VAR_30->number_of_packets = 8;
  VAR_30->transfer_buffer_length = 128;

  for (VAR_24 = 0; VAR_24 < 8; VAR_24++) {
   VAR_30->iso_frame_desc[VAR_24].offset = VAR_24 * 16;
   VAR_30->iso_frame_desc[VAR_24].length = 16;
  }

  VAR_19->urb[VAR_23] = VAR_30;
 }

 VAR_19->bulk_urb = FUNC_13(0, VAR_4);
 if (!VAR_19->bulk_urb) {
  VAR_25 = -VAR_3;
  goto out;
 }

 VAR_19->bulk_buffer[0] = 0xaa;
 VAR_19->bulk_buffer[1] = 0x01;
 VAR_19->bulk_buffer[2] = 0x05;
 VAR_19->bulk_buffer[3] = 0x01;

 FUNC_18(VAR_19->bulk_urb, VAR_19->udev, FUNC_26(VAR_19->udev,
  VAR_19->bulk_out_endp), VAR_19->bulk_buffer, sizeof(VAR_19->bulk_buffer),
      VAR_15, VAR_19);

 VAR_19->led.name = "ttusbir:green:power";
 VAR_19->led.default_trigger = "rc-feedback";
 VAR_19->led.brightness_set = VAR_14;
 VAR_19->led.brightness_get = VAR_13;
 VAR_19->is_led_on = VAR_19->led_on = 1;
 FUNC_0(&VAR_19->led_complete, 0);
 VAR_25 = FUNC_6(&VAR_17->dev, &VAR_19->led);
 if (VAR_25)
  goto out;

 FUNC_22(VAR_19->udev, VAR_19->phys, sizeof(VAR_19->phys));

 VAR_22->device_name = VAR_0;
 VAR_22->input_phys = VAR_19->phys;
 FUNC_28(VAR_19->udev, &VAR_22->input_id);
 VAR_22->dev.parent = &VAR_17->dev;
 VAR_22->allowed_protocols = VAR_10;
 VAR_22->priv = VAR_19;
 VAR_22->driver_name = VAR_1;
 VAR_22->map_name = VAR_9;
 VAR_22->min_timeout = 1;
 VAR_22->timeout = VAR_5;
 VAR_22->max_timeout = 10 * VAR_5;





 VAR_22->rx_resolution = VAR_6;

 VAR_25 = FUNC_10(VAR_22);
 if (VAR_25) {
  FUNC_1(&VAR_17->dev, "failed to register rc device %d\n", VAR_25);
  goto out2;
 }

 FUNC_25(VAR_17, VAR_19);

 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {
  VAR_25 = FUNC_27(VAR_19->urb[VAR_23], VAR_4);
  if (VAR_25) {
   FUNC_1(VAR_19->dev, "failed to submit urb %d\n", VAR_25);
   goto out3;
  }
 }

 return 0;
out3:
 FUNC_11(VAR_22);
 VAR_22 = ((void*)0);
out2:
 FUNC_7(&VAR_19->led);
out:
 if (VAR_19) {
  for (VAR_23 = 0; VAR_23 < VAR_7 && VAR_19->urb[VAR_23]; VAR_23++) {
   struct urb *VAR_32 = VAR_19->urb[VAR_23];

   FUNC_21(VAR_32);
   FUNC_19(VAR_19->udev, 128, VAR_32->transfer_buffer,
       VAR_32->transfer_dma);
   FUNC_20(VAR_32);
  }
  FUNC_21(VAR_19->bulk_urb);
  FUNC_20(VAR_19->bulk_urb);
  FUNC_3(VAR_19);
 }
 FUNC_9(VAR_22);

 return VAR_25;
}
