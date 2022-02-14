
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {scalar_t__ port; int phy_address; int duplex; int speed; int eth_tp_mdix; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct bnx2 {int phy_flags; scalar_t__ phy_port; int advertising; int autoneg; int phy_addr; int phy_lock; int duplex; int line_speed; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_21,
   struct ethtool_link_ksettings *VAR_22)
{
 struct bnx2 *VAR_23 = FUNC_1(VAR_21);
 int VAR_24 = 0, VAR_25 = 0;
 u32 VAR_26, VAR_27;

 VAR_26 = VAR_18;
 if (VAR_23->phy_flags & VAR_5) {
  VAR_24 = 1;
  VAR_25 = 1;
 } else if (VAR_23->phy_port == VAR_10)
  VAR_24 = 1;
 else
  VAR_25 = 1;

 if (VAR_24) {
  VAR_26 |= VAR_12 |
   VAR_19;
  if (VAR_23->phy_flags & VAR_3)
   VAR_26 |= VAR_17;
 }
 if (VAR_25) {
  VAR_26 |= VAR_16 |
   VAR_15 |
   VAR_14 |
   VAR_13 |
   VAR_12 |
   VAR_20;
 }

 FUNC_3(&VAR_23->phy_lock);
 VAR_22->base.port = VAR_23->phy_port;
 VAR_27 = VAR_23->advertising;

 if (VAR_23->autoneg & VAR_2) {
  VAR_22->base.autoneg = VAR_1;
 } else {
  VAR_22->base.autoneg = VAR_0;
 }

 if (FUNC_2(VAR_21)) {
  VAR_22->base.speed = VAR_23->line_speed;
  VAR_22->base.duplex = VAR_23->duplex;
  if (!(VAR_23->phy_flags & VAR_6)) {
   if (VAR_23->phy_flags & VAR_4)
    VAR_22->base.eth_tp_mdix = VAR_9;
   else
    VAR_22->base.eth_tp_mdix = VAR_8;
  }
 }
 else {
  VAR_22->base.speed = VAR_11;
  VAR_22->base.duplex = VAR_7;
 }
 FUNC_4(&VAR_23->phy_lock);

 VAR_22->base.phy_address = VAR_23->phy_addr;

 FUNC_0(VAR_22->link_modes.supported,
      VAR_26);
 FUNC_0(VAR_22->link_modes.advertising,
      VAR_27);

 return 0;
}
