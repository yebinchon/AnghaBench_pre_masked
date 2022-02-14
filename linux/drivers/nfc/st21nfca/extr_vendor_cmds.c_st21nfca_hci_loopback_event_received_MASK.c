
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int req_completion; struct sk_buff* rx_skb; } ;
struct st21nfca_hci_info {TYPE_2__ vendor_info; } ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {TYPE_1__* ndev; } ;
struct TYPE_3__ {int dev; } ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;

int FUNC_3(struct nfc_hci_dev *VAR_0, u8 VAR_1,
      struct sk_buff *VAR_2)
{
 struct st21nfca_hci_info *VAR_3 = FUNC_2(VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_3->vendor_info.rx_skb = VAR_2;
 break;
 default:
  FUNC_1(&VAR_0->ndev->dev, "Unexpected event on loopback gate\n");
 }
 FUNC_0(&VAR_3->vendor_info.req_completion);
 return 0;
}
