
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_priv_data {int internal_phy_powered; int ephy_clk; int rst_ephy; } ;
struct stmmac_priv {int device; TYPE_1__* plat; } ;
struct TYPE_2__ {struct sunxi_priv_data* bsp_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct stmmac_priv *VAR_0)
{
 struct sunxi_priv_data *VAR_1 = VAR_0->plat->bsp_priv;
 int VAR_2;

 if (VAR_1->internal_phy_powered) {
  FUNC_4(VAR_0->device, "Internal PHY already powered\n");
  return 0;
 }

 FUNC_3(VAR_0->device, "Powering internal PHY\n");
 VAR_2 = FUNC_1(VAR_1->ephy_clk);
 if (VAR_2) {
  FUNC_2(VAR_0->device, "Cannot enable internal PHY\n");
  return VAR_2;
 }




 FUNC_5(VAR_1->rst_ephy);

 VAR_2 = FUNC_6(VAR_1->rst_ephy);
 if (VAR_2) {
  FUNC_2(VAR_0->device, "Cannot deassert internal phy\n");
  FUNC_0(VAR_1->ephy_clk);
  return VAR_2;
 }

 VAR_1->internal_phy_powered = 1;

 return 0;
}
