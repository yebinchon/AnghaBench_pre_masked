
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eeprom_priv {int EepromOrEfuse; int bautoload_fail_flag; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_1 ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int VAR_2 ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_3)
{
 struct eeprom_priv *VAR_4 = FUNC_1(VAR_3);
 u8 VAR_5;


 VAR_5 = FUNC_4(VAR_3, VAR_2);
 VAR_4->EepromOrEfuse = (VAR_5 & VAR_0) ? 1 : 0;
 VAR_4->bautoload_fail_flag = (VAR_5 & VAR_1) ? 0 : 1;

 FUNC_0("Boot from %s, Autoload %s !\n", (VAR_4->EepromOrEfuse ? "EEPROM" : "EFUSE"),
  (VAR_4->bautoload_fail_flag ? "Fail" : "OK"));

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
