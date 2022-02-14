
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct usb_device {int dev; } ;
struct urb {int interval; int transfer_flags; int number_of_packets; TYPE_4__* iso_frame_desc; scalar_t__ start_frame; struct pwc_device* context; int complete; int * transfer_buffer; int transfer_dma; int transfer_buffer_length; int pipe; struct usb_device* dev; } ;
struct pwc_device {int vmax_packet_size; int vendpoint; struct urb** urbs; int valternate; struct usb_device* udev; int vframes; int pixfmt; int height; int width; scalar_t__ visoc_errors; scalar_t__ vframe_count; int * fill_buf; scalar_t__ vlast_packet_size; scalar_t__ vsync; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_6__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,struct urb*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (struct pwc_device*) ;
 int VAR_11 ;
 int FUNC_6 (struct pwc_device*,int ,int ,int ,int ,int*,int) ;
 struct urb* FUNC_7 (int,int ) ;
 struct usb_host_interface* FUNC_8 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (struct usb_device*,int) ;
 int FUNC_11 (struct usb_device*,int ,int ) ;
 int FUNC_12 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_13(struct pwc_device *VAR_12)
{
 struct usb_device *VAR_13;
 struct urb *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct usb_interface *VAR_18;
 struct usb_host_interface *VAR_19 = ((void*)0);
 int VAR_20 = 0;

 VAR_12->vsync = 0;
 VAR_12->vlast_packet_size = 0;
 VAR_12->fill_buf = ((void*)0);
 VAR_12->vframe_count = 0;
 VAR_12->visoc_errors = 0;
 VAR_13 = VAR_12->udev;

retry:


 VAR_17 = FUNC_6(VAR_12, VAR_12->width, VAR_12->height, VAR_12->pixfmt,
     VAR_12->vframes, &VAR_20, 1);


 VAR_18 = FUNC_9(VAR_13, 0);
 if (VAR_18)
  VAR_19 = FUNC_8(VAR_18, VAR_12->valternate);
 if (!VAR_19)
  return -VAR_0;


 VAR_12->vmax_packet_size = -1;
 for (VAR_15 = 0; VAR_15 < VAR_19->desc.bNumEndpoints; VAR_15++) {
  if ((VAR_19->endpoint[VAR_15].desc.bEndpointAddress & 0xF) == VAR_12->vendpoint) {
   VAR_12->vmax_packet_size = FUNC_3(VAR_19->endpoint[VAR_15].desc.wMaxPacketSize);
   break;
  }
 }

 if (VAR_12->vmax_packet_size < 0 || VAR_12->vmax_packet_size > VAR_7) {
  FUNC_2("Failed to find packet size for video endpoint in current alternate setting.\n");
  return -VAR_1;
 }


 FUNC_1("Setting alternate interface %d\n", VAR_12->valternate);
 VAR_17 = FUNC_11(VAR_12->udev, 0, VAR_12->valternate);
 if (VAR_17 == -VAR_3 && VAR_20 < 3) {
  VAR_20++;
  goto retry;
 }
 if (VAR_17 < 0)
  return VAR_17;


 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_14 = FUNC_7(VAR_6, VAR_4);
  if (VAR_14 == ((void*)0)) {
   FUNC_5(VAR_12);
   return -VAR_2;
  }
  VAR_12->urbs[VAR_15] = VAR_14;
  FUNC_0("Allocated URB at 0x%p\n", VAR_14);

  VAR_14->interval = 1;
  VAR_14->dev = VAR_13;
  VAR_14->pipe = FUNC_10(VAR_13, VAR_12->vendpoint);
  VAR_14->transfer_flags = VAR_9 | VAR_10;
  VAR_14->transfer_buffer_length = VAR_5;
  VAR_14->transfer_buffer = FUNC_4(&VAR_13->dev,
           VAR_14->transfer_buffer_length,
           &VAR_14->transfer_dma);
  if (VAR_14->transfer_buffer == ((void*)0)) {
   FUNC_2("Failed to allocate urb buffer %d\n", VAR_15);
   FUNC_5(VAR_12);
   return -VAR_2;
  }
  VAR_14->complete = VAR_11;
  VAR_14->context = VAR_12;
  VAR_14->start_frame = 0;
  VAR_14->number_of_packets = VAR_6;
  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
   VAR_14->iso_frame_desc[VAR_16].offset = VAR_16 * VAR_7;
   VAR_14->iso_frame_desc[VAR_16].length = VAR_12->vmax_packet_size;
  }
 }


 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_17 = FUNC_12(VAR_12->urbs[VAR_15], VAR_4);
  if (VAR_17 == -VAR_3 && VAR_20 < 3) {
   VAR_20++;
   FUNC_5(VAR_12);
   goto retry;
  }
  if (VAR_17) {
   FUNC_2("isoc_init() submit_urb %d failed with error %d\n", VAR_15, VAR_17);
   FUNC_5(VAR_12);
   return VAR_17;
  }
  FUNC_0("URB 0x%p submitted.\n", VAR_12->urbs[VAR_15]);
 }


 FUNC_1("<< pwc_isoc_init()\n");
 return 0;
}
