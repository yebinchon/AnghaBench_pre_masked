
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work; } ;
struct nxp_nci_info {scalar_t__ mode; int info_lock; int phy_id; TYPE_2__* phy_ops; TYPE_1__ fw_info; } ;
struct nci_dev {int dummy; } ;
struct TYPE_4__ {int (* set_mode ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nci_dev*) ;
 struct nxp_nci_info* FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (struct nci_dev*) ;
 int FUNC_6 (struct nxp_nci_info*,int ) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(struct nci_dev *VAR_3)
{
 struct nxp_nci_info *VAR_4 = FUNC_4(VAR_3);

 if (VAR_4->mode == VAR_2)
  FUNC_6(VAR_4, -VAR_0);
 FUNC_0(&VAR_4->fw_info.work);

 FUNC_1(&VAR_4->info_lock);

 if (VAR_4->phy_ops->set_mode)
  VAR_4->phy_ops->set_mode(VAR_4->phy_id, VAR_1);

 FUNC_5(VAR_3);
 FUNC_3(VAR_3);

 FUNC_2(&VAR_4->info_lock);
}
