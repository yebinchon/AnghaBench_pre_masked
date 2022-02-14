
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_priv_data {int phy_iface; int clk_enabled; int clk_mac_speed; int mac_clk_tx; int pclk_mac; int aclk_mac; int clk_phy; int clk_mac_refout; int clk_mac_ref; int mac_clk_rx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rk_priv_data *VAR_1, bool VAR_2)
{
 int VAR_3 = VAR_1->phy_iface;

 if (VAR_2) {
  if (!VAR_1->clk_enabled) {
   if (VAR_3 == VAR_0) {
    if (!FUNC_0(VAR_1->mac_clk_rx))
     FUNC_2(
      VAR_1->mac_clk_rx);

    if (!FUNC_0(VAR_1->clk_mac_ref))
     FUNC_2(
      VAR_1->clk_mac_ref);

    if (!FUNC_0(VAR_1->clk_mac_refout))
     FUNC_2(
      VAR_1->clk_mac_refout);
   }

   if (!FUNC_0(VAR_1->clk_phy))
    FUNC_2(VAR_1->clk_phy);

   if (!FUNC_0(VAR_1->aclk_mac))
    FUNC_2(VAR_1->aclk_mac);

   if (!FUNC_0(VAR_1->pclk_mac))
    FUNC_2(VAR_1->pclk_mac);

   if (!FUNC_0(VAR_1->mac_clk_tx))
    FUNC_2(VAR_1->mac_clk_tx);

   if (!FUNC_0(VAR_1->clk_mac_speed))
    FUNC_2(VAR_1->clk_mac_speed);





   FUNC_3(5);
   VAR_1->clk_enabled = 1;
  }
 } else {
  if (VAR_1->clk_enabled) {
   if (VAR_3 == VAR_0) {
    FUNC_1(VAR_1->mac_clk_rx);

    FUNC_1(VAR_1->clk_mac_ref);

    FUNC_1(VAR_1->clk_mac_refout);
   }

   FUNC_1(VAR_1->clk_phy);

   FUNC_1(VAR_1->aclk_mac);

   FUNC_1(VAR_1->pclk_mac);

   FUNC_1(VAR_1->mac_clk_tx);

   FUNC_1(VAR_1->clk_mac_speed);




   VAR_1->clk_enabled = 0;
  }
 }

 return 0;
}
