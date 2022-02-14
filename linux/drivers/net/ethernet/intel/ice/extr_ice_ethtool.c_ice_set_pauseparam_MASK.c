
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ice_vsi {scalar_t__ type; struct ice_port_info* port_info; struct ice_pf* back; } ;
struct TYPE_7__ {int req_mode; } ;
struct TYPE_6__ {scalar_t__ pfcena; } ;
struct ice_dcbx_cfg {TYPE_2__ pfc; } ;
struct ice_link_status {int link_info; int an_info; } ;
struct TYPE_5__ {struct ice_link_status link_info; } ;
struct ice_port_info {TYPE_3__ fc; struct ice_dcbx_cfg local_dcbx_cfg; TYPE_1__ phy; } ;
struct TYPE_8__ {int sq_last_status; } ;
struct ice_hw {TYPE_4__ adminq; } ;
struct ice_pf {int state; struct ice_hw hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct ice_aqc_get_phy_caps_data {int caps; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct ice_port_info*,int,int ,struct ice_aqc_get_phy_caps_data*,int *) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ice_vsi*,int) ;
 int FUNC_4 (struct ice_port_info*,int*,int) ;
 int FUNC_5 (struct ice_vsi*) ;
 int FUNC_6 (struct ice_aqc_get_phy_caps_data*) ;
 struct ice_aqc_get_phy_caps_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct net_device*,char*,...) ;
 struct ice_netdev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_21, struct ethtool_pauseparam *VAR_22)
{
 struct ice_netdev_priv *VAR_23 = FUNC_10(VAR_21);
 struct ice_aqc_get_phy_caps_data *VAR_24;
 struct ice_link_status *VAR_25;
 struct ice_pf *VAR_26 = VAR_23->vsi->back;
 struct ice_dcbx_cfg *VAR_27;
 struct ice_vsi *VAR_28 = VAR_23->vsi;
 struct ice_hw *VAR_29 = &VAR_26->hw;
 struct ice_port_info *VAR_30;
 enum ice_status VAR_31;
 u8 VAR_32;
 bool VAR_33;
 int VAR_34 = 0;
 u32 VAR_35;

 VAR_30 = VAR_28->port_info;
 VAR_25 = &VAR_30->phy.link_info;
 VAR_27 = &VAR_30->local_dcbx_cfg;
 VAR_33 = VAR_25->link_info & VAR_11;




 if (VAR_28->type != VAR_19) {
  FUNC_9(VAR_21, "Changing flow control parameters only supported for PF VSI\n");
  return -VAR_6;
 }







 VAR_24 = FUNC_7(sizeof(*VAR_24), VAR_7);
 if (!VAR_24)
  return -VAR_5;


 VAR_31 = FUNC_0(VAR_30, 0, VAR_9, VAR_24,
         ((void*)0));
 if (VAR_31) {
  FUNC_6(VAR_24);
  return -VAR_4;
 }

 VAR_35 = ((VAR_24->caps & VAR_8) ?
   VAR_1 : VAR_0);

 FUNC_6(VAR_24);

 if (VAR_22->autoneg != VAR_35) {
  FUNC_9(VAR_21, "To change autoneg please use: ethtool -s <dev> autoneg <on|off>\n");
  return -VAR_6;
 }


 if (!FUNC_13(VAR_20, VAR_26->state) &&
     !(VAR_25->an_info & VAR_10)) {

  FUNC_9(VAR_21, "Autoneg did not complete so changing settings may not result in an actual change.\n");
 }

 if (VAR_27->pfc.pfcena) {
  FUNC_9(VAR_21, "Priority flow control enabled. Cannot set link flow control.\n");
  return -VAR_6;
 }
 if (VAR_22->rx_pause && VAR_22->tx_pause)
  VAR_30->fc.req_mode = VAR_12;
 else if (VAR_22->rx_pause && !VAR_22->tx_pause)
  VAR_30->fc.req_mode = VAR_14;
 else if (!VAR_22->rx_pause && VAR_22->tx_pause)
  VAR_30->fc.req_mode = VAR_15;
 else if (!VAR_22->rx_pause && !VAR_22->tx_pause)
  VAR_30->fc.req_mode = VAR_13;
 else
  return -VAR_3;




 FUNC_3(VAR_28, 0);
 FUNC_11(VAR_21);
 FUNC_12(VAR_21);


 VAR_31 = FUNC_4(VAR_30, &VAR_32, VAR_33);

 if (VAR_32 & VAR_16) {
  FUNC_9(VAR_21, "Set fc failed on the get_phy_capabilities call with err %d aq_err %d\n",
       VAR_31, VAR_29->adminq.sq_last_status);
  VAR_34 = -VAR_2;
 } else if (VAR_32 & VAR_17) {
  FUNC_9(VAR_21, "Set fc failed on the set_phy_config call with err %d aq_err %d\n",
       VAR_31, VAR_29->adminq.sq_last_status);
  VAR_34 = -VAR_2;
 } else if (VAR_32 & VAR_18) {
  FUNC_9(VAR_21, "Set fc failed on the get_link_info call with err %d aq_err %d\n",
       VAR_31, VAR_29->adminq.sq_last_status);
  VAR_34 = -VAR_2;
 }

 if (!FUNC_13(VAR_20, VAR_26->state)) {



  FUNC_8(75);
  if (!FUNC_13(VAR_20, VAR_26->state))
   return FUNC_2(VAR_21);

  FUNC_1(VAR_28);
  FUNC_5(VAR_28);
 }

 return VAR_34;
}
