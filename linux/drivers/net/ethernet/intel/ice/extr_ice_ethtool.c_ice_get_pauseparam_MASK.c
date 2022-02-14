
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_3__* back; struct ice_port_info* port_info; } ;
struct TYPE_4__ {scalar_t__ pfcena; } ;
struct ice_dcbx_cfg {TYPE_1__ pfc; } ;
struct ice_port_info {struct ice_dcbx_cfg local_dcbx_cfg; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ice_aqc_get_phy_caps_data {int caps; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
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
 int FUNC_0 (int *,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 struct ice_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_7, struct ethtool_pauseparam *VAR_8)
{
 struct ice_netdev_priv *VAR_9 = FUNC_3(VAR_7);
 struct ice_port_info *VAR_10 = VAR_9->vsi->port_info;
 struct ice_aqc_get_phy_caps_data *VAR_11;
 struct ice_vsi *VAR_12 = VAR_9->vsi;
 struct ice_dcbx_cfg *VAR_13;
 enum ice_status VAR_14;


 VAR_8->rx_pause = 0;
 VAR_8->tx_pause = 0;

 VAR_13 = &VAR_10->local_dcbx_cfg;

 VAR_11 = FUNC_1(&VAR_12->back->pdev->dev, sizeof(*VAR_11),
        VAR_2);
 if (!VAR_11)
  return;


 VAR_14 = FUNC_2(VAR_10, 0, VAR_6, VAR_11,
         ((void*)0));
 if (VAR_14)
  goto out;

 VAR_8->autoneg = ((VAR_11->caps & VAR_3) ?
   VAR_1 : VAR_0);

 if (VAR_13->pfc.pfcena)

  goto out;

 if (VAR_11->caps & VAR_5)
  VAR_8->tx_pause = 1;
 if (VAR_11->caps & VAR_4)
  VAR_8->rx_pause = 1;

out:
 FUNC_0(&VAR_12->back->pdev->dev, VAR_11);
}
