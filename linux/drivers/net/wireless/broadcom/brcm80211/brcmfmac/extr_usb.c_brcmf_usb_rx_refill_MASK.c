
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct brcmf_usbreq {struct sk_buff* skb; int urb; struct brcmf_usbdev_info* devinfo; } ;
struct TYPE_2__ {int bus_mtu; } ;
struct brcmf_usbdev_info {int rx_freeq; int rx_postq; int rx_pipe; int usbdev; TYPE_1__ bus_pub; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;
 int FUNC_1 (struct brcmf_usbdev_info*,int *,struct brcmf_usbreq*,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,struct brcmf_usbreq*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct brcmf_usbdev_info *VAR_2,
    struct brcmf_usbreq *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 if (!VAR_3 || !VAR_2)
  return;

 VAR_4 = FUNC_3(VAR_2->bus_pub.bus_mtu);
 if (!VAR_4) {
  FUNC_1(VAR_2, &VAR_2->rx_freeq, VAR_3, ((void*)0));
  return;
 }
 VAR_3->skb = VAR_4;

 FUNC_5(VAR_3->urb, VAR_2->usbdev, VAR_2->rx_pipe,
     VAR_4->data, FUNC_4(VAR_4), VAR_1,
     VAR_3);
 VAR_3->devinfo = VAR_2;
 FUNC_1(VAR_2, &VAR_2->rx_postq, VAR_3, ((void*)0));

 VAR_5 = FUNC_6(VAR_3->urb, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_2, VAR_3);
  FUNC_2(VAR_3->skb);
  VAR_3->skb = ((void*)0);
  FUNC_1(VAR_2, &VAR_2->rx_freeq, VAR_3, ((void*)0));
 }
 return;
}
