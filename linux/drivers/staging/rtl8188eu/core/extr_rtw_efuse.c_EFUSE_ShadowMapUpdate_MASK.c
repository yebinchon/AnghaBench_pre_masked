
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eeprom_priv {int efuse_eeprom_data; scalar_t__ bautoload_fail_flag; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ) ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(struct adapter *VAR_1, u8 VAR_2)
{
 struct eeprom_priv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->bautoload_fail_flag)
  FUNC_2(VAR_3->efuse_eeprom_data, 0xFF, VAR_0);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3->efuse_eeprom_data);
}
