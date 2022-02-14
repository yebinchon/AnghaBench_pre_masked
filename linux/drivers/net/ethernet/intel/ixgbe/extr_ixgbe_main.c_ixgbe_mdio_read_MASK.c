
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* read_reg ) (struct ixgbe_hw*,int,int,int*) ;} ;
struct TYPE_4__ {int prtad; } ;
struct TYPE_6__ {TYPE_2__ ops; TYPE_1__ mdio; } ;
struct ixgbe_hw {TYPE_3__ phy; } ;
struct ixgbe_adapter {scalar_t__ mii_bus; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_3, int VAR_4, int VAR_5, u16 VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_1(VAR_3);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 u16 VAR_9;
 int VAR_10;

 if (VAR_7->mii_bus) {
  int VAR_11 = VAR_6;

  if (VAR_5 != VAR_1)
   VAR_11 |= (VAR_5 << 16) | VAR_2;

  return FUNC_0(VAR_7->mii_bus, VAR_4, VAR_11);
 }

 if (VAR_4 != VAR_8->phy.mdio.prtad)
  return -VAR_0;
 VAR_10 = VAR_8->phy.ops.read_reg(VAR_8, VAR_6, VAR_5, &VAR_9);
 if (!VAR_10)
  VAR_10 = VAR_9;
 return VAR_10;
}
