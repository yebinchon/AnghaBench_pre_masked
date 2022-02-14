
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_3__* back; struct ice_port_info* port_info; } ;
struct ice_link_status {int fec_info; } ;
struct TYPE_4__ {struct ice_link_status link_info; } ;
struct ice_port_info {TYPE_1__ phy; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ice_aqc_get_phy_caps_data {int caps; int link_fec_options; } ;
struct ethtool_fecparam {int fec; int active_fec; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


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



 int FUNC_0 (int *,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 struct ice_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_17, struct ethtool_fecparam *VAR_18)
{
 struct ice_netdev_priv *VAR_19 = FUNC_3(VAR_17);
 struct ice_aqc_get_phy_caps_data *VAR_20;
 struct ice_link_status *VAR_21;
 struct ice_vsi *VAR_22 = VAR_19->vsi;
 struct ice_port_info *VAR_23;
 enum ice_status VAR_24;
 int VAR_25 = 0;

 VAR_23 = VAR_22->port_info;

 if (!VAR_23)
  return -VAR_2;
 VAR_21 = &VAR_23->phy.link_info;


 switch (VAR_21->fec_info) {
 case 130:
  VAR_18->active_fec = VAR_4;
  break;
 case 129:

 case 128:
  VAR_18->active_fec = VAR_6;
  break;
 default:
  VAR_18->active_fec = VAR_5;
  break;
 }

 VAR_20 = FUNC_1(&VAR_22->back->pdev->dev, sizeof(*VAR_20), VAR_7);
 if (!VAR_20)
  return -VAR_1;

 VAR_24 = FUNC_2(VAR_23, 0, VAR_16,
         VAR_20, ((void*)0));
 if (VAR_24) {
  VAR_25 = -VAR_0;
  goto done;
 }


 if (VAR_20->caps & VAR_8)
  VAR_18->fec |= VAR_3;
 if (VAR_20->link_fec_options & VAR_9 ||
     VAR_20->link_fec_options & VAR_10 ||
     VAR_20->link_fec_options & VAR_11 ||
     VAR_20->link_fec_options & VAR_12)
  VAR_18->fec |= VAR_4;
 if (VAR_20->link_fec_options & VAR_13 ||
     VAR_20->link_fec_options & VAR_14 ||
     VAR_20->link_fec_options & VAR_15)
  VAR_18->fec |= VAR_6;
 if (VAR_20->link_fec_options == 0)
  VAR_18->fec |= VAR_5;

done:
 FUNC_0(&VAR_22->back->pdev->dev, VAR_20);
 return VAR_25;
}
