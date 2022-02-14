
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st21nfca_hci_info {TYPE_1__* se_status; } ;
struct nfc_hci_dev {int ndev; int quirks; } ;
struct TYPE_2__ {scalar_t__ is_ese_present; scalar_t__ is_uicc_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct nfc_hci_dev *VAR_5)
{
 struct st21nfca_hci_info *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;

 if (FUNC_2(VAR_4, &VAR_5->quirks))
  return 0;

 if (VAR_6->se_status->is_uicc_present) {
  FUNC_0(VAR_5->ndev, VAR_0, VAR_2);
  VAR_7++;
 }

 if (VAR_6->se_status->is_ese_present) {
  FUNC_0(VAR_5->ndev, VAR_3, VAR_1);
  VAR_7++;
 }

 return !VAR_7;
}
