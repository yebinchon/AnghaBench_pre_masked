
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int len; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,int ,int ,void*,size_t,struct sk_buff**) ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 struct sk_buff* FUNC_3 (struct nfc_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nfc_dev *VAR_7, void *VAR_8,
      size_t VAR_9)
{
 int VAR_10;
 struct sk_buff *VAR_11, *VAR_12;
 struct nci_dev *VAR_13 = FUNC_2(VAR_7);

 VAR_10 = FUNC_1(VAR_13, VAR_4, VAR_5,
        VAR_8, VAR_9, &VAR_12);
 if (VAR_10)
  goto exit;

 VAR_11 = FUNC_3(VAR_7, VAR_6,
          VAR_2, VAR_12->len);
 if (!VAR_11) {
  VAR_10 = -VAR_1;
  goto free_skb;
 }

 if (FUNC_5(VAR_11, VAR_3, VAR_12->len, VAR_12->data)) {
  FUNC_0(VAR_11);
  VAR_10 = -VAR_0;
  goto free_skb;
 }

 VAR_10 = FUNC_4(VAR_11);

free_skb:
 FUNC_0(VAR_12);
exit:
 return VAR_10;
}
