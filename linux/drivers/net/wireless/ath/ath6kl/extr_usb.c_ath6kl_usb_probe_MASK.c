
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_7__ {int idProduct; int idVendor; } ;
struct usb_device {scalar_t__ speed; TYPE_1__ descriptor; } ;
struct ath6kl_usb {struct ath6kl* ar; TYPE_4__* udev; } ;
struct TYPE_12__ {int max_data_size; } ;
struct TYPE_11__ {int block_size; } ;
struct ath6kl {TYPE_6__ bmi; TYPE_5__ mbox_info; int * hif_ops; int hif_type; struct ath6kl_usb* hif_priv; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int bInterfaceNumber; } ;
struct TYPE_9__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ath6kl* FUNC_0 (int *) ;
 int FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,...) ;
 struct ath6kl_usb* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct ath6kl_usb*) ;
 int VAR_5 ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_7(VAR_6);
 struct ath6kl *VAR_9;
 struct ath6kl_usb *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 FUNC_9(VAR_8);

 VAR_11 = FUNC_8(VAR_8->descriptor.idVendor);
 VAR_12 = FUNC_8(VAR_8->descriptor.idProduct);

 FUNC_3(VAR_0, "vendor_id = %04x\n", VAR_11);
 FUNC_3(VAR_0, "product_id = %04x\n", VAR_12);

 if (VAR_6->cur_altsetting)
  FUNC_3(VAR_0, "USB Interface %d\n",
      VAR_6->cur_altsetting->desc.bInterfaceNumber);


 if (VAR_8->speed == VAR_4)
  FUNC_3(VAR_0, "USB 2.0 Host\n");
 else
  FUNC_3(VAR_0, "USB 1.1 Host\n");

 VAR_10 = FUNC_5(VAR_6);

 if (VAR_10 == ((void*)0)) {
  VAR_13 = -VAR_3;
  goto err_usb_put;
 }

 VAR_9 = FUNC_0(&VAR_10->udev->dev);
 if (VAR_9 == ((void*)0)) {
  FUNC_4("Failed to alloc ath6kl core\n");
  VAR_13 = -VAR_3;
  goto err_usb_destroy;
 }

 VAR_9->hif_priv = VAR_10;
 VAR_9->hif_type = VAR_1;
 VAR_9->hif_ops = &VAR_5;
 VAR_9->mbox_info.block_size = 16;
 VAR_9->bmi.max_data_size = 252;

 VAR_10->ar = VAR_9;

 VAR_13 = FUNC_2(VAR_9, VAR_2);
 if (VAR_13) {
  FUNC_4("Failed to init ath6kl core: %d\n", VAR_13);
  goto err_core_free;
 }

 return VAR_13;

err_core_free:
 FUNC_1(VAR_9);
err_usb_destroy:
 FUNC_6(VAR_10);
err_usb_put:
 FUNC_10(VAR_8);

 return VAR_13;
}
