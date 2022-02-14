
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; int data; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;


 *(u8 *)FUNC_2(VAR_3, 1) = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
          VAR_0, VAR_3->data, VAR_3->len);

 FUNC_0(VAR_3);

 return VAR_4;
}
