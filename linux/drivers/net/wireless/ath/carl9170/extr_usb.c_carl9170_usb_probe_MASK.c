
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int driver_info; } ;
struct usb_device {int dev; } ;
struct ar9170 {int usb_ep_cmd_is_bulk; struct usb_device* udev; int rx_pool_urbs; int rx_anch_urbs; int rx_work_urbs; int tx_anch_urbs; int tx_cmd_urbs; int usb_tasklet; int fw_load_wait; int fw_boot_wait; int cmd_wait; int tx_err; int tx_cmd; int tx_anch; int tx_wait; int rx_work; int rx_pool; int rx_anch; int hw; int features; struct usb_interface* intf; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ) ;
 struct ar9170* FUNC_4 (int) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int ,int,int ,int *,int ,struct ar9170*,int ) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 int FUNC_15 (struct usb_interface*) ;
 int FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (struct usb_device*) ;
 int FUNC_18 (struct usb_interface*,struct ar9170*) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_8,
         const struct usb_device_id *VAR_9)
{
 struct usb_endpoint_descriptor *VAR_10;
 struct ar9170 *VAR_11;
 struct usb_device *VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_17(FUNC_9(VAR_8));
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_4(sizeof(*VAR_11));
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = FUNC_9(VAR_8);
 VAR_11->udev = VAR_12;
 VAR_11->intf = VAR_8;
 VAR_11->features = VAR_9->driver_info;







 for (VAR_13 = 0; VAR_13 < VAR_8->cur_altsetting->desc.bNumEndpoints; ++VAR_13) {
  VAR_10 = &VAR_8->cur_altsetting->endpoint[VAR_13].desc;

  if (FUNC_13(VAR_10) == VAR_0 &&
      FUNC_12(VAR_10) &&
      FUNC_14(VAR_10) == VAR_5)
   VAR_11->usb_ep_cmd_is_bulk = 1;
 }

 FUNC_18(VAR_8, VAR_11);
 FUNC_2(VAR_11->hw, &VAR_8->dev);

 FUNC_8(&VAR_11->rx_anch);
 FUNC_8(&VAR_11->rx_pool);
 FUNC_8(&VAR_11->rx_work);
 FUNC_8(&VAR_11->tx_wait);
 FUNC_8(&VAR_11->tx_anch);
 FUNC_8(&VAR_11->tx_cmd);
 FUNC_8(&VAR_11->tx_err);
 FUNC_7(&VAR_11->cmd_wait);
 FUNC_7(&VAR_11->fw_boot_wait);
 FUNC_7(&VAR_11->fw_load_wait);
 FUNC_11(&VAR_11->usb_tasklet, VAR_7,
       (unsigned long)VAR_11);

 FUNC_3(&VAR_11->tx_cmd_urbs, 0);
 FUNC_3(&VAR_11->tx_anch_urbs, 0);
 FUNC_3(&VAR_11->rx_work_urbs, 0);
 FUNC_3(&VAR_11->rx_anch_urbs, 0);
 FUNC_3(&VAR_11->rx_pool_urbs, 0);

 FUNC_15(VAR_8);

 FUNC_6(VAR_11, VAR_2);

 VAR_14 = FUNC_10(VAR_4, 1, VAR_1,
  &VAR_11->udev->dev, VAR_3, VAR_11, VAR_6);
 if (VAR_14) {
  FUNC_16(VAR_8);
  FUNC_5(VAR_11);
 }
 return VAR_14;
}
