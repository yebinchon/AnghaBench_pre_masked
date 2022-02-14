
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {int dev; TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mt76x02_dev *VAR_2)
{
 u16 VAR_3 = FUNC_1(VAR_2->mt76.eeprom.data);

 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_2->mt76.eeprom.data + VAR_1);

 switch (VAR_3) {
 case 0x7662:
 case 0x7612:
  return 0;
 default:
  FUNC_0(VAR_2->mt76.dev, "EEPROM data check failed: %04x\n", VAR_3);
  return -VAR_0;
 }
}
