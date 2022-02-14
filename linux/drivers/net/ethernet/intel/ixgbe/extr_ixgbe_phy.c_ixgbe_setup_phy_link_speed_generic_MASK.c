
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup_link ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int autoneg_advertised; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;

s32 FUNC_1(struct ixgbe_hw *VAR_6,
           ixgbe_link_speed VAR_7,
           bool VAR_8)
{



 VAR_6->phy.autoneg_advertised = 0;

 if (VAR_7 & VAR_1)
  VAR_6->phy.autoneg_advertised |= VAR_1;

 if (VAR_7 & VAR_5)
  VAR_6->phy.autoneg_advertised |= VAR_5;

 if (VAR_7 & VAR_4)
  VAR_6->phy.autoneg_advertised |= VAR_4;

 if (VAR_7 & VAR_3)
  VAR_6->phy.autoneg_advertised |= VAR_3;

 if (VAR_7 & VAR_0)
  VAR_6->phy.autoneg_advertised |= VAR_0;

 if (VAR_7 & VAR_2)
  VAR_6->phy.autoneg_advertised |= VAR_2;


 if (VAR_6->phy.ops.setup_link)
  VAR_6->phy.ops.setup_link(VAR_6);

 return 0;
}
