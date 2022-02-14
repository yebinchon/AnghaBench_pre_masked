
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct nfc_hci_dev {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_3, u16 *VAR_4)
{
 int VAR_5;
 struct sk_buff *VAR_6 = ((void*)0);

 VAR_5 = FUNC_2(VAR_3, VAR_2,
         VAR_1, &VAR_6);
 if (VAR_5 < 0)
  goto exit;

 if (VAR_6->len != 2) {
  VAR_5 = -VAR_0;
  goto exit;
 }

 *VAR_4 = FUNC_0(*(__be16 *) VAR_6->data);

exit:
 FUNC_1(VAR_6);
 return VAR_5;
}
