
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {int rxfilter; TYPE_1__ eeprom; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,scalar_t__) ;
 int FUNC_5 (struct mt76x02_dev*,int,int,int *) ;
 int FUNC_6 (struct mt76x02_dev*,int,int ,int *) ;
 int FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct mt76x02_dev*) ;
 int FUNC_12 (struct mt76x02_dev*,int ,int ,int ) ;
 int FUNC_13 (struct mt76x02_dev*,int) ;
 int FUNC_14 (struct mt76x02_dev*) ;
 int FUNC_15 (struct mt76x02_dev*) ;
 int FUNC_16 (struct mt76x02_dev*) ;
 int FUNC_17 (struct mt76x02_dev*) ;
 int FUNC_18 (struct mt76x02_dev*) ;
 int FUNC_19 (struct mt76x02_dev*) ;

int FUNC_20(struct mt76x02_dev *VAR_17)
{
 int VAR_18, VAR_19, VAR_20;

 FUNC_13(VAR_17, 1);
 FUNC_19(VAR_17);

 if (!FUNC_9(&VAR_17->mt76))
  return -VAR_1;

 VAR_20 = FUNC_17(VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 if (!FUNC_0(VAR_17, VAR_14,
       VAR_16 |
       VAR_15, 0, 100))
  return -VAR_0;


 if (!FUNC_9(&VAR_17->mt76))
  return -VAR_1;

 FUNC_14(VAR_17);

 VAR_20 = FUNC_18(VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_15(VAR_17);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_4(VAR_17, VAR_17->mt76.eeprom.data + VAR_8);
 VAR_17->mt76.rxfilter = FUNC_2(VAR_17, VAR_10);

 if (!FUNC_10(&VAR_17->mt76))
  return -VAR_1;


 for (VAR_18 = 0; VAR_18 < 256; VAR_18++)
  FUNC_6(VAR_17, VAR_18, 0, ((void*)0));


 for (VAR_18 = 0; VAR_18 < 16; VAR_18++) {
  for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
   FUNC_5(VAR_17, VAR_18, VAR_19, ((void*)0));
 }

 FUNC_11(VAR_17);

 FUNC_1(VAR_17, VAR_12, VAR_13, 0x1e);
 FUNC_3(VAR_17, VAR_11, 0x583f);

 VAR_20 = FUNC_12(VAR_17, VAR_9, 0, 0);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_7(VAR_17);
 FUNC_8(VAR_17);

 FUNC_3(VAR_17, VAR_2,
  VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_4 |
  VAR_3);

 return FUNC_16(VAR_17);
}
