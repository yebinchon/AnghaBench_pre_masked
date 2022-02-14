
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eeprom_priv {scalar_t__ efuse_eeprom_data; int EepromOrEfuse; int bautoload_fail_flag; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int ,int) ;
 int VAR_0 ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,void*,int ) ;

void FUNC_4(struct adapter *VAR_4, u8 *VAR_5)
{
 struct eeprom_priv *VAR_6 = FUNC_1(VAR_4);

 if (!VAR_6->bautoload_fail_flag) {
  if (!VAR_6->EepromOrEfuse) {

   FUNC_0(VAR_4, VAR_0, 0);
   FUNC_3((void *)VAR_5, (void *)VAR_6->efuse_eeprom_data, VAR_1);
  }
 } else {
  FUNC_2(VAR_3, VAR_2, ("AutoLoad Fail reported from CR9346!!\n"));
  if (!VAR_6->EepromOrEfuse)
   FUNC_0(VAR_4, VAR_0, 0);
  FUNC_3((void *)VAR_5, (void *)VAR_6->efuse_eeprom_data, VAR_1);
 }
}
