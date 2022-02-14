
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int requested_mode; } ;
struct i40e_link_status {int link_info; int an_info; } ;
struct TYPE_6__ {int media_type; struct i40e_link_status link_info; } ;
struct i40e_hw {TYPE_4__ fc; TYPE_2__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_7__ {int port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_3__ base; } ;
struct TYPE_5__ {struct i40e_pf* back; } ;


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
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_3 (struct i40e_hw*,struct ethtool_link_ksettings*,struct i40e_pf*) ;
 int FUNC_4 (struct i40e_hw*,struct ethtool_link_ksettings*,struct net_device*,struct i40e_pf*) ;
 struct i40e_netdev_priv* FUNC_5 (struct net_device*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_17,
       struct ethtool_link_ksettings *VAR_18)
{
 struct i40e_netdev_priv *VAR_19 = FUNC_5(VAR_17);
 struct i40e_pf *VAR_20 = VAR_19->vsi->back;
 struct i40e_hw *VAR_21 = &VAR_20->hw;
 struct i40e_link_status *VAR_22 = &VAR_21->phy.link_info;
 bool VAR_23 = VAR_22->link_info & VAR_7;

 FUNC_2(VAR_18, VAR_16);
 FUNC_2(VAR_18, VAR_15);

 if (VAR_23)
  FUNC_4(VAR_21, VAR_18, VAR_17, VAR_20);
 else
  FUNC_3(VAR_21, VAR_18, VAR_20);



 VAR_18->base.autoneg = ((VAR_22->an_info & VAR_6) ?
       VAR_1 : VAR_0);


 switch (VAR_21->phy.media_type) {
 case 133:
  FUNC_0(VAR_18, VAR_16, VAR_3);
  FUNC_0(VAR_18, VAR_16, VAR_4);
  FUNC_0(VAR_18, VAR_15, VAR_3);
  FUNC_0(VAR_18, VAR_15,
           VAR_4);
  VAR_18->base.port = VAR_10;
  break;
 case 132:
  FUNC_0(VAR_18, VAR_16, VAR_14);
  FUNC_0(VAR_18, VAR_15, VAR_14);
  VAR_18->base.port = VAR_12;
  break;
 case 130:
 case 131:
  FUNC_0(VAR_18, VAR_16, VAR_5);
  FUNC_0(VAR_18, VAR_15, VAR_5);
  VAR_18->base.port = VAR_8;
  break;
 case 129:
  FUNC_0(VAR_18, VAR_16, VAR_5);
  FUNC_0(VAR_18, VAR_15, VAR_5);
  VAR_18->base.port = VAR_9;
  break;
 case 128:
 default:
  VAR_18->base.port = VAR_11;
  break;
 }


 FUNC_0(VAR_18, VAR_16, VAR_13);

 switch (VAR_21->fc.requested_mode) {
 case 136:
  FUNC_0(VAR_18, VAR_15, VAR_13);
  break;
 case 134:
  FUNC_0(VAR_18, VAR_15,
           VAR_2);
  break;
 case 135:
  FUNC_0(VAR_18, VAR_15, VAR_13);
  FUNC_0(VAR_18, VAR_15,
           VAR_2);
  break;
 default:
  FUNC_1(VAR_18, VAR_15, VAR_13);
  FUNC_1(VAR_18, VAR_15,
           VAR_2);
  break;
 }

 return 0;
}
