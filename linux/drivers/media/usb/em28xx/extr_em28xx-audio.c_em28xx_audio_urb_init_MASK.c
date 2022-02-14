
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_interface {size_t num_altsetting; TYPE_3__* altsetting; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; int bInterval; } ;
struct usb_device {int speed; } ;
struct urb {int transfer_flags; int interval; int number_of_packets; int transfer_buffer_length; TYPE_5__* iso_frame_desc; int complete; void* transfer_buffer; int pipe; struct em28xx* context; struct usb_device* dev; int transfer_dma; } ;
struct TYPE_10__ {int period; int num_urb; void** transfer_buffer; struct urb** urb; } ;
struct em28xx {TYPE_4__ adev; TYPE_6__* intf; int ifnum; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int offset; int length; } ;
struct TYPE_7__ {int bNumEndpoints; } ;
struct TYPE_9__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,int,int,...) ;
 int FUNC_3 (struct usb_device*,struct usb_endpoint_descriptor*) ;
 int FUNC_4 (struct em28xx*) ;
 int VAR_8 ;
 struct usb_device* FUNC_5 (TYPE_6__*) ;
 void* FUNC_6 (int,int,int ) ;
 int FUNC_7 (void**) ;
 void* FUNC_8 (struct usb_device*,int,int ,int *) ;
 struct urb* FUNC_9 (int,int ) ;
 int FUNC_10 (struct usb_endpoint_descriptor*) ;
 struct usb_interface* FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*,scalar_t__) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct em28xx *VAR_9)
{
 struct usb_interface *VAR_10;
 struct usb_endpoint_descriptor *VAR_11, *VAR_12 = ((void*)0);
 struct usb_device *VAR_13 = FUNC_5(VAR_9->intf);
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 u8 VAR_21;

 if (VAR_9->ifnum)
  VAR_21 = 1;
 else
  VAR_21 = 7;

 VAR_10 = FUNC_11(VAR_13, VAR_9->ifnum);

 if (VAR_10->num_altsetting <= VAR_21) {
  FUNC_1(&VAR_9->intf->dev, "alt %d doesn't exist on interface %d\n",
   VAR_9->ifnum, VAR_21);
  return -VAR_3;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->altsetting[VAR_21].desc.bNumEndpoints; VAR_14++) {
  VAR_11 = &VAR_10->altsetting[VAR_21].endpoint[VAR_14].desc;
  if (!FUNC_10(VAR_11))
   continue;
  if (VAR_11->bEndpointAddress == VAR_0) {
   VAR_12 = VAR_11;
   break;
  }
 }

 if (!VAR_12) {
  FUNC_1(&VAR_9->intf->dev, "Couldn't find an audio endpoint");
  return -VAR_3;
 }

 VAR_15 = FUNC_3(VAR_13, VAR_12);
 VAR_16 = 1 << (VAR_12->bInterval - 1);

 FUNC_2(&VAR_9->intf->dev,
   "Endpoint 0x%02x %s on intf %d alt %d interval = %d, size %d\n",
   VAR_0, FUNC_13(VAR_13->speed),
   VAR_9->ifnum, VAR_21, VAR_16, VAR_15);
 VAR_20 = FUNC_0(48000 * 2 * 2, 125 * VAR_16);





 VAR_17 = FUNC_0(VAR_20, VAR_15);
 if (VAR_17 > VAR_1)
  VAR_17 = VAR_1;






 VAR_19 = VAR_20 / VAR_17;






 VAR_18 = VAR_2;
 if (VAR_19 > VAR_15 * VAR_18)
  VAR_18 = FUNC_0(VAR_19, VAR_15);

 FUNC_2(&VAR_9->intf->dev,
   "Number of URBs: %d, with %d packets and %d size\n",
   VAR_17, VAR_18, VAR_19);


 VAR_9->adev.period = VAR_19 * VAR_18;



 VAR_9->adev.transfer_buffer = FUNC_6(VAR_17,
         sizeof(*VAR_9->adev.transfer_buffer),
         VAR_5);
 if (!VAR_9->adev.transfer_buffer)
  return -VAR_4;

 VAR_9->adev.urb = FUNC_6(VAR_17, sizeof(*VAR_9->adev.urb), VAR_5);
 if (!VAR_9->adev.urb) {
  FUNC_7(VAR_9->adev.transfer_buffer);
  return -VAR_4;
 }


 VAR_9->adev.num_urb = VAR_17;
 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
  struct urb *VAR_22;
  int VAR_23, VAR_24;
  void *VAR_25;

  VAR_22 = FUNC_9(VAR_18, VAR_5);
  if (!VAR_22) {
   FUNC_4(VAR_9);
   return -VAR_4;
  }
  VAR_9->adev.urb[VAR_14] = VAR_22;

  VAR_25 = FUNC_8(VAR_13, VAR_18 * VAR_15, VAR_5,
      &VAR_22->transfer_dma);
  if (!VAR_25) {
   FUNC_1(&VAR_9->intf->dev,
    "usb_alloc_coherent failed!\n");
   FUNC_4(VAR_9);
   return -VAR_4;
  }
  VAR_9->adev.transfer_buffer[VAR_14] = VAR_25;

  VAR_22->dev = VAR_13;
  VAR_22->context = VAR_9;
  VAR_22->pipe = FUNC_12(VAR_13, VAR_0);
  VAR_22->transfer_flags = VAR_6 | VAR_7;
  VAR_22->transfer_buffer = VAR_25;
  VAR_22->interval = VAR_16;
  VAR_22->complete = VAR_8;
  VAR_22->number_of_packets = VAR_18;
  VAR_22->transfer_buffer_length = VAR_15 * VAR_18;

  for (VAR_23 = VAR_24 = 0; VAR_23 < VAR_18; VAR_23++, VAR_24 += VAR_15) {
   VAR_22->iso_frame_desc[VAR_23].offset = VAR_24;
   VAR_22->iso_frame_desc[VAR_23].length = VAR_15;
  }
 }

 return 0;
}
