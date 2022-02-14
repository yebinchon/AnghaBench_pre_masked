
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct urb {int interval; int number_of_packets; int transfer_buffer_length; TYPE_5__* iso_frame_desc; int * transfer_buffer; int transfer_flags; int pipe; int complete; struct flexcop_usb* context; int dev; } ;
struct flexcop_usb {int buffer_size; int fc_dev; struct urb** iso_urb; int * iso_buffer; int udev; int dma_addr; TYPE_4__* uintf; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {TYPE_3__* cur_altsetting; } ;
struct TYPE_8__ {TYPE_2__* endpoint; } ;
struct TYPE_6__ {int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


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
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct flexcop_usb*) ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 int * FUNC_8 (int ,int,int ,int *) ;
 struct urb* FUNC_9 (int,int ) ;
 int FUNC_10 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_11(struct flexcop_usb *VAR_14)
{
 u16 VAR_15 = FUNC_6(
  VAR_14->uintf->cur_altsetting->endpoint[0].desc.wMaxPacketSize);
 int VAR_16 = VAR_2 * VAR_1 *
  VAR_15, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_0("creating %d iso-urbs with %d frames each of %d bytes size = %d.\n",
        VAR_2,
   VAR_1, VAR_15, VAR_16);

 VAR_14->iso_buffer = FUNC_8(VAR_14->udev,
   VAR_16, VAR_11, &VAR_14->dma_addr);
 if (VAR_14->iso_buffer == ((void*)0))
  return -VAR_3;

 FUNC_7(VAR_14->iso_buffer, 0, VAR_16);
 VAR_14->buffer_size = VAR_16;


 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  VAR_14->iso_urb[VAR_17] = FUNC_9(VAR_1,
   VAR_10);
  if (VAR_14->iso_urb[VAR_17] == ((void*)0)) {
   VAR_19 = -VAR_3;
   goto urb_error;
  }
 }


 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  int VAR_21 = 0;
  struct urb *VAR_22 = VAR_14->iso_urb[VAR_17];
  FUNC_0("initializing and submitting urb no. %d (buf_offset: %d).\n",
         VAR_17, VAR_20);

  VAR_22->dev = VAR_14->udev;
  VAR_22->context = VAR_14;
  VAR_22->complete = VAR_13;
  VAR_22->pipe = VAR_0;
  VAR_22->transfer_flags = VAR_12;
  VAR_22->interval = 1;
  VAR_22->number_of_packets = VAR_1;
  VAR_22->transfer_buffer_length = VAR_15 * VAR_1;
  VAR_22->transfer_buffer = VAR_14->iso_buffer + VAR_20;

  VAR_20 += VAR_15 * VAR_1;
  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
   FUNC_0("urb no: %d, frame: %d, frame_offset: %d\n",
     VAR_17, VAR_18, VAR_21);
   VAR_22->iso_frame_desc[VAR_18].offset = VAR_21;
   VAR_22->iso_frame_desc[VAR_18].length = VAR_15;
   VAR_21 += VAR_15;
  }

  if ((VAR_19 = FUNC_10(VAR_14->iso_urb[VAR_17],VAR_10))) {
   FUNC_1("submitting urb %d failed with %d.", VAR_17, VAR_19);
   goto urb_error;
  }
  FUNC_0("submitted urb no. %d.\n",VAR_17);
 }


 FUNC_3(VAR_14->fc_dev, VAR_6 |
   VAR_7 | VAR_5 | VAR_4,
   VAR_8);
 FUNC_5(VAR_14->fc_dev, VAR_9);
 FUNC_2(VAR_14->fc_dev, 1, 1, 1);
 return 0;

urb_error:
 FUNC_4(VAR_14);
 return VAR_19;
}
