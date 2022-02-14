
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct device {int dummy; } ;
struct brcmf_usbreq {struct sk_buff* skb; TYPE_2__* urb; struct brcmf_usbdev_info* devinfo; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct brcmf_usbdev_info {scalar_t__ tx_freecount; scalar_t__ tx_low_watermark; int tx_flowblock; int tx_flowblock_lock; int tx_freeq; int tx_postq; int tx_pipe; int usbdev; TYPE_1__ bus_pub; } ;
struct TYPE_5__ {int transfer_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,struct sk_buff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;
 struct brcmf_usbreq* FUNC_4 (struct brcmf_usbdev_info*,int *,scalar_t__*) ;
 int FUNC_5 (struct brcmf_usbdev_info*,int *,struct brcmf_usbreq*,scalar_t__*) ;
 struct brcmf_usbdev_info* FUNC_6 (struct device*) ;
 int VAR_6 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ,int ,struct brcmf_usbreq*) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_7, struct sk_buff *VAR_8)
{
 struct brcmf_usbdev_info *VAR_9 = FUNC_6(VAR_7);
 struct brcmf_usbreq *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 FUNC_0(VAR_5, "Enter, skb=%p\n", VAR_8);
 if (VAR_9->bus_pub.state != VAR_0) {
  VAR_11 = -VAR_1;
  goto fail;
 }

 VAR_10 = FUNC_4(VAR_9, &VAR_9->tx_freeq,
     &VAR_9->tx_freecount);
 if (!VAR_10) {
  FUNC_1("no req to send\n");
  VAR_11 = -VAR_2;
  goto fail;
 }

 VAR_10->skb = VAR_8;
 VAR_10->devinfo = VAR_9;
 FUNC_9(VAR_10->urb, VAR_9->usbdev, VAR_9->tx_pipe,
     VAR_8->data, VAR_8->len, VAR_6, VAR_10);
 VAR_10->urb->transfer_flags |= VAR_4;
 FUNC_5(VAR_9, &VAR_9->tx_postq, VAR_10, ((void*)0));
 VAR_11 = FUNC_10(VAR_10->urb, VAR_3);
 if (VAR_11) {
  FUNC_1("brcmf_usb_tx usb_submit_urb FAILED\n");
  FUNC_3(VAR_9, VAR_10);
  VAR_10->skb = ((void*)0);
  FUNC_5(VAR_9, &VAR_9->tx_freeq, VAR_10,
         &VAR_9->tx_freecount);
  goto fail;
 }

 FUNC_7(&VAR_9->tx_flowblock_lock, VAR_12);
 if (VAR_9->tx_freecount < VAR_9->tx_low_watermark &&
     !VAR_9->tx_flowblock) {
  FUNC_2(VAR_7, 1);
  VAR_9->tx_flowblock = 1;
 }
 FUNC_8(&VAR_9->tx_flowblock_lock, VAR_12);
 return 0;

fail:
 return VAR_11;
}
