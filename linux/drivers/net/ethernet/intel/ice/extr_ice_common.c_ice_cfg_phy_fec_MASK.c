
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_aqc_set_phy_cfg_data {int link_fec_opt; int caps; } ;
typedef enum ice_fec_mode { ____Placeholder_ice_fec_mode } ice_fec_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





void
FUNC_0(struct ice_aqc_set_phy_cfg_data *VAR_9, enum ice_fec_mode VAR_10)
{
 switch (VAR_10) {
 case 130:



  VAR_9->link_fec_opt &= VAR_1 |
         VAR_3;
  VAR_9->link_fec_opt |= VAR_2 |
         VAR_4;
  break;
 case 128:



  VAR_9->link_fec_opt &= VAR_7;
  VAR_9->link_fec_opt |= VAR_5 |
         VAR_6;
  break;
 case 129:

  VAR_9->link_fec_opt &= ~VAR_8;
  break;
 case 131:

  VAR_9->caps &= VAR_0;
  break;
 }
}
