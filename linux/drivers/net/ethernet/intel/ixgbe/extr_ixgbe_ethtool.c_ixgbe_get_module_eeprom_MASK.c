
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* read_i2c_sff8472 ) (struct ixgbe_hw*,int,int*) ;scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {int state; struct ixgbe_hw hw; } ;
struct ethtool_eeprom {int len; int offset; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8,
      struct ethtool_eeprom *VAR_9,
      u8 *VAR_10)
{
 struct ixgbe_adapter *VAR_11 = FUNC_0(VAR_8);
 struct ixgbe_hw *VAR_12 = &VAR_11->hw;
 s32 VAR_13 = VAR_5;
 u8 VAR_14 = 0xFF;
 int VAR_15 = 0;

 if (VAR_9->len == 0)
  return -VAR_1;

 if (VAR_12->phy.type == VAR_7)
  return -VAR_3;

 for (VAR_15 = VAR_9->offset; VAR_15 < VAR_9->offset + VAR_9->len; VAR_15++) {

  if (FUNC_3(VAR_6, &VAR_11->state))
   return -VAR_0;

  if (VAR_15 < VAR_4)
   VAR_13 = VAR_12->phy.ops.read_i2c_eeprom(VAR_12, VAR_15, &VAR_14);
  else
   VAR_13 = VAR_12->phy.ops.read_i2c_sff8472(VAR_12, VAR_15, &VAR_14);

  if (VAR_13)
   return -VAR_2;

  VAR_10[VAR_15 - VAR_9->offset] = VAR_14;
 }

 return 0;
}
