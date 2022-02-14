
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int to; scalar_t__ idx; scalar_t__ curr_nfc_dep_pni; int tx_work; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct nfc_hci_dev {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct st21nfca_hci_info* FUNC_1 (struct nfc_hci_dev*) ;
 int VAR_1 ;

void FUNC_2(struct nfc_hci_dev *VAR_2)
{
 struct st21nfca_hci_info *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->dep_info.tx_work, VAR_1);
 VAR_3->dep_info.curr_nfc_dep_pni = 0;
 VAR_3->dep_info.idx = 0;
 VAR_3->dep_info.to = VAR_0;
}
