
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int eee_active; int hw; int ioaddr; } ;
struct phylink_config {int dev; } ;
typedef int phy_interface_t ;


 struct stmmac_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct stmmac_priv*) ;
 int FUNC_2 (struct stmmac_priv*,int ,int) ;
 int FUNC_3 (struct stmmac_priv*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct phylink_config *VAR_0,
     unsigned int VAR_1, phy_interface_t VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(FUNC_4(VAR_0->dev));

 FUNC_2(VAR_3, VAR_3->ioaddr, 0);
 VAR_3->eee_active = 0;
 FUNC_1(VAR_3);
 FUNC_3(VAR_3, VAR_3->hw, 0);
}
