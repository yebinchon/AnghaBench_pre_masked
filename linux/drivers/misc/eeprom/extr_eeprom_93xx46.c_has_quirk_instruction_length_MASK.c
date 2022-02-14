
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeprom_93xx46_dev {TYPE_1__* pdata; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct eeprom_93xx46_dev *VAR_1)
{
 return VAR_1->pdata->quirks & VAR_0;
}
