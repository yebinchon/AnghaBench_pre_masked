
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct if_usb_card {TYPE_2__* udev; TYPE_1__* tx_urb; int ep_out; scalar_t__ surprise_removed; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int ,int *,int ,int ,struct if_usb_card*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct if_usb_card *VAR_4, uint8_t *VAR_5, uint16_t VAR_6)
{
 int VAR_7;


 if (VAR_4->surprise_removed) {
  FUNC_1(&VAR_4->udev->dev, "Device removed\n");
  VAR_7 = -VAR_0;
  goto tx_ret;
 }

 FUNC_2(VAR_4->tx_urb, VAR_4->udev,
     FUNC_3(VAR_4->udev,
       VAR_4->ep_out),
     VAR_5, VAR_6, VAR_3, VAR_4);

 VAR_4->tx_urb->transfer_flags |= VAR_2;

 if ((VAR_7 = FUNC_4(VAR_4->tx_urb, VAR_1))) {
  FUNC_1(&VAR_4->udev->dev, "usb_submit_urb failed: %d\n", VAR_7);
 } else {
  FUNC_0(&VAR_4->udev->dev, "usb_submit_urb success\n");
  VAR_7 = 0;
 }

tx_ret:
 return VAR_7;
}
