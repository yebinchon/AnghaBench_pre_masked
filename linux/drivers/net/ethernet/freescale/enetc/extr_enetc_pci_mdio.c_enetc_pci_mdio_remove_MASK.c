
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mii_bus {struct enetc_mdio_priv* priv; } ;
struct enetc_mdio_priv {TYPE_1__* hw; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct mii_bus* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct mii_bus *VAR_1 = FUNC_3(VAR_0);
 struct enetc_mdio_priv *VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->priv;
 FUNC_0(VAR_2->hw->port);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
}
