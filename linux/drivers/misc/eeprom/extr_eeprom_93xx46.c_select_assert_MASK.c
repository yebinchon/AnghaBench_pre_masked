
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeprom_93xx46_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {int select; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct eeprom_93xx46_dev *VAR_1 = VAR_0;

 FUNC_0(VAR_1->pdata->select, 1);
}
