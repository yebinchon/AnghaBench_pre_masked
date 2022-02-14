
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
typedef scalar_t__ s32 ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_12 ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_13,
           struct ethtool_modinfo *VAR_14)
{
 struct ixgbe_adapter *VAR_15 = FUNC_1(VAR_13);
 struct ixgbe_hw *VAR_16 = &VAR_15->hw;
 s32 VAR_17;
 u8 VAR_18, VAR_19;
 bool VAR_20 = 0;

 if (VAR_16->phy.type == VAR_12)
  return -VAR_1;


 VAR_17 = VAR_16->phy.ops.read_i2c_eeprom(VAR_16,
          VAR_8,
          &VAR_18);
 if (VAR_17)
  return -VAR_0;


 VAR_17 = VAR_16->phy.ops.read_i2c_eeprom(VAR_16,
          VAR_9,
          &VAR_19);
 if (VAR_17)
  return -VAR_0;

 if (VAR_19 & VAR_6) {
  FUNC_0(VAR_11, "Address change required to access page 0xA2, but not supported. Please report the module type to the driver maintainers.\n");
  VAR_20 = 1;
 }

 if (VAR_18 == VAR_10 || VAR_20 ||
     !(VAR_19 & VAR_7)) {

  VAR_14->type = VAR_2;
  VAR_14->eeprom_len = VAR_3;
 } else {

  VAR_14->type = VAR_4;
  VAR_14->eeprom_len = VAR_5;
 }

 return 0;
}
