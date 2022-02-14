
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct usb_ftdi {TYPE_1__* udev; int bulk_out_endpointAddr; } ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 char* FUNC_1 (TYPE_1__*,int,int ,int *) ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,TYPE_1__*,int ,char*,int,int ,struct usb_ftdi*) ;
 int FUNC_4 (TYPE_1__*,int,char*,int ) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_ftdi *VAR_4)
{
 int VAR_5;
 struct urb *VAR_6;
 char *VAR_7;
 int VAR_8 = 257;
 int VAR_9 = 0;
 VAR_6 = FUNC_2(0, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_4->udev, VAR_8, VAR_1, &VAR_6->transfer_dma);
 if (!VAR_7) {
  FUNC_0(&VAR_4->udev->dev, "could not get a buffer for flush sequence\n");
  FUNC_5(VAR_6);
  return -VAR_0;
 }
 while (VAR_8-- > 0)
  VAR_7[VAR_9++] = 0x55;
 FUNC_3(VAR_6, VAR_4->udev, FUNC_6(VAR_4->udev,
          VAR_4->bulk_out_endpointAddr), VAR_7, VAR_9,
     VAR_3, VAR_4);
 VAR_6->transfer_flags |= VAR_2;
 VAR_5 = FUNC_7(VAR_6, VAR_1);
 if (VAR_5) {
  FUNC_0(&VAR_4->udev->dev, "failed to submit urb containing the flush sequence\n");
  FUNC_4(VAR_4->udev, VAR_9, VAR_7, VAR_6->transfer_dma);
  FUNC_5(VAR_6);
  return -VAR_0;
 }
 FUNC_5(VAR_6);
 return 0;
}
