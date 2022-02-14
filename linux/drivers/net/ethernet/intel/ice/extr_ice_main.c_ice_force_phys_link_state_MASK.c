
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ice_vsi {scalar_t__ type; int vsi_num; TYPE_4__* back; struct ice_port_info* port_info; } ;
struct TYPE_6__ {int link_info; } ;
struct TYPE_7__ {TYPE_2__ link_info; } ;
struct ice_port_info {int lport; TYPE_3__ phy; } ;
struct ice_aqc_set_phy_cfg_data {int caps; int link_fec_options; int link_fec_opt; int eeer_value; int eee_cap; int low_power_ctrl; int phy_type_high; int phy_type_low; } ;
struct ice_aqc_get_phy_caps_data {int caps; int link_fec_options; int link_fec_opt; int eeer_value; int eee_cap; int low_power_ctrl; int phy_type_high; int phy_type_low; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int hw; TYPE_1__* pdev; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct device*,struct ice_aqc_set_phy_cfg_data*) ;
 struct ice_aqc_set_phy_cfg_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct ice_port_info*,int,int ,struct ice_aqc_set_phy_cfg_data*,int *) ;
 int FUNC_4 (int *,int ,struct ice_aqc_set_phy_cfg_data*,int *) ;

__attribute__((used)) static int FUNC_5(struct ice_vsi *VAR_10, bool VAR_11)
{
 struct ice_aqc_get_phy_caps_data *VAR_12;
 struct ice_aqc_set_phy_cfg_data *VAR_13;
 struct ice_port_info *VAR_14;
 struct device *VAR_15;
 int VAR_16;

 if (!VAR_10 || !VAR_10->port_info || !VAR_10->back)
  return -VAR_0;
 if (VAR_10->type != VAR_9)
  return 0;

 VAR_15 = &VAR_10->back->pdev->dev;

 VAR_14 = VAR_10->port_info;

 VAR_12 = FUNC_2(VAR_15, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_14, 0, VAR_5, VAR_12,
          ((void*)0));
 if (VAR_16) {
  FUNC_0(VAR_15,
   "Failed to get phy capabilities, VSI %d error %d\n",
   VAR_10->vsi_num, VAR_16);
  VAR_16 = -VAR_1;
  goto out;
 }


 if (VAR_11 == !!(VAR_12->caps & VAR_4) &&
     VAR_11 == !!(VAR_14->phy.link_info.link_info & VAR_6))
  goto out;

 VAR_13 = FUNC_2(VAR_15, sizeof(*VAR_13), VAR_3);
 if (!VAR_13) {
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_13->phy_type_low = VAR_12->phy_type_low;
 VAR_13->phy_type_high = VAR_12->phy_type_high;
 VAR_13->caps = VAR_12->caps | VAR_7;
 VAR_13->low_power_ctrl = VAR_12->low_power_ctrl;
 VAR_13->eee_cap = VAR_12->eee_cap;
 VAR_13->eeer_value = VAR_12->eeer_value;
 VAR_13->link_fec_opt = VAR_12->link_fec_options;
 if (VAR_11)
  VAR_13->caps |= VAR_8;
 else
  VAR_13->caps &= ~VAR_8;

 VAR_16 = FUNC_4(&VAR_10->back->hw, VAR_14->lport, VAR_13, ((void*)0));
 if (VAR_16) {
  FUNC_0(VAR_15, "Failed to set phy config, VSI %d error %d\n",
   VAR_10->vsi_num, VAR_16);
  VAR_16 = -VAR_1;
 }

 FUNC_1(VAR_15, VAR_13);
out:
 FUNC_1(VAR_15, VAR_12);
 return VAR_16;
}
