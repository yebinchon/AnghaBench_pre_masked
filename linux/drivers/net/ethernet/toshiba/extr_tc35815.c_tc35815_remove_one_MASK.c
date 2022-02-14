
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc35815_local {int mii_bus; } ;
struct pci_dev {int dummy; } ;
struct net_device {int phydev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tc35815_local* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct tc35815_local *VAR_2 = FUNC_3(VAR_1);

 FUNC_5(VAR_1->phydev);
 FUNC_2(VAR_2->mii_bus);
 FUNC_1(VAR_2->mii_bus);
 FUNC_6(VAR_1);
 FUNC_0(VAR_1);
}
