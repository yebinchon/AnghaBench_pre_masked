
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int data; } ;
struct mt76_dev {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mt76_dev *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->eeprom.data);

 switch (VAR_2) {
 case 0x7615:
  return 0;
 default:
  return -VAR_0;
 }
}
