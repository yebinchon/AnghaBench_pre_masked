
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int phydev; } ;
struct et131x_adapter {int regs; int mii_bus; int napi; } ;


 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct et131x_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_9(VAR_0);
 struct et131x_adapter *VAR_2 = FUNC_5(VAR_1);

 FUNC_12(VAR_1);
 FUNC_6(&VAR_2->napi);
 FUNC_11(VAR_1->phydev);
 FUNC_4(VAR_2->mii_bus);
 FUNC_3(VAR_2->mii_bus);

 FUNC_0(VAR_2);
 FUNC_2(VAR_2->regs);
 FUNC_7(VAR_0);

 FUNC_1(VAR_1);
 FUNC_10(VAR_0);
 FUNC_8(VAR_0);
}
