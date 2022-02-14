
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {int (* phy_config_aneg ) (struct xgbe_prv_data*) ;int (* phy_valid_speed ) (struct xgbe_prv_data*,scalar_t__) ;} ;
struct TYPE_7__ {scalar_t__ phy_address; scalar_t__ autoneg; scalar_t__ duplex; scalar_t__ speed; } ;
struct TYPE_6__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_2__ link_modes; } ;
struct TYPE_5__ {scalar_t__ address; scalar_t__ autoneg; scalar_t__ duplex; scalar_t__ speed; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_4__ phy_if; TYPE_1__ phy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct net_device*,char*,...) ;
 struct xgbe_prv_data* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct xgbe_prv_data*,int ,struct net_device*,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct xgbe_prv_data*,scalar_t__) ;
 int FUNC_11 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_8,
       const struct ethtool_link_ksettings *VAR_9)
{
 struct xgbe_prv_data *VAR_10 = FUNC_7(VAR_8);
 struct ethtool_link_ksettings *VAR_11 = &VAR_10->phy.lks;
 FUNC_2(VAR_6);
 u32 VAR_12;
 int VAR_13;

 VAR_12 = VAR_9->base.speed;

 if (VAR_9->base.phy_address != VAR_10->phy.address) {
  FUNC_6(VAR_8, "invalid phy address %hhu\n",
      VAR_9->base.phy_address);
  return -VAR_4;
 }

 if ((VAR_9->base.autoneg != VAR_1) &&
     (VAR_9->base.autoneg != VAR_0)) {
  FUNC_6(VAR_8, "unsupported autoneg %hhu\n",
      VAR_9->base.autoneg);
  return -VAR_4;
 }

 if (VAR_9->base.autoneg == VAR_0) {
  if (!VAR_10->phy_if.phy_valid_speed(VAR_10, VAR_12)) {
   FUNC_6(VAR_8, "unsupported speed %u\n", VAR_12);
   return -VAR_4;
  }

  if (VAR_9->base.duplex != VAR_3) {
   FUNC_6(VAR_8, "unsupported duplex %hhu\n",
       VAR_9->base.duplex);
   return -VAR_4;
  }
 }

 FUNC_8(VAR_10, VAR_7, VAR_8,
    "requested advertisement 0x%*pb, phy supported 0x%*pb\n",
    VAR_5, VAR_9->link_modes.advertising,
    VAR_5, VAR_11->link_modes.supported);

 FUNC_3(VAR_6,
     VAR_9->link_modes.advertising, VAR_11->link_modes.supported,
     VAR_5);

 if ((VAR_9->base.autoneg == VAR_1) &&
     FUNC_5(VAR_6, VAR_5)) {
  FUNC_6(VAR_8,
      "unsupported requested advertisement\n");
  return -VAR_4;
 }

 VAR_13 = 0;
 VAR_10->phy.autoneg = VAR_9->base.autoneg;
 VAR_10->phy.speed = VAR_12;
 VAR_10->phy.duplex = VAR_9->base.duplex;
 FUNC_4(VAR_11->link_modes.advertising, VAR_6,
      VAR_5);

 if (VAR_9->base.autoneg == VAR_1)
  FUNC_1(VAR_11, VAR_2);
 else
  FUNC_0(VAR_11, VAR_2);

 if (FUNC_9(VAR_8))
  VAR_13 = VAR_10->phy_if.phy_config_aneg(VAR_10);

 return VAR_13;
}
