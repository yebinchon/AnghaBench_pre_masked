
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bInterval; } ;
struct usb_device {scalar_t__ speed; } ;
struct urb {int pipe; unsigned int number_of_packets; long transfer_buffer_length; unsigned int transfer_buffer; int interval; int transfer_flags; int complete; TYPE_1__* iso_frame_desc; int transfer_dma; struct usb_device* dev; } ;
struct TYPE_2__ {unsigned int offset; scalar_t__ length; } ;


 unsigned int FUNC_0 (long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int,int ,long) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct usb_device*,int) ;
 unsigned int FUNC_4 (struct usb_device*,unsigned int,int ,int *) ;
 struct urb* FUNC_5 (unsigned int,int ) ;
 unsigned int FUNC_6 (struct usb_endpoint_descriptor*) ;
 unsigned int FUNC_7 (struct usb_endpoint_descriptor*) ;
 int FUNC_8 (struct urb*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct urb *FUNC_10(
 struct usb_device *VAR_6,
 int VAR_7,
 struct usb_endpoint_descriptor *VAR_8,
 long VAR_9,
 unsigned VAR_10
)
{
 struct urb *VAR_11;
 unsigned VAR_12, VAR_13, VAR_14;

 if (VAR_9 < 0 || !VAR_8)
  return ((void*)0);

 VAR_13 = FUNC_6(VAR_8);
 if (VAR_6->speed >= VAR_4)
  VAR_13 *= FUNC_3(VAR_6, VAR_7);
 else
  VAR_13 *= FUNC_7(VAR_8);

 VAR_14 = FUNC_0(VAR_9, VAR_13);

 VAR_11 = FUNC_5(VAR_14, VAR_0);
 if (!VAR_11)
  return VAR_11;
 VAR_11->dev = VAR_6;
 VAR_11->pipe = VAR_7;

 VAR_11->number_of_packets = VAR_14;
 VAR_11->transfer_buffer_length = VAR_9;
 VAR_11->transfer_buffer = FUNC_4(VAR_6, VAR_9 + VAR_10,
       VAR_0,
       &VAR_11->transfer_dma);
 if (!VAR_11->transfer_buffer) {
  FUNC_8(VAR_11);
  return ((void*)0);
 }
 if (VAR_10) {
  FUNC_1(VAR_11->transfer_buffer, VAR_1, VAR_10);
  VAR_11->transfer_buffer += VAR_10;
  VAR_11->transfer_dma += VAR_10;
 }


 FUNC_1(VAR_11->transfer_buffer,
   FUNC_9(VAR_11->pipe) ? VAR_1 : 0,
   VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {

  VAR_11->iso_frame_desc[VAR_12].length = FUNC_2((unsigned) VAR_9, VAR_13);
  VAR_9 -= VAR_11->iso_frame_desc[VAR_12].length;

  VAR_11->iso_frame_desc[VAR_12].offset = VAR_13 * VAR_12;
 }

 VAR_11->complete = VAR_5;

 VAR_11->interval = 1 << (VAR_8->bInterval - 1);
 VAR_11->transfer_flags = VAR_2 | VAR_3;
 return VAR_11;
}
