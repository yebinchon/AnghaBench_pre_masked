
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ func; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ bus; TYPE_2__ mac; } ;
struct ixgbe_adapter {scalar_t__ eeprom_cap; struct ixgbe_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bool FUNC_0(struct ixgbe_adapter *VAR_6, u16 VAR_7,
    u16 VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_6->hw;
 u16 VAR_10 = VAR_6->eeprom_cap & VAR_0;


 if (VAR_9->mac.type == VAR_4)
  return 0;


 if (VAR_9->mac.type >= VAR_5) {
  if ((VAR_10 == VAR_2) ||
      ((VAR_10 == VAR_1) &&
       (VAR_9->bus.func == 0)))
   return 1;
 }


 switch (VAR_7) {
 case 140:

  switch (VAR_8) {
  case 138:
  case 136:
  case 129:
  case 132:

   if (VAR_9->bus.func != 0)
    break;

  case 128:
  case 134:
  case 135:
  case 137:
  case 133:
  case 131:
  case 130:
   return 1;
  }
  break;
 case 143:

  switch (VAR_8) {
  case 139:
   return 1;
  }
  break;
 case 142:

  if (VAR_8 != VAR_3)
   return 1;
  break;
 case 141:
  return 1;
 default:
  break;
 }

 return 0;
}
