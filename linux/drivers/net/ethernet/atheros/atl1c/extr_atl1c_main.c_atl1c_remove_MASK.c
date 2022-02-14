
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int hw_addr; int perm_mac_addr; } ;
struct atl1c_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct atl1c_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct atl1c_adapter *VAR_2 = FUNC_4(VAR_1);

 FUNC_8(VAR_1);

 FUNC_0(&VAR_2->hw, VAR_2->hw.perm_mac_addr);
 FUNC_1(&VAR_2->hw);

 FUNC_3(VAR_2->hw.hw_addr);

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_1);
}
