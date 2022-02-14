
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfc_hci_dev {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfc_hci_dev*,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ) ;
 int FUNC_3 (struct nfc_hci_dev*) ;

int FUNC_4(struct nfc_hci_dev *VAR_4, u32 VAR_5)
{
 int VAR_6;






 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_3);
 if (VAR_6 == VAR_1) {
  FUNC_3(VAR_4);
  VAR_6 = FUNC_0(VAR_4, VAR_0,
    VAR_2, ((void*)0), 0);
  if (VAR_6 < 0)
   return VAR_6;
 } else if (VAR_6 < 0) {




  FUNC_1(VAR_4->ndev, VAR_5);
  return VAR_6;
 }

 return 0;
}
