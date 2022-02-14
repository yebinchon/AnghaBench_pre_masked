
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int (* setup_link ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_9__ {int autotry_restart; TYPE_3__ ops; } ;
struct TYPE_7__ {scalar_t__ media_type; int autoneg_advertised; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
struct ixgbe_adapter {int state; struct ixgbe_hw hw; } ;
struct TYPE_10__ {scalar_t__ autoneg; int speed; int duplex; } ;
struct TYPE_6__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_5__ base; TYPE_1__ link_modes; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int*,int ) ;
 scalar_t__ VAR_13 ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int VAR_14 ;
 int FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_hw*,int,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_15,
        const struct ethtool_link_ksettings *VAR_16)
{
 struct ixgbe_adapter *VAR_17 = FUNC_3(VAR_15);
 struct ixgbe_hw *VAR_18 = &VAR_17->hw;
 u32 VAR_19, VAR_20;
 s32 VAR_21 = 0;
 u32 VAR_22, VAR_23;

 FUNC_2(&VAR_22,
      VAR_16->link_modes.supported);
 FUNC_2(&VAR_23,
      VAR_16->link_modes.advertising);

 if ((VAR_18->phy.media_type == VAR_13) ||
     (VAR_18->phy.multispeed_fiber)) {




  if (VAR_23 & ~VAR_22)
   return -VAR_6;


  if (!VAR_16->base.autoneg && VAR_18->phy.multispeed_fiber) {
   if (VAR_23 ==
       (VAR_0 |
        VAR_1))
    return -VAR_6;
  }

  VAR_20 = VAR_18->phy.autoneg_advertised;
  VAR_19 = 0;
  if (VAR_23 & VAR_0)
   VAR_19 |= VAR_8;

  if (VAR_23 & VAR_1)
   VAR_19 |= VAR_10;

  if (VAR_23 & VAR_2)
   VAR_19 |= VAR_7;

  if (VAR_23 & VAR_3)
   VAR_19 |= VAR_9;

  if (VAR_20 == VAR_19)
   return VAR_21;

  while (FUNC_6(VAR_12, &VAR_17->state))
   FUNC_7(1000, 2000);

  VAR_18->mac.autotry_restart = 1;
  VAR_21 = VAR_18->mac.ops.setup_link(VAR_18, VAR_19, 1);
  if (VAR_21) {
   FUNC_1(VAR_14, "setup link failed with code %d\n", VAR_21);
   VAR_18->mac.ops.setup_link(VAR_18, VAR_20, 1);
  }
  FUNC_0(VAR_12, &VAR_17->state);
 } else {

  u32 VAR_24 = VAR_16->base.speed;

  if ((VAR_16->base.autoneg == VAR_4) ||
      (VAR_23 != VAR_0) ||
      (VAR_24 + VAR_16->base.duplex != VAR_11 + VAR_5))
   return -VAR_6;
 }

 return VAR_21;
}
