
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_6__ {scalar_t__ rx_pause; scalar_t__ tx_pause; int pause_autoneg; scalar_t__ link; int duplex; int speed; int autoneg; scalar_t__ address; struct ethtool_link_ksettings lks; } ;
struct TYPE_4__ {int (* init ) (struct xgbe_prv_data*) ;} ;
struct TYPE_5__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int fec_ability; scalar_t__ tx_pause; scalar_t__ rx_pause; TYPE_3__ phy; int pause_autoneg; TYPE_2__ phy_if; int mdio_mmd; int an_work; int an_irq_work; int an_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_3 (struct ethtool_link_ksettings*,int ,struct ethtool_link_ksettings*,int ) ;
 int FUNC_4 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_5 (struct xgbe_prv_data*,int ,int ) ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_11(struct xgbe_prv_data *VAR_17)
{
 struct ethtool_link_ksettings *VAR_18 = &VAR_17->phy.lks;
 int VAR_19;

 FUNC_6(&VAR_17->an_mutex);
 FUNC_0(&VAR_17->an_irq_work, VAR_15);
 FUNC_0(&VAR_17->an_work, VAR_16);
 VAR_17->mdio_mmd = VAR_6;


 VAR_17->fec_ability = FUNC_5(VAR_17, VAR_7,
     VAR_8);
 VAR_17->fec_ability &= (VAR_9 |
          VAR_10);


 VAR_19 = VAR_17->phy_if.phy_impl.init(VAR_17);
 if (VAR_19)
  return VAR_19;


 FUNC_3(VAR_18, VAR_13, VAR_18, VAR_14);

 VAR_17->phy.address = 0;

 if (FUNC_1(VAR_18, VAR_3)) {
  VAR_17->phy.autoneg = VAR_1;
  VAR_17->phy.speed = VAR_12;
  VAR_17->phy.duplex = VAR_5;
 } else {
  VAR_17->phy.autoneg = VAR_0;
  VAR_17->phy.speed = FUNC_10(VAR_17);
  VAR_17->phy.duplex = VAR_4;
 }

 VAR_17->phy.link = 0;

 VAR_17->phy.pause_autoneg = VAR_17->pause_autoneg;
 VAR_17->phy.tx_pause = VAR_17->tx_pause;
 VAR_17->phy.rx_pause = VAR_17->rx_pause;


 FUNC_2(VAR_18, VAR_11);
 FUNC_2(VAR_18, VAR_2);

 if (VAR_17->rx_pause) {
  FUNC_4(VAR_18, VAR_11);
  FUNC_4(VAR_18, VAR_2);
 }

 if (VAR_17->tx_pause) {

  if (FUNC_1(VAR_18, VAR_2))
   FUNC_2(VAR_18, VAR_2);
  else
   FUNC_4(VAR_18, VAR_2);
 }

 if (FUNC_7(VAR_17))
  FUNC_9(VAR_17);

 return 0;
}
