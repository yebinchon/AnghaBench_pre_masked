
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int has_5ghz; int has_2ghz; } ;
struct TYPE_4__ {int* data; } ;
struct TYPE_5__ {TYPE_3__ cap; TYPE_1__ eeprom; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;


 int FUNC_0 (int ,int) ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mt7615_dev *VAR_2)
{
 u8 VAR_3, *VAR_4 = VAR_2->mt76.eeprom.data;

 VAR_3 = FUNC_0(VAR_0,
   VAR_4[VAR_1]);
 switch (VAR_3) {
 case 128:
  VAR_2->mt76.cap.has_5ghz = 1;
  break;
 case 129:
  VAR_2->mt76.cap.has_2ghz = 1;
  break;
 default:
  VAR_2->mt76.cap.has_2ghz = 1;
  VAR_2->mt76.cap.has_5ghz = 1;
  break;
 }
}
