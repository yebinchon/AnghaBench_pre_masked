
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ current_mode; } ;
struct TYPE_7__ {scalar_t__ pfcenable; } ;
struct i40e_dcbx_config {TYPE_3__ pfc; } ;
struct i40e_link_status {int an_info; } ;
struct TYPE_6__ {struct i40e_link_status link_info; } ;
struct i40e_hw {TYPE_4__ fc; struct i40e_dcbx_config local_dcbx_config; TYPE_2__ phy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct TYPE_5__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6,
    struct ethtool_pauseparam *VAR_7)
{
 struct i40e_netdev_priv *VAR_8 = FUNC_0(VAR_6);
 struct i40e_pf *VAR_9 = VAR_8->vsi->back;
 struct i40e_hw *VAR_10 = &VAR_9->hw;
 struct i40e_link_status *VAR_11 = &VAR_10->phy.link_info;
 struct i40e_dcbx_config *VAR_12 = &VAR_10->local_dcbx_config;

 VAR_7->autoneg =
  ((VAR_11->an_info & VAR_2) ?
    VAR_1 : VAR_0);


 if (VAR_12->pfc.pfcenable) {
  VAR_7->rx_pause = 0;
  VAR_7->tx_pause = 0;
  return;
 }

 if (VAR_10->fc.current_mode == VAR_4) {
  VAR_7->rx_pause = 1;
 } else if (VAR_10->fc.current_mode == VAR_5) {
  VAR_7->tx_pause = 1;
 } else if (VAR_10->fc.current_mode == VAR_3) {
  VAR_7->rx_pause = 1;
  VAR_7->tx_pause = 1;
 }
}
