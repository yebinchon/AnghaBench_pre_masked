
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
typedef enum mt76x02_eeprom_field { ____Placeholder_mt76x02_eeprom_field } mt76x02_eeprom_field ;


 int FUNC_0 (void*,int,int) ;

int FUNC_1(struct mt76x02_dev *VAR_0,
   enum mt76x02_eeprom_field VAR_1,
   void *VAR_2, int VAR_3)
{
 if (VAR_1 + VAR_3 > VAR_0->mt76.eeprom.size)
  return -1;

 FUNC_0(VAR_2, VAR_0->mt76.eeprom.data + VAR_1, VAR_3);
 return 0;
}
