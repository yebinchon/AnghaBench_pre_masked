
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_impl_if {int module_eeprom; int module_info; int kr_training_post; int kr_training_pre; int an_post; int an_pre; int an_outcome; int an_advertising; int an_config; int an_mode; int cur_mode; int switch_mode; int get_mode; int set_mode; int use_mode; int valid_speed; int link_status; int stop; int start; int reset; int exit; int init; } ;
struct xgbe_phy_if {struct xgbe_phy_impl_if phy_impl; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void FUNC_0(struct xgbe_phy_if *VAR_22)
{
 struct xgbe_phy_impl_if *VAR_23 = &VAR_22->phy_impl;

 VAR_23->init = VAR_9;
 VAR_23->exit = VAR_7;

 VAR_23->reset = VAR_15;
 VAR_23->start = VAR_17;
 VAR_23->stop = VAR_18;

 VAR_23->link_status = VAR_12;

 VAR_23->valid_speed = VAR_21;

 VAR_23->use_mode = VAR_20;
 VAR_23->set_mode = VAR_16;
 VAR_23->get_mode = VAR_8;
 VAR_23->switch_mode = VAR_19;
 VAR_23->cur_mode = VAR_6;

 VAR_23->an_mode = VAR_2;

 VAR_23->an_config = VAR_1;

 VAR_23->an_advertising = VAR_0;

 VAR_23->an_outcome = VAR_3;

 VAR_23->an_pre = VAR_5;
 VAR_23->an_post = VAR_4;

 VAR_23->kr_training_pre = VAR_11;
 VAR_23->kr_training_post = VAR_10;

 VAR_23->module_info = VAR_14;
 VAR_23->module_eeprom = VAR_13;
}
