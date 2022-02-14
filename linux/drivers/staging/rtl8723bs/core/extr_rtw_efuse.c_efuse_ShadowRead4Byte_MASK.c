
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct eeprom_priv {int* efuse_eeprom_data; } ;
struct adapter {int dummy; } ;


 struct eeprom_priv* FUNC_0 (struct adapter*) ;

__attribute__((used)) static void
FUNC_1(
struct adapter *VAR_0,
u16 VAR_1,
 u32 *VAR_2)
{
 struct eeprom_priv *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->efuse_eeprom_data[VAR_1];
 *VAR_2 |= VAR_3->efuse_eeprom_data[VAR_1+1]<<8;
 *VAR_2 |= VAR_3->efuse_eeprom_data[VAR_1+2]<<16;
 *VAR_2 |= VAR_3->efuse_eeprom_data[VAR_1+3]<<24;

}
