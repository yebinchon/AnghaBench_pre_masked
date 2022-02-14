
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ixgbe_eeprom_info {scalar_t__ type; } ;
struct ixgbe_hw {struct ixgbe_eeprom_info eeprom; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_2,
       u16 VAR_3, u16 *VAR_4)
{
 struct ixgbe_eeprom_info *VAR_5 = &VAR_2->eeprom;





 if (VAR_5->type == VAR_1 && VAR_3 <= VAR_0)
  return FUNC_1(VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
