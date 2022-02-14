
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw_addr; int perm_mac_addr; int mac_addr; } ;
struct atl1_adapter {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 struct atl1_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_2);
 struct atl1_adapter *VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_5(VAR_3);






 if (!FUNC_1(VAR_4->hw.mac_addr,
     VAR_4->hw.perm_mac_addr)) {
  FUNC_4(VAR_4->hw.mac_addr, VAR_4->hw.perm_mac_addr,
   VAR_0);
  FUNC_0(&VAR_4->hw);
 }

 FUNC_3(0, VAR_4->hw.hw_addr + VAR_1);
 FUNC_10(VAR_3);
 FUNC_8(VAR_2, VAR_4->hw.hw_addr);
 FUNC_9(VAR_2);
 FUNC_2(VAR_3);
 FUNC_6(VAR_2);
}
