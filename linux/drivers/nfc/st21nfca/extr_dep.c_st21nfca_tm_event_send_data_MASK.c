
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct nfc_hci_dev {int dummy; } ;






 int FUNC_0 (struct nfc_hci_dev*,struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,struct sk_buff*) ;
 int FUNC_2 (struct nfc_hci_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_0,
    struct sk_buff *VAR_1)
{
 u8 VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->data[1];
 switch (VAR_2) {
 case 128:
  VAR_3 = VAR_1->data[2];
  switch (VAR_3) {
  case 131:
   VAR_4 = FUNC_0(VAR_0, VAR_1);
   break;
  case 129:
   VAR_4 = FUNC_2(VAR_0, VAR_1);
   break;
  case 130:
   VAR_4 = FUNC_1(VAR_0, VAR_1);
   break;
  default:
   return 1;
  }
  break;
 default:
  return 1;
 }
 return VAR_4;
}
