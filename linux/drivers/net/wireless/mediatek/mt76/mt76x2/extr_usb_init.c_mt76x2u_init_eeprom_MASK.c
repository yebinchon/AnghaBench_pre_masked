
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ data; scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ eeprom; int dev; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mt76x02_dev *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_4->mt76.eeprom.data = FUNC_1(VAR_4->mt76.dev,
          VAR_3,
          VAR_2);
 VAR_4->mt76.eeprom.size = VAR_3;
 if (!VAR_4->mt76.eeprom.data)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 + 4 <= VAR_3; VAR_6 += 4) {
  VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_0, VAR_6));
  FUNC_4(VAR_5, VAR_4->mt76.eeprom.data + VAR_6);
 }

 FUNC_3(VAR_4);
 return 0;
}
