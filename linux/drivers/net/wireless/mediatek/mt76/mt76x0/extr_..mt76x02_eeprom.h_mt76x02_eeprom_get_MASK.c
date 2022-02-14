
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
typedef enum mt76x02_eeprom_field { ____Placeholder_mt76x02_eeprom_field } mt76x02_eeprom_field ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(struct mt76x02_dev *VAR_1,
     enum mt76x02_eeprom_field VAR_2)
{
 if ((VAR_2 & 1) || VAR_2 >= VAR_0)
  return -1;

 return FUNC_0(VAR_1->mt76.eeprom.data + VAR_2);
}
