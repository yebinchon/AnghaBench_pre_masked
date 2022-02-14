
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; int actual_length; scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct brcmf_usbreq {struct sk_buff* skb; struct brcmf_usbdev_info* devinfo; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct brcmf_usbdev_info {int rx_freeq; int dev; TYPE_1__ bus_pub; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,struct sk_buff*,int) ;
 int FUNC_2 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;
 int FUNC_3 (struct brcmf_usbdev_info*,int *,struct brcmf_usbreq*,int *) ;
 int FUNC_4 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_2)
{
 struct brcmf_usbreq *VAR_3 = (struct brcmf_usbreq *)VAR_2->context;
 struct brcmf_usbdev_info *VAR_4 = VAR_3->devinfo;
 struct sk_buff *VAR_5;

 FUNC_0(VAR_1, "Enter, urb->status=%d\n", VAR_2->status);
 FUNC_2(VAR_4, VAR_3);
 VAR_5 = VAR_3->skb;
 VAR_3->skb = ((void*)0);


 if (VAR_2->status != 0 || !VAR_2->actual_length) {
  FUNC_5(VAR_5);
  FUNC_3(VAR_4, &VAR_4->rx_freeq, VAR_3, ((void*)0));
  return;
 }

 if (VAR_4->bus_pub.state == VAR_0) {
  FUNC_6(VAR_5, VAR_2->actual_length);
  FUNC_1(VAR_4->dev, VAR_5, 1);
  FUNC_4(VAR_4, VAR_3);
 } else {
  FUNC_5(VAR_5);
  FUNC_3(VAR_4, &VAR_4->rx_freeq, VAR_3, ((void*)0));
 }
 return;

}
