
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {int interval; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ start_frame; struct stk_camera* context; int complete; int transfer_buffer_length; TYPE_2__* transfer_buffer; int transfer_flags; int pipe; struct usb_device* dev; } ;
struct stk_camera {TYPE_2__* isobufs; int isoc_ep; struct usb_device* udev; } ;
struct TYPE_5__ {struct urb* urb; struct TYPE_5__* data; } ;
struct TYPE_4__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct stk_camera*) ;
 int VAR_8 ;
 struct urb* FUNC_5 (int,int ) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct stk_camera *VAR_9)
{
 void *VAR_10;
 int VAR_11, VAR_12;
 struct urb *VAR_13;
 struct usb_device *VAR_14;

 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_14 = VAR_9->udev;

 if (VAR_9->isobufs)
  FUNC_3("isobufs already allocated. Bad\n");
 else
  VAR_9->isobufs = FUNC_0(VAR_6, sizeof(*VAR_9->isobufs),
           VAR_2);
 if (VAR_9->isobufs == ((void*)0)) {
  FUNC_3("Unable to allocate iso buffers\n");
  return -VAR_0;
 }
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (VAR_9->isobufs[VAR_11].data == ((void*)0)) {
   VAR_10 = FUNC_2(VAR_3, VAR_2);
   if (VAR_10 == ((void*)0)) {
    FUNC_3("Failed to allocate iso buffer %d\n", VAR_11);
    goto isobufs_out;
   }
   VAR_9->isobufs[VAR_11].data = VAR_10;
  } else
   FUNC_3("isobuf data already allocated\n");
  if (VAR_9->isobufs[VAR_11].urb == ((void*)0)) {
   VAR_13 = FUNC_5(VAR_4, VAR_2);
   if (VAR_13 == ((void*)0))
    goto isobufs_out;
   VAR_9->isobufs[VAR_11].urb = VAR_13;
  } else {
   FUNC_3("Killing URB\n");
   FUNC_7(VAR_9->isobufs[VAR_11].urb);
   VAR_13 = VAR_9->isobufs[VAR_11].urb;
  }
  VAR_13->interval = 1;
  VAR_13->dev = VAR_14;
  VAR_13->pipe = FUNC_8(VAR_14, VAR_9->isoc_ep);
  VAR_13->transfer_flags = VAR_7;
  VAR_13->transfer_buffer = VAR_9->isobufs[VAR_11].data;
  VAR_13->transfer_buffer_length = VAR_3;
  VAR_13->complete = VAR_8;
  VAR_13->context = VAR_9;
  VAR_13->start_frame = 0;
  VAR_13->number_of_packets = VAR_4;

  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   VAR_13->iso_frame_desc[VAR_12].offset = VAR_12 * VAR_5;
   VAR_13->iso_frame_desc[VAR_12].length = VAR_5;
  }
 }
 FUNC_4(VAR_9);
 return 0;

isobufs_out:
 for (VAR_11 = 0; VAR_11 < VAR_6 && VAR_9->isobufs[VAR_11].data; VAR_11++)
  FUNC_1(VAR_9->isobufs[VAR_11].data);
 for (VAR_11 = 0; VAR_11 < VAR_6 && VAR_9->isobufs[VAR_11].urb; VAR_11++)
  FUNC_6(VAR_9->isobufs[VAR_11].urb);
 FUNC_1(VAR_9->isobufs);
 VAR_9->isobufs = ((void*)0);
 return -VAR_0;
}
