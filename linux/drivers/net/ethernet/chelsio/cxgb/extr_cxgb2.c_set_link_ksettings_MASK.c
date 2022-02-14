
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct link_config {int supported; scalar_t__ autoneg; scalar_t__ advertising; int requested_duplex; scalar_t__ requested_speed; } ;
struct port_info {int mac; int phy; struct link_config link_config; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct TYPE_4__ {scalar_t__ autoneg; scalar_t__ speed; int duplex; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct adapter {struct port_info* port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,struct link_config*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9,
         const struct ethtool_link_ksettings *VAR_10)
{
 struct adapter *VAR_11 = VAR_9->ml_priv;
 struct port_info *VAR_12 = &VAR_11->port[VAR_9->if_port];
 struct link_config *VAR_13 = &VAR_12->link_config;
 u32 VAR_14;

 FUNC_0(&VAR_14,
      VAR_10->link_modes.advertising);

 if (!(VAR_13->supported & VAR_8))
  return -VAR_5;

 if (VAR_10->base.autoneg == VAR_2) {
  u32 VAR_15 = VAR_10->base.speed;
  int VAR_16 = FUNC_2(VAR_15, VAR_10->base.duplex);

  if (!(VAR_13->supported & VAR_16) || (VAR_15 == VAR_6))
   return -VAR_4;
  VAR_13->requested_speed = VAR_15;
  VAR_13->requested_duplex = VAR_10->base.duplex;
  VAR_13->advertising = 0;
 } else {
  VAR_14 &= VAR_1;
  if (VAR_14 & (VAR_14 - 1))
   VAR_14 = VAR_13->supported;
  VAR_14 &= VAR_13->supported;
  if (!VAR_14)
   return -VAR_4;
  VAR_13->requested_speed = VAR_7;
  VAR_13->requested_duplex = VAR_3;
  VAR_13->advertising = VAR_14 | VAR_0;
 }
 VAR_13->autoneg = VAR_10->base.autoneg;
 if (FUNC_1(VAR_9))
  FUNC_3(VAR_12->phy, VAR_12->mac, VAR_13);
 return 0;
}
