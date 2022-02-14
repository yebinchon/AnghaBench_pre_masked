
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
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct adapter *VAR_3, u8 *VAR_4)
{
 struct eeprom_priv *VAR_5 = FUNC_1(VAR_3);

 u16 VAR_6;



 VAR_6 = FUNC_3(*((__le16 *)VAR_4));
 if (VAR_6 != VAR_0) {
  FUNC_0("EEPROM ID(%#x) is invalid!!\n", VAR_6);
  VAR_5->bautoload_fail_flag = 1;
 } else
  VAR_5->bautoload_fail_flag = 0;

 FUNC_2(VAR_2, VAR_1, ("EEPROM ID = 0x%04x\n", VAR_6));
}
