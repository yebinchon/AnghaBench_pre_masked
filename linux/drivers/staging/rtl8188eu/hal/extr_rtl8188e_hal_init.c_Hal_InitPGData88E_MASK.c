
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeprom_priv {int bautoload_fail_flag; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int ) ;
 int VAR_0 ;
 struct eeprom_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct adapter*) ;

void FUNC_4(struct adapter *VAR_3)
{
 struct eeprom_priv *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4->bautoload_fail_flag) {
  if (!FUNC_3(VAR_3)) {

   FUNC_0(VAR_3, VAR_0);
  }
 } else {
  FUNC_2(VAR_2, VAR_1, ("AutoLoad Fail reported from CR9346!!\n"));

  if (!FUNC_3(VAR_3))
   FUNC_0(VAR_3, VAR_0);
 }
}
