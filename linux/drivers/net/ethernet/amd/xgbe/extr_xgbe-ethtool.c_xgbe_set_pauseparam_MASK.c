
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* phy_config_aneg ) (struct xgbe_prv_data*) ;} ;
struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_3__ {scalar_t__ autoneg; scalar_t__ rx_pause; scalar_t__ tx_pause; scalar_t__ pause_autoneg; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; TYPE_1__ phy; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct xgbe_prv_data* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
          struct ethtool_pauseparam *VAR_5)
{
 struct xgbe_prv_data *VAR_6 = FUNC_4(VAR_4);
 struct ethtool_link_ksettings *VAR_7 = &VAR_6->phy.lks;
 int VAR_8 = 0;

 if (VAR_5->autoneg && (VAR_6->phy.autoneg != VAR_0)) {
  FUNC_3(VAR_4,
      "autoneg disabled, pause autoneg not available\n");
  return -VAR_2;
 }

 VAR_6->phy.pause_autoneg = VAR_5->autoneg;
 VAR_6->phy.tx_pause = VAR_5->tx_pause;
 VAR_6->phy.rx_pause = VAR_5->rx_pause;

 FUNC_1(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_1);

 if (VAR_5->rx_pause) {
  FUNC_2(VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_1);
 }

 if (VAR_5->tx_pause) {

  if (FUNC_0(VAR_7, VAR_1))
   FUNC_1(VAR_7, VAR_1);
  else
   FUNC_2(VAR_7, VAR_1);
 }

 if (FUNC_5(VAR_4))
  VAR_8 = VAR_6->phy_if.phy_config_aneg(VAR_6);

 return VAR_8;
}
