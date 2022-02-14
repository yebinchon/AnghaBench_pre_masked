
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pch_can_priv {int ndev; int regs; int dev; scalar_t__ use_msi; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pch_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_can_priv*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);
 struct pch_can_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_8(VAR_2->ndev);
 if (VAR_2->use_msi)
  FUNC_4(VAR_2->dev);
 FUNC_7(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_2);
 FUNC_6(VAR_0, VAR_2->regs);
 FUNC_0(VAR_2->ndev);
}
