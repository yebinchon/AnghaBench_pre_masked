
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int module_eeprom; int module_info; int an_isr; int phy_valid_speed; int phy_config_aneg; int phy_status; int phy_stop; int phy_start; int phy_reset; int phy_exit; int phy_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_0(struct xgbe_phy_if *VAR_11)
{
 VAR_11->phy_init = VAR_3;
 VAR_11->phy_exit = VAR_2;

 VAR_11->phy_reset = VAR_6;
 VAR_11->phy_start = VAR_7;
 VAR_11->phy_stop = VAR_9;

 VAR_11->phy_status = VAR_8;
 VAR_11->phy_config_aneg = VAR_1;

 VAR_11->phy_valid_speed = VAR_10;

 VAR_11->an_isr = VAR_0;

 VAR_11->module_info = VAR_5;
 VAR_11->module_eeprom = VAR_4;
}
