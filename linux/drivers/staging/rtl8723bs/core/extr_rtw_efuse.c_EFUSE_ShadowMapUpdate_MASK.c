
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct eeprom_priv {int efuse_eeprom_data; scalar_t__ bautoload_fail_flag; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int ,int ,void*,int) ;
 int FUNC_1 (struct adapter*,int ,int ,int) ;
 struct eeprom_priv* FUNC_2 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,scalar_t__) ;

void FUNC_4(
 struct adapter *VAR_1,
 u8 VAR_2,
 bool VAR_3)
{
 struct eeprom_priv *VAR_4 = FUNC_2(VAR_1);
 u16 VAR_5 = 0;

 FUNC_0(VAR_1, VAR_2, VAR_0, (void *)&VAR_5, VAR_3);

 if (VAR_4->bautoload_fail_flag)
  FUNC_3(VAR_4->efuse_eeprom_data, 0xFF, VAR_5);
 else
  FUNC_1(VAR_1, VAR_2, VAR_4->efuse_eeprom_data, VAR_3);



}
