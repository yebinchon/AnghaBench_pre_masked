
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_hci_dev {int quirks; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int *) ;
 struct nfc_hci_dev* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct nfc_dev *VAR_2, void *VAR_3,
          size_t VAR_4)
{
 struct nfc_hci_dev *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4 != 1)
  return -VAR_0;

 FUNC_2("factory mode: %x\n", ((u8 *)VAR_3)[0]);

 switch (((u8 *)VAR_3)[0]) {
 case 128:
  FUNC_3(VAR_1, &VAR_5->quirks);
 break;
 case 129:
  FUNC_0(VAR_1, &VAR_5->quirks);
 break;
 default:
  return -VAR_0;
 }

 return 0;
}
