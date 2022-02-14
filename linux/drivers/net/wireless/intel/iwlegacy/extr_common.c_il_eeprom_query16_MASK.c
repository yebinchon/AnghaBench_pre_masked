
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct il_priv {scalar_t__* eeprom; } ;



u16
FUNC_0(const struct il_priv *VAR_0, size_t VAR_1)
{
 if (!VAR_0->eeprom)
  return 0;
 return (u16) VAR_0->eeprom[VAR_1] | ((u16) VAR_0->eeprom[VAR_1 + 1] << 8);
}
