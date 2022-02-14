
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_work; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct nfc_hci_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;

void FUNC_2(struct nfc_hci_dev *VAR_0)
{
 struct st21nfca_hci_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->dep_info.tx_work);
}
