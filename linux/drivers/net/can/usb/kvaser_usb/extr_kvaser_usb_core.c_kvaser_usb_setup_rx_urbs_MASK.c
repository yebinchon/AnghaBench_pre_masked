
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_flags; void* transfer_dma; } ;
struct kvaser_usb {int rxinitdone; TYPE_2__* intf; void** rxbuf_dma; int ** rxbuf; int udev; int rx_submitted; TYPE_1__* bulk_in; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int ,void**) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*,int ,int ,int *,int ,int ,struct kvaser_usb*) ;
 int FUNC_5 (int ,int ,int *,void*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static int FUNC_10(struct kvaser_usb *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 if (VAR_6->rxinitdone)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct urb *VAR_9 = ((void*)0);
  u8 *VAR_10 = ((void*)0);
  dma_addr_t VAR_11;

  VAR_9 = FUNC_2(0, VAR_1);
  if (!VAR_9) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_10 = FUNC_1(VAR_6->udev, VAR_3,
      VAR_1, &VAR_11);
  if (!VAR_10) {
   FUNC_0(&VAR_6->intf->dev,
     "No memory left for USB buffer\n");
   FUNC_6(VAR_9);
   VAR_8 = -VAR_0;
   break;
  }

  FUNC_4(VAR_9, VAR_6->udev,
      FUNC_7
     (VAR_6->udev,
      VAR_6->bulk_in->bEndpointAddress),
      VAR_10, VAR_3,
      VAR_5, VAR_6);
  VAR_9->transfer_dma = VAR_11;
  VAR_9->transfer_flags |= VAR_4;
  FUNC_3(VAR_9, &VAR_6->rx_submitted);

  VAR_8 = FUNC_8(VAR_9, VAR_1);
  if (VAR_8) {
   FUNC_9(VAR_9);
   FUNC_5(VAR_6->udev,
       VAR_3, VAR_10,
       VAR_11);
   FUNC_6(VAR_9);
   break;
  }

  VAR_6->rxbuf[VAR_7] = VAR_10;
  VAR_6->rxbuf_dma[VAR_7] = VAR_11;

  FUNC_6(VAR_9);
 }

 if (VAR_7 == 0) {
  FUNC_0(&VAR_6->intf->dev, "Cannot setup read URBs, error %d\n",
    VAR_8);
  return VAR_8;
 } else if (VAR_7 < VAR_2) {
  FUNC_0(&VAR_6->intf->dev, "RX performances may be slow\n");
 }

 VAR_6->rxinitdone = 1;

 return 0;
}
