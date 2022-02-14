
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int req_mode; } ;
struct ice_port_info {int lport; TYPE_1__ fc; struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_set_phy_cfg_data {int caps; int link_fec_opt; int eeer_value; int eee_cap; int low_power_ctrl; int phy_type_low; int phy_type_high; int member_0; } ;
struct ice_aqc_get_phy_caps_data {int caps; int link_fec_options; int eeer_value; int eee_cap; int low_power_ctrl; int phy_type_low; int phy_type_high; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


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
 int FUNC_0 (int ,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_3 (struct ice_hw*,int ,struct ice_aqc_set_phy_cfg_data*,int *) ;
 int FUNC_4 (struct ice_hw*) ;
 int FUNC_5 (struct ice_port_info*) ;
 int FUNC_6 (int) ;

enum ice_status
FUNC_7(struct ice_port_info *VAR_11, u8 *VAR_12, bool VAR_13)
{
 struct ice_aqc_set_phy_cfg_data VAR_14 = { 0 };
 struct ice_aqc_get_phy_caps_data *VAR_15;
 enum ice_status VAR_16;
 u8 VAR_17 = 0x0;
 struct ice_hw *VAR_18;

 if (!VAR_11)
  return VAR_6;
 VAR_18 = VAR_11->hw;
 *VAR_12 = VAR_8;

 switch (VAR_11->fc.req_mode) {
 case 130:
  VAR_17 |= VAR_2;
  VAR_17 |= VAR_1;
  break;
 case 129:
  VAR_17 |= VAR_1;
  break;
 case 128:
  VAR_17 |= VAR_2;
  break;
 default:
  break;
 }

 VAR_15 = FUNC_1(FUNC_4(VAR_18), sizeof(*VAR_15), VAR_0);
 if (!VAR_15)
  return VAR_5;


 VAR_16 = FUNC_2(VAR_11, 0, VAR_3, VAR_15,
         ((void*)0));
 if (VAR_16) {
  *VAR_12 = VAR_7;
  goto out;
 }


 VAR_14.caps = VAR_15->caps & ~(VAR_2 |
       VAR_1);


 VAR_14.caps |= VAR_17;


 if (VAR_14.caps != VAR_15->caps) {
  int VAR_19, VAR_20 = 10;


  if (VAR_13)
   VAR_14.caps |= VAR_4;

  VAR_14.phy_type_high = VAR_15->phy_type_high;
  VAR_14.phy_type_low = VAR_15->phy_type_low;
  VAR_14.low_power_ctrl = VAR_15->low_power_ctrl;
  VAR_14.eee_cap = VAR_15->eee_cap;
  VAR_14.eeer_value = VAR_15->eeer_value;
  VAR_14.link_fec_opt = VAR_15->link_fec_options;

  VAR_16 = FUNC_3(VAR_18, VAR_11->lport, &VAR_14, ((void*)0));
  if (VAR_16) {
   *VAR_12 = VAR_9;
   goto out;
  }






  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   VAR_16 = FUNC_5(VAR_11);

   if (!VAR_16)
    break;

   FUNC_6(100);
  }

  if (VAR_16)
   *VAR_12 = VAR_10;
 }

out:
 FUNC_0(FUNC_4(VAR_18), VAR_15);
 return VAR_16;
}
