
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; int dev; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*) ;

int FUNC_8(struct mt76x02_dev *VAR_3)
{
 u8 VAR_4, VAR_5;
 u16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_2);
 VAR_4 = VAR_6 >> 8;
 VAR_5 = VAR_6;

 if (VAR_4 > VAR_0)
  FUNC_1(VAR_3->mt76.dev,
    "Warning: unsupported EEPROM version %02hhx\n",
    VAR_4);
 FUNC_0(VAR_3->mt76.dev, "EEPROM ver:%02hhx fae:%02hhx\n",
   VAR_4, VAR_5);

 FUNC_3(VAR_3, VAR_3->mt76.eeprom.data + VAR_1);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 return 0;
}
