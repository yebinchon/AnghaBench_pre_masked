
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct eeprom_priv {int bautoload_fail_flag; } ;
struct adapter {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (char*,scalar_t__) ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct adapter *VAR_1, u8 *VAR_2)
{
 struct eeprom_priv *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4;


 VAR_4 = FUNC_2(*((__le16 *)VAR_2));
 if (VAR_4 != VAR_0) {
  FUNC_0("EEPROM ID(%#x) is invalid!!\n", VAR_4);
  VAR_3->bautoload_fail_flag = 1;
 } else {
  VAR_3->bautoload_fail_flag = 0;
 }

 FUNC_0("EEPROM ID = 0x%04x\n", VAR_4);
}
