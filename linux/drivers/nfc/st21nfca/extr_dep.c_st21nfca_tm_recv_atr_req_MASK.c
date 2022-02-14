
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_atr_req {int length; int gbi; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,size_t) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct nfc_hci_dev*,struct st21nfca_atr_req*) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_5,
        struct sk_buff *VAR_6)
{
 struct st21nfca_atr_req *VAR_7;
 size_t VAR_8;
 int VAR_9;

 FUNC_1(VAR_6, VAR_6->len - 1);

 if (!VAR_6->len) {
  VAR_9 = -VAR_0;
  goto exit;
 }

 if (VAR_6->len < VAR_4) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 VAR_7 = (struct st21nfca_atr_req *)VAR_6->data;

 if (VAR_7->length < sizeof(struct st21nfca_atr_req)) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 VAR_9 = FUNC_2(VAR_5, VAR_7);
 if (VAR_9)
  goto exit;

 VAR_8 = VAR_6->len - sizeof(struct st21nfca_atr_req);

 VAR_9 = FUNC_0(VAR_5->ndev, VAR_3,
         VAR_2, VAR_7->gbi, VAR_8);
 if (VAR_9)
  goto exit;

 VAR_9 = 0;

exit:
 return VAR_9;
}
