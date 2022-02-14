
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; } ;
struct mt7603_dev {TYPE_2__ mt76; } ;


 int FUNC_0 (int const*) ;






 scalar_t__ FUNC_1 (struct mt7603_dev*) ;
 int FUNC_2 (struct mt7603_dev*,int*) ;

__attribute__((used)) static void
FUNC_3(struct mt7603_dev *VAR_0, u8 *VAR_1)
{
 static const u8 VAR_2[] = {
  132,
  133,
  129,
  128,

  131,
  131 + 1,
  130,
  130 + 1,
 };
 u8 *VAR_3 = VAR_0->mt76.eeprom.data;
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (!FUNC_2(VAR_0, VAR_1))
  return;

 if (FUNC_1(VAR_0))
  VAR_4 -= 4;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  int VAR_6 = VAR_2[VAR_5];

  VAR_3[VAR_6] = VAR_1[VAR_6];
 }
}
