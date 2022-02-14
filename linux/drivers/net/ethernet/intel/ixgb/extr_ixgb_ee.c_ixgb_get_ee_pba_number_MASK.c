
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgb_hw {int * eeprom; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgb_hw*) ;
 int FUNC_1 (int ) ;

u32
FUNC_2(struct ixgb_hw *VAR_2)
{
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2->eeprom[VAR_0])
   | (FUNC_1(VAR_2->eeprom[VAR_1])<<16);

 return 0;
}
