
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sk_buff* rx_skb; int req_completion; } ;
struct st21nfca_hci_info {TYPE_1__ vendor_info; } ;
struct sk_buff {size_t len; int data; } ;
struct nfc_hci_dev {int ndev; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nfc_hci_dev* FUNC_1 (struct nfc_dev*) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int FUNC_3 (struct nfc_hci_dev*,int ,int ,void*,size_t) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,size_t) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,size_t,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct nfc_dev *VAR_8, void *VAR_9,
     size_t VAR_10)
{
 int VAR_11;
 struct sk_buff *VAR_12;
 struct nfc_hci_dev *VAR_13 = FUNC_1(VAR_8);
 struct st21nfca_hci_info *VAR_14 = FUNC_2(VAR_13);

 if (VAR_10 <= 0)
  return -VAR_2;

 FUNC_7(&VAR_14->vendor_info.req_completion);
 VAR_14->vendor_info.rx_skb = ((void*)0);

 VAR_11 = FUNC_3(VAR_13, VAR_5,
          VAR_6, VAR_9, VAR_10);
 if (VAR_11 < 0) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 FUNC_8(&VAR_14->vendor_info.req_completion);
 if (!VAR_14->vendor_info.rx_skb ||
     VAR_14->vendor_info.rx_skb->len != VAR_10) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 VAR_12 = FUNC_4(VAR_13->ndev,
     VAR_7,
     VAR_3,
     VAR_14->vendor_info.rx_skb->len);
 if (!VAR_12) {
  VAR_11 = -VAR_1;
  goto free_skb;
 }

 if (FUNC_6(VAR_12, VAR_4, VAR_14->vendor_info.rx_skb->len,
      VAR_14->vendor_info.rx_skb->data)) {
  FUNC_0(VAR_12);
  VAR_11 = -VAR_0;
  goto free_skb;
 }

 VAR_11 = FUNC_5(VAR_12);
free_skb:
 FUNC_0(VAR_14->vendor_info.rx_skb);
exit:
 return VAR_11;
}
