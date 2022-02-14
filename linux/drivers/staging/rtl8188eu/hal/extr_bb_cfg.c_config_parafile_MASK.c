
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeprom_priv {int bautoload_fail_flag; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {scalar_t__ pwrGroupCnt; } ;


 struct eeprom_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;

__attribute__((used)) static bool FUNC_4(struct adapter *VAR_0)
{
 struct eeprom_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_0);


 if (!VAR_1->bautoload_fail_flag) {
  VAR_0->HalData->pwrGroupCnt = 0;
  FUNC_1(VAR_0);
 }
 FUNC_2(VAR_0);
 return 1;
}
