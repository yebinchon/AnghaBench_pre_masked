
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct eeprom_priv {size_t* efuse_eeprom_data; } ;
struct adapter {int dummy; } ;


 struct eeprom_priv* FUNC_0 (struct adapter*) ;

__attribute__((used)) static void
FUNC_1(
struct adapter *VAR_0,
u16 VAR_1,
 u16 *VAR_2)
{
 struct eeprom_priv *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->efuse_eeprom_data[VAR_1];
 *VAR_2 |= VAR_3->efuse_eeprom_data[VAR_1+1]<<8;

}
