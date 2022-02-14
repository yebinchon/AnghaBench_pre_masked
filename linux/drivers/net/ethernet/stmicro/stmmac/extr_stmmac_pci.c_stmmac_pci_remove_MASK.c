
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ stmmac_clk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct net_device* FUNC_2 (int *) ;
 struct stmmac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(&VAR_1->dev);
 struct stmmac_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_7(&VAR_1->dev);

 if (VAR_3->plat->stmmac_clk)
  FUNC_1(VAR_3->plat->stmmac_clk);

 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (FUNC_5(VAR_1, VAR_4) == 0)
   continue;
  FUNC_6(VAR_1, FUNC_0(VAR_4));
  break;
 }

 FUNC_4(VAR_1);
}
