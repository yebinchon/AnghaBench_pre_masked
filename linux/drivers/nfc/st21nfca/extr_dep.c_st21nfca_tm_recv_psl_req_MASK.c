
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_psl_req {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct nfc_hci_dev*,struct st21nfca_psl_req*) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct st21nfca_psl_req *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2, VAR_2->len - 1);

 if (!VAR_2->len) {
  VAR_4 = -VAR_0;
  goto exit;
 }

 VAR_3 = (struct st21nfca_psl_req *)VAR_2->data;

 if (VAR_2->len < sizeof(struct st21nfca_psl_req)) {
  VAR_4 = -VAR_0;
  goto exit;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_3);
exit:
 return VAR_4;
}
