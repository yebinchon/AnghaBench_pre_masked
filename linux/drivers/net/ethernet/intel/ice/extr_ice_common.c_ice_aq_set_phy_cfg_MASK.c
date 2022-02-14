
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ice_sq_cd {int dummy; } ;
struct ice_hw {int dummy; } ;
struct ice_aqc_set_phy_cfg_data {int caps; unsigned long long low_power_ctrl; unsigned long long eee_cap; unsigned long long eeer_value; unsigned long long link_fec_opt; int phy_type_high; int phy_type_low; } ;
struct TYPE_3__ {int lport_num; } ;
struct TYPE_4__ {TYPE_1__ set_phy; } ;
struct ice_aq_desc {int flags; TYPE_2__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_set_phy_cfg_data*,int,struct ice_sq_cd*) ;
 int VAR_5 ;
 int FUNC_2 (struct ice_hw*,int ,char*,unsigned long long) ;
 int FUNC_3 (struct ice_aq_desc*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

enum ice_status
FUNC_5(struct ice_hw *VAR_6, u8 VAR_7,
     struct ice_aqc_set_phy_cfg_data *VAR_8, struct ice_sq_cd *VAR_9)
{
 struct ice_aq_desc VAR_10;

 if (!VAR_8)
  return VAR_4;


 if (VAR_8->caps & ~VAR_1) {
  FUNC_2(VAR_6, VAR_3,
     "Invalid bit is set in ice_aqc_set_phy_cfg_data->caps : 0x%x\n",
     VAR_8->caps);

  VAR_8->caps &= VAR_1;
 }

 FUNC_3(&VAR_10, VAR_5);
 VAR_10.params.set_phy.lport_num = VAR_7;
 VAR_10.flags |= FUNC_0(VAR_0);

 FUNC_2(VAR_6, VAR_2, "phy_type_low = 0x%llx\n",
    (unsigned long long)FUNC_4(VAR_8->phy_type_low));
 FUNC_2(VAR_6, VAR_2, "phy_type_high = 0x%llx\n",
    (unsigned long long)FUNC_4(VAR_8->phy_type_high));
 FUNC_2(VAR_6, VAR_2, "caps = 0x%x\n", VAR_8->caps);
 FUNC_2(VAR_6, VAR_2, "low_power_ctrl = 0x%x\n",
    VAR_8->low_power_ctrl);
 FUNC_2(VAR_6, VAR_2, "eee_cap = 0x%x\n", VAR_8->eee_cap);
 FUNC_2(VAR_6, VAR_2, "eeer_value = 0x%x\n", VAR_8->eeer_value);
 FUNC_2(VAR_6, VAR_2, "link_fec_opt = 0x%x\n", VAR_8->link_fec_opt);

 return FUNC_1(VAR_6, &VAR_10, VAR_8, sizeof(*VAR_8), VAR_9);
}
