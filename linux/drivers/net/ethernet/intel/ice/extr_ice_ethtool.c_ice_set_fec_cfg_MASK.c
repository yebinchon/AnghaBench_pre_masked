
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct ice_vsi {scalar_t__ type; TYPE_2__* back; struct ice_port_info* port_info; } ;
struct ice_port_info {int lport; int hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ice_aqc_set_phy_cfg_data {scalar_t__ caps; scalar_t__ link_fec_opt; int member_0; } ;
struct ice_aqc_get_phy_caps_data {scalar_t__ caps; scalar_t__ link_fec_options; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_fec_mode { ____Placeholder_ice_fec_mode } ice_fec_mode ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_3 (int ,int ,struct ice_aqc_set_phy_cfg_data*,int *) ;
 int FUNC_4 (struct ice_aqc_set_phy_cfg_data*,int) ;
 int FUNC_5 (struct ice_aqc_get_phy_caps_data*,struct ice_aqc_set_phy_cfg_data*) ;
 int FUNC_6 (struct ice_aqc_get_phy_caps_data*,int ,int) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_11, enum ice_fec_mode VAR_12)
{
 struct ice_netdev_priv *VAR_13 = FUNC_8(VAR_11);
 struct ice_aqc_set_phy_cfg_data VAR_14 = { 0 };
 struct ice_aqc_get_phy_caps_data *VAR_15;
 struct ice_vsi *VAR_16 = VAR_13->vsi;
 u8 VAR_17, VAR_18;
 struct ice_port_info *VAR_19;
 enum ice_status VAR_20;
 int VAR_21 = 0;

 VAR_19 = VAR_16->port_info;
 if (!VAR_19)
  return -VAR_2;


 if (VAR_16->type != VAR_10) {
  FUNC_7(VAR_11, "Changing FEC parameters only supported for PF VSI\n");
  return -VAR_2;
 }


 VAR_15 = FUNC_1(&VAR_16->back->pdev->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_20 = FUNC_2(VAR_19, 0, VAR_6,
         VAR_15, ((void*)0));
 if (VAR_20) {
  VAR_21 = -VAR_0;
  goto done;
 }


 FUNC_5(VAR_15, &VAR_14);
 VAR_17 = VAR_15->caps;
 VAR_18 = VAR_15->link_fec_options;


 FUNC_6(VAR_15, 0, sizeof(*VAR_15));

 VAR_20 = FUNC_2(VAR_19, 0, VAR_7,
         VAR_15, ((void*)0));
 if (VAR_20) {
  VAR_21 = -VAR_0;
  goto done;
 }

 VAR_14.caps |= (VAR_15->caps & VAR_5);
 VAR_14.link_fec_opt = VAR_15->link_fec_options;

 FUNC_4(&VAR_14, VAR_12);


 if ((VAR_14.caps & VAR_8) !=
     (VAR_17 & VAR_5) ||
     VAR_14.link_fec_opt != VAR_18) {
  if (VAR_15->caps & VAR_4)
   VAR_14.caps |= VAR_9;

  VAR_20 = FUNC_3(VAR_19->hw, VAR_19->lport, &VAR_14, ((void*)0));

  if (VAR_20)
   VAR_21 = -VAR_0;
 }

done:
 FUNC_0(&VAR_16->back->pdev->dev, VAR_15);
 return VAR_21;
}
