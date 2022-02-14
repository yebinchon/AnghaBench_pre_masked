
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pn544_hci_info {scalar_t__ state; int info_lock; int phy_id; TYPE_1__* phy_ops; } ;
struct nfc_hci_dev {int dummy; } ;
struct TYPE_2__ {int (* enable ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pn544_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_hci_dev *VAR_3)
{
 struct pn544_hci_info *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 FUNC_0(&VAR_4->info_lock);

 if (VAR_4->state != VAR_1) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = VAR_4->phy_ops->enable(VAR_4->phy_id);

 if (VAR_5 == 0)
  VAR_4->state = VAR_2;

out:
 FUNC_1(&VAR_4->info_lock);
 return VAR_5;
}
