
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_impl_if {int kr_training_post; int kr_training_pre; int an_outcome; int an_advertising; int an_config; int an_mode; int cur_mode; int switch_mode; int get_mode; int set_mode; int use_mode; int valid_speed; int link_status; int stop; int start; int reset; int exit; int init; } ;
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

void FUNC_0(struct xgbe_phy_if *VAR_18)
{
 struct xgbe_phy_impl_if *VAR_19 = &VAR_18->phy_impl;

 VAR_19->init = VAR_7;
 VAR_19->exit = VAR_5;

 VAR_19->reset = VAR_11;
 VAR_19->start = VAR_13;
 VAR_19->stop = VAR_14;

 VAR_19->link_status = VAR_10;

 VAR_19->valid_speed = VAR_17;

 VAR_19->use_mode = VAR_16;
 VAR_19->set_mode = VAR_12;
 VAR_19->get_mode = VAR_6;
 VAR_19->switch_mode = VAR_15;
 VAR_19->cur_mode = VAR_4;

 VAR_19->an_mode = VAR_2;

 VAR_19->an_config = VAR_1;

 VAR_19->an_advertising = VAR_0;

 VAR_19->an_outcome = VAR_3;

 VAR_19->kr_training_pre = VAR_9;
 VAR_19->kr_training_post = VAR_8;
}
