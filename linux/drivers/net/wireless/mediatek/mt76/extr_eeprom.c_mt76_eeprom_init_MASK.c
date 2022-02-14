
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int data; } ;
struct mt76_dev {TYPE_1__ eeprom; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mt76_dev*,int) ;

int
FUNC_2(struct mt76_dev *VAR_2, int VAR_3)
{
 VAR_2->eeprom.size = VAR_3;
 VAR_2->eeprom.data = FUNC_0(VAR_2->dev, VAR_3, VAR_1);
 if (!VAR_2->eeprom.data)
  return -VAR_0;

 return !FUNC_1(VAR_2, VAR_3);
}
