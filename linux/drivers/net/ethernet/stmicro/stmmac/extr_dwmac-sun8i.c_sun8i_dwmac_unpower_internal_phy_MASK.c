
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_priv_data {int internal_phy_powered; int rst_ephy; int ephy_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sunxi_priv_data *VAR_0)
{
 if (!VAR_0->internal_phy_powered)
  return 0;

 FUNC_0(VAR_0->ephy_clk);
 FUNC_1(VAR_0->rst_ephy);
 VAR_0->internal_phy_powered = 0;
 return 0;
}
