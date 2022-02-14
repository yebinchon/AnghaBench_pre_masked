
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st21nfca_hci_info {scalar_t__ state; int info_lock; int phy_id; TYPE_1__* phy_ops; } ;
struct nfc_hci_dev {int dummy; } ;
struct TYPE_2__ {int (* disable ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nfc_hci_dev *VAR_1)
{
 struct st21nfca_hci_info *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->info_lock);

 if (VAR_2->state == VAR_0)
  goto out;

 VAR_2->phy_ops->disable(VAR_2->phy_id);
 VAR_2->state = VAR_0;

out:
 FUNC_1(&VAR_2->info_lock);
}
