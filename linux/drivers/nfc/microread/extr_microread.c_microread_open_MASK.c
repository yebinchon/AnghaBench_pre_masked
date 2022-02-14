
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_hci_dev {int dummy; } ;
struct microread_info {int phy_id; TYPE_1__* phy_ops; } ;
struct TYPE_2__ {int (* enable ) (int ) ;} ;


 struct microread_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_0)
{
 struct microread_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->phy_ops->enable(VAR_1->phy_id);
}
