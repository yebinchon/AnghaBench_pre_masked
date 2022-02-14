
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_11__ {scalar_t__ mdix; int autoneg_advertised; } ;
struct TYPE_9__ {int requested_mode; } ;
struct TYPE_8__ {int autoneg; } ;
struct igc_hw {TYPE_5__ phy; TYPE_3__ fc; TYPE_2__ mac; } ;
struct igc_adapter {int state; int netdev; TYPE_4__* pdev; scalar_t__ fc_autoneg; struct igc_hw hw; } ;
struct TYPE_12__ {scalar_t__ eth_tp_mdix_ctrl; scalar_t__ autoneg; } ;
struct TYPE_7__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_6__ base; TYPE_1__ link_modes; } ;
struct TYPE_10__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct igc_hw*) ;
 int FUNC_5 (struct igc_adapter*) ;
 int VAR_5 ;
 int FUNC_6 (struct igc_adapter*) ;
 int FUNC_7 (struct igc_adapter*) ;
 struct igc_adapter* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6,
      const struct ethtool_link_ksettings *VAR_7)
{
 struct igc_adapter *VAR_8 = FUNC_8(VAR_6);
 struct igc_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10;




 if (FUNC_4(VAR_9)) {
  FUNC_1(&VAR_8->pdev->dev,
   "Cannot change link characteristics when reset is active.\n");
  return -VAR_2;
 }





 if (VAR_7->base.eth_tp_mdix_ctrl) {
  if (VAR_7->base.eth_tp_mdix_ctrl != VAR_3 &&
      VAR_7->base.autoneg != VAR_0) {
   FUNC_1(&VAR_8->pdev->dev, "forcing MDI/MDI-X state is not supported when link speed and/or duplex are forced\n");
   return -VAR_2;
  }
 }

 while (FUNC_10(VAR_4, &VAR_8->state))
  FUNC_11(1000, 2000);

 FUNC_3(&VAR_10,
      VAR_7->link_modes.advertising);

 if (VAR_7->base.autoneg == VAR_0) {
  VAR_9->mac.autoneg = 1;
  VAR_9->phy.autoneg_advertised = VAR_10;
  if (VAR_8->fc_autoneg)
   VAR_9->fc.requested_mode = VAR_5;
 } else {

  FUNC_2(&VAR_8->pdev->dev,
    "Force mode currently not supported\n");
 }


 if (VAR_7->base.eth_tp_mdix_ctrl) {



  if (VAR_7->base.eth_tp_mdix_ctrl == VAR_3)
   VAR_9->phy.mdix = VAR_1;
  else
   VAR_9->phy.mdix = VAR_7->base.eth_tp_mdix_ctrl;
 }


 if (FUNC_9(VAR_8->netdev)) {
  FUNC_5(VAR_8);
  FUNC_7(VAR_8);
 } else {
  FUNC_6(VAR_8);
 }

 FUNC_0(VAR_4, &VAR_8->state);

 return 0;
}
