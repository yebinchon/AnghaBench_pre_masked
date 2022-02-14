
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__ eeprom; scalar_t__ macaddr; TYPE_2__ otp; } ;
struct mt7615_dev {TYPE_3__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct mt7615_dev*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct mt7615_dev*) ;
 int FUNC_4 (struct mt7615_dev*) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(struct mt7615_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(&VAR_3->mt76);
 if (VAR_4 && VAR_3->mt76.otp.data)
  FUNC_0(VAR_3->mt76.eeprom.data, VAR_3->mt76.otp.data,
         VAR_1);
 else
  FUNC_1(VAR_3);

 FUNC_4(VAR_3);
 FUNC_0(VAR_3->mt76.macaddr, VAR_3->mt76.eeprom.data + VAR_2,
        VAR_0);

 FUNC_5(&VAR_3->mt76);

 return 0;
}
