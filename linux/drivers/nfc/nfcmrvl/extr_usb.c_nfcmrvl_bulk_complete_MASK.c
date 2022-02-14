
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; int status; struct nfcmrvl_usb_drv_data* context; } ;
struct sk_buff {int dummy; } ;
struct nfcmrvl_usb_drv_data {TYPE_1__* udev; int bulk_anchor; int flags; TYPE_2__* priv; } ;
struct TYPE_4__ {int ndev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,struct urb*,int ,int ) ;
 struct sk_buff* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_5)
{
 struct nfcmrvl_usb_drv_data *VAR_6 = VAR_5->context;
 struct sk_buff *VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6->udev->dev, "urb %p status %d count %d\n",
  VAR_5, VAR_5->status, VAR_5->actual_length);

 if (!FUNC_5(VAR_3, &VAR_6->flags))
  return;

 if (!VAR_5->status) {
  VAR_7 = FUNC_1(VAR_6->priv->ndev, VAR_5->actual_length,
        VAR_2);
  if (!VAR_7) {
   FUNC_2(&VAR_6->udev->dev, "failed to alloc mem\n");
  } else {
   FUNC_4(VAR_7, VAR_5->transfer_buffer,
         VAR_5->actual_length);
   if (FUNC_3(VAR_6->priv, VAR_7) < 0)
    FUNC_2(&VAR_6->udev->dev,
     "corrupted Rx packet\n");
  }
 }

 if (!FUNC_5(VAR_4, &VAR_6->flags))
  return;

 FUNC_6(VAR_5, &VAR_6->bulk_anchor);
 FUNC_7(VAR_6->udev);

 VAR_8 = FUNC_8(VAR_5, VAR_2);
 if (VAR_8) {



  if (VAR_8 != -VAR_1 && VAR_8 != -VAR_0)
   FUNC_2(&VAR_6->udev->dev,
    "urb %p failed to resubmit (%d)\n", VAR_5, -VAR_8);
  FUNC_9(VAR_5);
 }
}
