
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {int setup_packet; } ;
struct sk_buff {int len; int data; } ;
struct nfcmrvl_usb_drv_data {TYPE_2__* udev; int tx_anchor; int waker; int deferred; TYPE_1__* bulk_tx_ep; } ;
struct nfcmrvl_private {struct nfcmrvl_usb_drv_data* drv_data; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,struct urb*,int) ;
 int FUNC_2 (struct nfcmrvl_usb_drv_data*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,TYPE_2__*,unsigned int,int ,int ,int ,struct sk_buff*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (TYPE_2__*) ;
 unsigned int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct urb*,int ) ;
 int FUNC_11 (struct urb*) ;

__attribute__((used)) static int FUNC_12(struct nfcmrvl_private *VAR_5,
    struct sk_buff *VAR_6)
{
 struct nfcmrvl_usb_drv_data *VAR_7 = VAR_5->drv_data;
 struct urb *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (!VAR_7->bulk_tx_ep)
  return -VAR_0;

 VAR_8 = FUNC_4(0, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_7->udev,
    VAR_7->bulk_tx_ep->bEndpointAddress);

 FUNC_6(VAR_8, VAR_7->udev, VAR_9, VAR_6->data, VAR_6->len,
     VAR_4, VAR_6);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10) {
  FUNC_5(VAR_8, &VAR_7->deferred);
  FUNC_3(&VAR_7->waker);
  VAR_10 = 0;
  goto done;
 }

 FUNC_5(VAR_8, &VAR_7->tx_anchor);

 VAR_10 = FUNC_10(VAR_8, VAR_3);
 if (VAR_10) {
  if (VAR_10 != -VAR_2 && VAR_10 != -VAR_0)
   FUNC_1(&VAR_7->udev->dev,
    "urb %p submission failed (%d)\n", VAR_8, -VAR_10);
  FUNC_0(VAR_8->setup_packet);
  FUNC_11(VAR_8);
 } else {
  FUNC_8(VAR_7->udev);
 }

done:
 FUNC_7(VAR_8);
 return VAR_10;
}
