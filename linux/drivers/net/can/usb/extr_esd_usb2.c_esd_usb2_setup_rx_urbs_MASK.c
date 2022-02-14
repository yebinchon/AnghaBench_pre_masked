
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct esd_usb2 {int rxinitdone; TYPE_2__* udev; int rx_submitted; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 int * FUNC_2 (TYPE_2__*,int ,int ,int *) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,TYPE_2__*,int ,int *,int ,int ,struct esd_usb2*) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct esd_usb2 *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 if (VAR_6->rxinitdone)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct urb *VAR_9 = ((void*)0);
  u8 *VAR_10 = ((void*)0);


  VAR_9 = FUNC_3(0, VAR_1);
  if (!VAR_9) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_10 = FUNC_2(VAR_6->udev, VAR_3, VAR_1,
      &VAR_9->transfer_dma);
  if (!VAR_10) {
   FUNC_1(VAR_6->udev->dev.parent,
     "No memory left for USB buffer\n");
   VAR_8 = -VAR_0;
   goto freeurb;
  }

  FUNC_5(VAR_9, VAR_6->udev,
      FUNC_8(VAR_6->udev, 1),
      VAR_10, VAR_3,
      VAR_5, VAR_6);
  VAR_9->transfer_flags |= VAR_4;
  FUNC_4(VAR_9, &VAR_6->rx_submitted);

  VAR_8 = FUNC_9(VAR_9, VAR_1);
  if (VAR_8) {
   FUNC_10(VAR_9);
   FUNC_6(VAR_6->udev, VAR_3, VAR_10,
       VAR_9->transfer_dma);
  }

freeurb:

  FUNC_7(VAR_9);
  if (VAR_8)
   break;
 }


 if (VAR_7 == 0) {
  FUNC_0(VAR_6->udev->dev.parent, "couldn't setup read URBs\n");
  return VAR_8;
 }


 if (VAR_7 < VAR_2) {
  FUNC_1(VAR_6->udev->dev.parent,
    "rx performance may be slow\n");
 }

 VAR_6->rxinitdone = 1;
 return 0;
}
