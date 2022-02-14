
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; int dev; } ;
struct ath10k_usb {struct ath10k* ar; } ;
struct ath10k_bus_params {scalar_t__ chip_id; int dev_type; } ;
struct TYPE_4__ {int vendor; int device; } ;
struct ath10k {int dev_id; TYPE_2__ id; } ;
typedef enum ath10k_hw_rev { ____Placeholder_ath10k_hw_rev } ath10k_hw_rev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath10k* FUNC_0 (int,int *,int ,int,int *) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,struct ath10k_bus_params*) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_4 (struct ath10k*,struct usb_interface*) ;
 int VAR_5 ;
 struct ath10k_usb* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,char*,...) ;
 int FUNC_7 (int *,char*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct ath10k *VAR_8;
 struct ath10k_usb *VAR_9;
 struct usb_device *VAR_10 = FUNC_8(VAR_6);
 int VAR_11, VAR_12, VAR_13;
 enum ath10k_hw_rev VAR_14;
 struct ath10k_bus_params VAR_15 = {};







 VAR_14 = VAR_3;

 VAR_8 = FUNC_0(sizeof(*VAR_9), &VAR_10->dev, VAR_0,
    VAR_14, &VAR_5);
 if (!VAR_8) {
  FUNC_7(&VAR_10->dev, "failed to allocate core\n");
  return -VAR_4;
 }

 FUNC_10(VAR_10);
 VAR_12 = FUNC_9(VAR_10->descriptor.idVendor);
 VAR_13 = FUNC_9(VAR_10->descriptor.idProduct);

 FUNC_3(VAR_8, VAR_1,
     "usb new func vendor 0x%04x product 0x%04x\n",
     VAR_12, VAR_13);

 VAR_9 = FUNC_5(VAR_8);
 VAR_11 = FUNC_4(VAR_8, VAR_6);
 VAR_9->ar = VAR_8;

 VAR_8->dev_id = VAR_13;
 VAR_8->id.vendor = VAR_12;
 VAR_8->id.device = VAR_13;

 VAR_15.dev_type = VAR_2;

 VAR_15.chip_id = 0;
 VAR_11 = FUNC_2(VAR_8, &VAR_15);
 if (VAR_11) {
  FUNC_6(VAR_8, "failed to register driver core: %d\n", VAR_11);
  goto err;
 }


 FUNC_6(VAR_8, "Warning: ath10k USB support is incomplete, don't expect anything to work!\n");

 return 0;

err:
 FUNC_1(VAR_8);

 FUNC_11(VAR_10);

 return VAR_11;
}
