
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int * data; } ;
struct nfc_target {int is_iso15693; int iso15693_dsfid; int iso15693_uid; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct nfc_hci_dev *VAR_4,
        struct nfc_target *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7 = ((void*)0);

 VAR_6 = FUNC_2(VAR_4, VAR_2,
         VAR_3,
         &VAR_7);
 if (VAR_6 < 0)
  goto exit;

 FUNC_3(VAR_7, 2);

 if (VAR_7->len == 0 ||
     VAR_7->len > VAR_1) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_5->iso15693_uid, VAR_7->data, VAR_7->len);
 VAR_5->iso15693_dsfid = VAR_7->data[1];
 VAR_5->is_iso15693 = 1;
exit:
 FUNC_0(VAR_7);
 return VAR_6;
}
