
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct nfcmrvl_usb_drv_data {struct nfcmrvl_private* priv; int deferred; int bulk_anchor; int tx_anchor; int txlock; int waker; struct usb_interface* intf; struct usb_device* udev; struct usb_endpoint_descriptor* bulk_rx_ep; struct usb_endpoint_descriptor* bulk_tx_ep; } ;
struct nfcmrvl_private {int support_fw_dnld; } ;
struct nfcmrvl_platform_data {int reset_n_io; } ;
typedef int config ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct nfcmrvl_private*) ;
 int VAR_4 ;
 int FUNC_2 (struct nfcmrvl_private*) ;
 struct nfcmrvl_usb_drv_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct nfcmrvl_platform_data*,int ,int) ;
 int FUNC_7 (int *,char*,struct usb_interface*,struct usb_device_id const*) ;
 struct nfcmrvl_private* FUNC_8 (int ,struct nfcmrvl_usb_drv_data*,int *,int *,struct nfcmrvl_platform_data*) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_11 (struct usb_endpoint_descriptor*) ;
 int VAR_6 ;
 int FUNC_12 (struct usb_interface*,struct nfcmrvl_usb_drv_data*) ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_7,
    const struct usb_device_id *VAR_8)
{
 struct usb_endpoint_descriptor *VAR_9;
 struct nfcmrvl_usb_drv_data *VAR_10;
 struct nfcmrvl_private *VAR_11;
 int VAR_12;
 struct usb_device *VAR_13 = FUNC_5(VAR_7);
 struct nfcmrvl_platform_data VAR_14;


 FUNC_6(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.reset_n_io = -VAR_0;

 FUNC_7(&VAR_13->dev, "intf %p id %p\n", VAR_7, VAR_8);

 VAR_10 = FUNC_3(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 for (VAR_12 = 0; VAR_12 < VAR_7->cur_altsetting->desc.bNumEndpoints; VAR_12++) {
  VAR_9 = &VAR_7->cur_altsetting->endpoint[VAR_12].desc;

  if (!VAR_10->bulk_tx_ep &&
      FUNC_11(VAR_9)) {
   VAR_10->bulk_tx_ep = VAR_9;
   continue;
  }

  if (!VAR_10->bulk_rx_ep &&
      FUNC_10(VAR_9)) {
   VAR_10->bulk_rx_ep = VAR_9;
   continue;
  }
 }

 if (!VAR_10->bulk_tx_ep || !VAR_10->bulk_rx_ep)
  return -VAR_1;

 VAR_10->udev = VAR_13;
 VAR_10->intf = VAR_7;

 FUNC_0(&VAR_10->waker, VAR_5);
 FUNC_9(&VAR_10->txlock);

 FUNC_4(&VAR_10->tx_anchor);
 FUNC_4(&VAR_10->bulk_anchor);
 FUNC_4(&VAR_10->deferred);

 VAR_11 = FUNC_8(VAR_4, VAR_10, &VAR_6,
     &VAR_7->dev, &VAR_14);
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_10->priv = VAR_11;
 VAR_10->priv->support_fw_dnld = 0;

 FUNC_12(VAR_7, VAR_10);

 return 0;
}
