
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_aqc_set_phy_cfg_data {int link_fec_opt; int eeer_value; int eee_cap; int low_power_ctrl; int caps; int phy_type_high; int phy_type_low; } ;
struct ice_aqc_get_phy_caps_data {int link_fec_options; int eeer_value; int eee_cap; int low_power_ctrl; int caps; int phy_type_high; int phy_type_low; } ;



void
FUNC_0(struct ice_aqc_get_phy_caps_data *VAR_0,
    struct ice_aqc_set_phy_cfg_data *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 VAR_1->phy_type_low = VAR_0->phy_type_low;
 VAR_1->phy_type_high = VAR_0->phy_type_high;
 VAR_1->caps = VAR_0->caps;
 VAR_1->low_power_ctrl = VAR_0->low_power_ctrl;
 VAR_1->eee_cap = VAR_0->eee_cap;
 VAR_1->eeer_value = VAR_0->eeer_value;
 VAR_1->link_fec_opt = VAR_0->link_fec_options;
}
