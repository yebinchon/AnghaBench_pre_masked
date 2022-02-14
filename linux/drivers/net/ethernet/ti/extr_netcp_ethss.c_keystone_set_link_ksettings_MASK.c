
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct phy_device {int dummy; } ;
struct netcp_intf {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct gbe_intf {TYPE_3__* slave; } ;
struct TYPE_5__ {int supported; int advertising; } ;
struct TYPE_4__ {scalar_t__ port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct TYPE_6__ {scalar_t__ phy_port_t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int*,int ) ;
 struct gbe_intf* FUNC_1 (struct netcp_intf*) ;
 struct netcp_intf* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_11,
           const struct ethtool_link_ksettings *VAR_12)
{
 struct netcp_intf *VAR_13 = FUNC_2(VAR_11);
 struct phy_device *VAR_14 = VAR_11->phydev;
 struct gbe_intf *VAR_15;
 u8 VAR_16 = VAR_12->base.port;
 u32 VAR_17, VAR_18;
 u32 VAR_19;

 FUNC_0(&VAR_17,
      VAR_12->link_modes.advertising);
 FUNC_0(&VAR_18,
      VAR_12->link_modes.supported);
 VAR_19 = VAR_17 & VAR_18;

 if (!VAR_14)
  return -VAR_5;

 VAR_15 = FUNC_1(VAR_13);
 if (!VAR_15)
  return -VAR_5;

 if (!VAR_15->slave)
  return -VAR_5;

 if (VAR_16 != VAR_15->slave->phy_port_t) {
  if ((VAR_16 == VAR_10) && !(VAR_19 & VAR_4))
   return -VAR_5;

  if ((VAR_16 == VAR_6) && !(VAR_19 & VAR_0))
   return -VAR_5;

  if ((VAR_16 == VAR_7) && !(VAR_19 & VAR_1))
   return -VAR_5;

  if ((VAR_16 == VAR_9) && !(VAR_19 & VAR_3))
   return -VAR_5;

  if ((VAR_16 == VAR_8) && !(VAR_19 & VAR_2))
   return -VAR_5;
 }

 VAR_15->slave->phy_port_t = VAR_16;
 return FUNC_3(VAR_14, VAR_12);
}
