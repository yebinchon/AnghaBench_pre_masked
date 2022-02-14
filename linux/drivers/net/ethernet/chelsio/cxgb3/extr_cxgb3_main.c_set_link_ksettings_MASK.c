
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct link_config {int supported; scalar_t__ autoneg; scalar_t__ advertising; int requested_duplex; scalar_t__ requested_speed; } ;
struct port_info {int mac; int phy; struct link_config link_config; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ autoneg; scalar_t__ speed; int duplex; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int *,struct link_config*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
         const struct ethtool_link_ksettings *VAR_9)
{
 struct port_info *VAR_10 = FUNC_1(VAR_8);
 struct link_config *VAR_11 = &VAR_10->link_config;
 u32 VAR_12;

 FUNC_0(&VAR_12,
      VAR_9->link_modes.advertising);

 if (!(VAR_11->supported & VAR_7)) {




  if (VAR_9->base.autoneg == VAR_2) {
   u32 VAR_13 = VAR_9->base.speed;
   int VAR_14 = FUNC_3(VAR_13, VAR_9->base.duplex);
   if (VAR_11->supported & VAR_14)
    return 0;
  }
  return -VAR_4;
 }

 if (VAR_9->base.autoneg == VAR_2) {
  u32 VAR_15 = VAR_9->base.speed;
  int VAR_16 = FUNC_3(VAR_15, VAR_9->base.duplex);

  if (!(VAR_11->supported & VAR_16) || (VAR_15 == VAR_5))
   return -VAR_4;
  VAR_11->requested_speed = VAR_15;
  VAR_11->requested_duplex = VAR_9->base.duplex;
  VAR_11->advertising = 0;
 } else {
  VAR_12 &= VAR_1;
  VAR_12 &= VAR_11->supported;
  if (!VAR_12)
   return -VAR_4;
  VAR_11->requested_speed = VAR_6;
  VAR_11->requested_duplex = VAR_3;
  VAR_11->advertising = VAR_12 | VAR_0;
 }
 VAR_11->autoneg = VAR_9->base.autoneg;
 if (FUNC_2(VAR_8))
  FUNC_4(&VAR_10->phy, &VAR_10->mac, VAR_11);
 return 0;
}
