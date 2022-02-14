
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
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,int ,int ,void*,size_t,struct sk_buff**) ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 struct sk_buff* FUNC_3 (struct nfc_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nfc_dev *VAR_8, void *VAR_9,
           size_t VAR_10)
{
 int VAR_11;
 struct sk_buff *VAR_12, *VAR_13;
 struct nci_dev *VAR_14 = FUNC_2(VAR_8);

 if (VAR_10 != 2)
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_14, VAR_5,
        VAR_6,
        VAR_9, VAR_10, &VAR_13);
 if (VAR_11)
  goto exit;

 VAR_12 = FUNC_3(VAR_8, VAR_7,
     VAR_3, VAR_13->len);
 if (!VAR_12) {
  VAR_11 = -VAR_1;
  goto free_skb;
 }

 if (FUNC_5(VAR_12, VAR_4, VAR_13->len, VAR_13->data)) {
  FUNC_0(VAR_12);
  VAR_11 = -VAR_0;
  goto free_skb;
 }

 VAR_11 = FUNC_4(VAR_12);

free_skb:
 FUNC_0(VAR_13);
exit:
 return VAR_11;
}
