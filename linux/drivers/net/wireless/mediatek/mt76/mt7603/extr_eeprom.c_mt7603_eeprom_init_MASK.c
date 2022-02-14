
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int has_2ghz; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_3__ eeprom; scalar_t__ macaddr; TYPE_2__ cap; TYPE_1__ otp; } ;
struct mt7603_dev {TYPE_4__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct mt7603_dev*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct mt7603_dev*) ;
 int FUNC_4 (TYPE_4__*) ;

int FUNC_5(struct mt7603_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->mt76.otp.data) {
  if (FUNC_2(&VAR_3->mt76) == 0)
   FUNC_1(VAR_3, VAR_3->mt76.otp.data);
  else
   FUNC_0(VAR_3->mt76.eeprom.data, VAR_3->mt76.otp.data,
          VAR_1);
 }

 VAR_3->mt76.cap.has_2ghz = 1;
 FUNC_0(VAR_3->mt76.macaddr, VAR_3->mt76.eeprom.data + VAR_2,
        VAR_0);

 FUNC_4(&VAR_3->mt76);

 return 0;
}
