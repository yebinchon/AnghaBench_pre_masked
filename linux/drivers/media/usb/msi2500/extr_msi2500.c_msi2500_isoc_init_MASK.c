
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int interval; int transfer_flags; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ start_frame; struct msi2500_dev* context; int complete; int transfer_buffer_length; int * transfer_buffer; int transfer_dma; int pipe; int dev; } ;
struct msi2500_dev {struct urb** urbs; int dev; int udev; scalar_t__ isoc_errors; } ;
struct TYPE_2__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct msi2500_dev*) ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,int ,int *) ;
 struct urb* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_8(struct msi2500_dev *VAR_9)
{
 struct urb *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_9->dev, "\n");

 VAR_9->isoc_errors = 0;

 VAR_13 = FUNC_6(VAR_9->udev, 0, 1);
 if (VAR_13)
  return VAR_13;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_10 = FUNC_4(VAR_3, VAR_1);
  if (VAR_10 == ((void*)0)) {
   FUNC_2(VAR_9);
   return -VAR_0;
  }
  VAR_9->urbs[VAR_11] = VAR_10;
  FUNC_0(VAR_9->dev, "Allocated URB at 0x%p\n", VAR_10);

  VAR_10->interval = 1;
  VAR_10->dev = VAR_9->udev;
  VAR_10->pipe = FUNC_5(VAR_9->udev, 0x81);
  VAR_10->transfer_flags = VAR_6 | VAR_7;
  VAR_10->transfer_buffer = FUNC_3(VAR_9->udev,
    VAR_2,
    VAR_1, &VAR_10->transfer_dma);
  if (VAR_10->transfer_buffer == ((void*)0)) {
   FUNC_1(VAR_9->dev,
    "Failed to allocate urb buffer %d\n", VAR_11);
   FUNC_2(VAR_9);
   return -VAR_0;
  }
  VAR_10->transfer_buffer_length = VAR_2;
  VAR_10->complete = VAR_8;
  VAR_10->context = VAR_9;
  VAR_10->start_frame = 0;
  VAR_10->number_of_packets = VAR_3;
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_10->iso_frame_desc[VAR_12].offset = VAR_12 * VAR_4;
   VAR_10->iso_frame_desc[VAR_12].length = VAR_4;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_13 = FUNC_7(VAR_9->urbs[VAR_11], VAR_1);
  if (VAR_13) {
   FUNC_1(VAR_9->dev,
    "usb_submit_urb %d failed with error %d\n",
    VAR_11, VAR_13);
   FUNC_2(VAR_9);
   return VAR_13;
  }
  FUNC_0(VAR_9->dev, "URB 0x%p submitted.\n", VAR_9->urbs[VAR_11]);
 }


 return 0;
}
