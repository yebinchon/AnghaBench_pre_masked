
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_nci_info {int flags; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int *) ;
 struct st_nci_info* FUNC_1 (struct nci_dev*) ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct nfc_dev *VAR_2, void *VAR_3,
          size_t VAR_4)
{
 struct nci_dev *VAR_5 = FUNC_2(VAR_2);
 struct st_nci_info *VAR_6 = FUNC_1(VAR_5);

 if (VAR_4 != 1)
  return -VAR_0;

 FUNC_3("factory mode: %x\n", ((u8 *)VAR_3)[0]);

 switch (((u8 *)VAR_3)[0]) {
 case 128:
  FUNC_4(VAR_1, &VAR_6->flags);
 break;
 case 129:
  FUNC_0(VAR_1, &VAR_6->flags);
 break;
 default:
  return -VAR_0;
 }

 return 0;
}
