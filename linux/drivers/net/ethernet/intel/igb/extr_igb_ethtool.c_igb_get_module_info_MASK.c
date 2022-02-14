
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
struct igb_adapter {struct e1000_hw hw; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_12,
          struct ethtool_modinfo *VAR_13)
{
 struct igb_adapter *VAR_14 = FUNC_2(VAR_12);
 struct e1000_hw *VAR_15 = &VAR_14->hw;
 u32 VAR_16 = 0;
 u16 VAR_17, VAR_18;
 bool VAR_19 = 0;

 if ((VAR_15->phy.media_type == VAR_10) ||
     (VAR_15->phy.media_type == VAR_11))
  return -VAR_1;


 VAR_16 = FUNC_1(VAR_15, VAR_6, &VAR_17);
 if (VAR_16)
  return -VAR_0;


 VAR_16 = FUNC_1(VAR_15, VAR_7, &VAR_18);
 if (VAR_16)
  return -VAR_0;


 if ((VAR_18 & 0xFF) & VAR_9) {
  FUNC_0("Address change required to access page 0xA2, but not supported. Please report the module type to the driver maintainers.\n");
  VAR_19 = 1;
 }

 if ((VAR_17 & 0xFF) == VAR_8 || VAR_19) {

  VAR_13->type = VAR_2;
  VAR_13->eeprom_len = VAR_3;
 } else {

  VAR_13->type = VAR_4;
  VAR_13->eeprom_len = VAR_5;
 }

 return 0;
}
