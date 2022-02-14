
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_4, u8 *VAR_5,
           int *VAR_6)
{
 int VAR_7;
 struct sk_buff *VAR_8 = ((void*)0);

 VAR_7 = FUNC_2(VAR_4, VAR_2,
         VAR_3, &VAR_8);
 if (VAR_7 < 0)
  goto exit;

 if (VAR_8->len == 0 || VAR_8->len > VAR_1) {
  VAR_7 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_5, VAR_8->data, VAR_8->len);
 *VAR_6 = VAR_8->len;
exit:
 FUNC_0(VAR_8);
 return VAR_7;
}
