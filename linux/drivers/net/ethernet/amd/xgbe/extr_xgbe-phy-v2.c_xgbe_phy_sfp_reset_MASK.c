
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int sfp_mod_absent; int sfp_speed; int sfp_cable; int sfp_base; scalar_t__ sfp_tx_fault; scalar_t__ sfp_rx_los; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct xgbe_phy_data *VAR_3)
{
 VAR_3->sfp_rx_los = 0;
 VAR_3->sfp_tx_fault = 0;
 VAR_3->sfp_mod_absent = 1;
 VAR_3->sfp_base = VAR_0;
 VAR_3->sfp_cable = VAR_1;
 VAR_3->sfp_speed = VAR_2;
}
