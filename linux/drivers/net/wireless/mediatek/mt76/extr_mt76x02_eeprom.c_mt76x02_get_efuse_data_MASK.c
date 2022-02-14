
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mt76x02_dev {int dummy; } ;
typedef enum mt76x02_eeprom_modes { ____Placeholder_mt76x02_eeprom_modes } mt76x02_eeprom_modes ;


 int FUNC_0 (struct mt76x02_dev*,scalar_t__,void*,int) ;

int FUNC_1(struct mt76x02_dev *VAR_0, u16 VAR_1, void *VAR_2,
      int VAR_3, enum mt76x02_eeprom_modes VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 + 16 <= VAR_3; VAR_6 += 16) {
  VAR_5 = FUNC_0(VAR_0, VAR_1 + VAR_6, VAR_2 + VAR_6, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
