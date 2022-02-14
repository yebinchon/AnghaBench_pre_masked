
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st21nfca_psl_res {int length; int did; int cmd1; int cmd0; } ;
struct st21nfca_psl_req {int brs; int did; } ;
struct sk_buff {int len; int * data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfc_hci_dev*,int ,int ,int *,int) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct nfc_hci_dev *VAR_8,
        struct st21nfca_psl_req *VAR_9)
{
 struct st21nfca_psl_res *VAR_10;
 struct sk_buff *VAR_11;
 u8 VAR_12[2] = {0, 0};
 int VAR_13;

 VAR_11 = FUNC_2(sizeof(struct st21nfca_psl_res), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_5(VAR_11, sizeof(struct st21nfca_psl_res));

 VAR_10 = (struct st21nfca_psl_res *)VAR_11->data;

 VAR_10->length = sizeof(struct st21nfca_psl_res);
 VAR_10->cmd0 = VAR_6;
 VAR_10->cmd1 = VAR_5;
 VAR_10->did = VAR_9->did;

 VAR_13 = FUNC_4(VAR_8, VAR_7,
    VAR_4, VAR_11->data, VAR_11->len);
 if (VAR_13 < 0)
  goto error;
 if (FUNC_1(VAR_9->brs) &&
     FUNC_0(VAR_9->brs)) {
  VAR_12[0] = VAR_2;
  VAR_12[1] = VAR_2;
 }


 VAR_13 = FUNC_4(VAR_8, VAR_7,
   VAR_3, VAR_12, 2);
error:
 FUNC_3(VAR_11);
 return VAR_13;
}
