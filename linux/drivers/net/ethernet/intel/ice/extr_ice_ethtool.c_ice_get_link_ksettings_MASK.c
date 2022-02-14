
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ice_vsi {TYPE_4__* back; TYPE_5__* port_info; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ice_link_status {int link_info; int an_info; } ;
struct ice_aqc_get_phy_caps_data {int caps; int link_fec_options; } ;
struct TYPE_7__ {int port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_6__ {int media_type; struct ice_link_status link_info; } ;
struct TYPE_10__ {TYPE_1__ phy; } ;
struct TYPE_9__ {TYPE_3__* pdev; } ;
struct TYPE_8__ {int dev; } ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;




 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int *,struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_3 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_4 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_5 (TYPE_5__*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_6 (struct ethtool_link_ksettings*,struct net_device*) ;
 int FUNC_7 (struct ethtool_link_ksettings*,struct net_device*) ;
 int VAR_33 ;
 struct ice_netdev_priv* FUNC_8 (struct net_device*) ;
 int VAR_34 ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_35,
         struct ethtool_link_ksettings *VAR_36)
{
 struct ice_netdev_priv *VAR_37 = FUNC_8(VAR_35);
 struct ice_aqc_get_phy_caps_data *VAR_38;
 struct ice_link_status *VAR_39;
 struct ice_vsi *VAR_40 = VAR_37->vsi;
 enum ice_status VAR_41;
 int VAR_42 = 0;

 FUNC_4(VAR_36, VAR_34);
 FUNC_4(VAR_36, VAR_32);
 FUNC_4(VAR_36, VAR_33);
 VAR_39 = &VAR_40->port_info->phy.link_info;


 if (VAR_39->link_info & VAR_24)
  FUNC_7(VAR_36, VAR_35);
 else
  FUNC_6(VAR_36, VAR_35);


 VAR_36->base.autoneg = (VAR_39->an_info & VAR_23) ?
  VAR_1 : VAR_0;


 switch (VAR_40->port_info->phy.media_type) {
 case 128:
  FUNC_2(VAR_36, VAR_34, VAR_10);
  VAR_36->base.port = VAR_26;
  break;
 case 130:
  FUNC_2(VAR_36, VAR_34, VAR_31);
  FUNC_2(VAR_36, VAR_32, VAR_31);
  VAR_36->base.port = VAR_29;
  break;
 case 131:
  FUNC_2(VAR_36, VAR_34, VAR_3);
  FUNC_2(VAR_36, VAR_34, VAR_4);
  FUNC_2(VAR_36, VAR_32, VAR_3);
  FUNC_2(VAR_36, VAR_32,
           VAR_4);
  VAR_36->base.port = VAR_27;
  break;
 case 129:
  FUNC_2(VAR_36, VAR_34, VAR_10);
  FUNC_2(VAR_36, VAR_32, VAR_10);
  VAR_36->base.port = VAR_25;
  break;
 default:
  VAR_36->base.port = VAR_28;
  break;
 }


 FUNC_2(VAR_36, VAR_34, VAR_30);

 VAR_38 = FUNC_1(&VAR_40->back->pdev->dev, sizeof(*VAR_38), VAR_11);
 if (!VAR_38)
  return -VAR_6;

 VAR_41 = FUNC_5(VAR_40->port_info, 0,
         VAR_21, VAR_38, ((void*)0));
 if (VAR_41) {
  VAR_42 = -VAR_5;
  goto done;
 }


 if ((VAR_38->caps & VAR_13) &&
     (VAR_38->caps & VAR_12)) {
  FUNC_2(VAR_36, VAR_32, VAR_30);
  FUNC_2(VAR_36, VAR_32,
           VAR_2);
 } else if (VAR_38->caps & VAR_13) {
  FUNC_2(VAR_36, VAR_32,
           VAR_2);
 } else if (VAR_38->caps & VAR_12) {
  FUNC_2(VAR_36, VAR_32, VAR_30);
  FUNC_2(VAR_36, VAR_32,
           VAR_2);
 } else {
  FUNC_3(VAR_36, VAR_32, VAR_30);
  FUNC_3(VAR_36, VAR_32,
           VAR_2);
 }


 FUNC_2(VAR_36, VAR_32, VAR_8);

 if (VAR_38->link_fec_options & VAR_15 ||
     VAR_38->link_fec_options & VAR_17)
  FUNC_2(VAR_36, VAR_32,
           VAR_7);
 if (VAR_38->link_fec_options & VAR_18 ||
     VAR_38->link_fec_options & VAR_19)
  FUNC_2(VAR_36, VAR_32, VAR_9);

 VAR_41 = FUNC_5(VAR_40->port_info, 0,
         VAR_22, VAR_38, ((void*)0));
 if (VAR_41) {
  VAR_42 = -VAR_5;
  goto done;
 }


 FUNC_2(VAR_36, VAR_34, VAR_8);

 if (VAR_38->link_fec_options & VAR_14 ||
     VAR_38->link_fec_options & VAR_16)
  FUNC_2(VAR_36, VAR_34, VAR_7);
 if (VAR_38->link_fec_options & VAR_20)
  FUNC_2(VAR_36, VAR_34, VAR_9);

done:
 FUNC_0(&VAR_40->back->pdev->dev, VAR_38);
 return VAR_42;
}
