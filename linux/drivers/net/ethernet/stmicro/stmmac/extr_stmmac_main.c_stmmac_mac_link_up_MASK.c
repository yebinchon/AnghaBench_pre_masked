
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ eee; } ;
struct stmmac_priv {int eee_active; int hw; int eee_enabled; TYPE_1__ dma_cap; int ioaddr; } ;
struct phylink_config {int dev; } ;
struct phy_device {int dummy; } ;
typedef int phy_interface_t ;


 struct stmmac_priv* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct stmmac_priv*) ;
 int FUNC_3 (struct stmmac_priv*,int ,int) ;
 int FUNC_4 (struct stmmac_priv*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct phylink_config *VAR_0,
          unsigned int VAR_1, phy_interface_t VAR_2,
          struct phy_device *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_0(FUNC_5(VAR_0->dev));

 FUNC_3(VAR_4, VAR_4->ioaddr, 1);
 if (VAR_3 && VAR_4->dma_cap.eee) {
  VAR_4->eee_active = FUNC_1(VAR_3, 1) >= 0;
  VAR_4->eee_enabled = FUNC_2(VAR_4);
  FUNC_4(VAR_4, VAR_4->hw, 1);
 }
}
