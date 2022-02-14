
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; scalar_t__ context; } ;
struct brcmf_usbreq {int * skb; struct brcmf_usbdev_info* devinfo; } ;
struct brcmf_usbdev_info {scalar_t__ tx_freecount; scalar_t__ tx_high_watermark; int tx_flowblock; int tx_flowblock_lock; int dev; int tx_freeq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;
 int FUNC_4 (struct brcmf_usbdev_info*,int *,struct brcmf_usbreq*,scalar_t__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_1)
{
 struct brcmf_usbreq *VAR_2 = (struct brcmf_usbreq *)VAR_1->context;
 struct brcmf_usbdev_info *VAR_3 = VAR_2->devinfo;
 unsigned long VAR_4;

 FUNC_0(VAR_0, "Enter, urb->status=%d, skb=%p\n", VAR_1->status,
    VAR_2->skb);
 FUNC_3(VAR_3, VAR_2);

 FUNC_1(VAR_3->dev, VAR_2->skb, VAR_1->status == 0);
 VAR_2->skb = ((void*)0);
 FUNC_4(VAR_3, &VAR_3->tx_freeq, VAR_2, &VAR_3->tx_freecount);
 FUNC_5(&VAR_3->tx_flowblock_lock, VAR_4);
 if (VAR_3->tx_freecount > VAR_3->tx_high_watermark &&
  VAR_3->tx_flowblock) {
  FUNC_2(VAR_3->dev, 0);
  VAR_3->tx_flowblock = 0;
 }
 FUNC_6(&VAR_3->tx_flowblock_lock, VAR_4);
}
