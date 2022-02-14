
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mt76x02_dev*,int,int) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct mt76x02_dev*) ;
 int FUNC_11 (struct mt76x02_dev*,int,int) ;
 int FUNC_12 (struct mt76x02_dev*) ;
 int FUNC_13 (struct mt76x02_dev*) ;
 int FUNC_14 (struct mt76x02_dev*) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct mt76x02_dev *VAR_15)
{
 int VAR_16;

 FUNC_11(VAR_15, 1, 0);
 if (!FUNC_9(&VAR_15->mt76))
  return -VAR_0;

 FUNC_6(VAR_15);
 VAR_16 = FUNC_14(VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_7(VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_12(VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_10(VAR_15);

 if (FUNC_2(&VAR_15->mt76) == 0x7610) {
  u16 VAR_17;

  FUNC_3(VAR_15, VAR_10, FUNC_0(0));

  VAR_17 = FUNC_8(VAR_15, VAR_11);
  if (!(VAR_17 & VAR_12))
   FUNC_4(VAR_15, VAR_14, 0xc03);
 }

 FUNC_3(VAR_15, 0x110, FUNC_0(9));
 FUNC_4(VAR_15, VAR_13, FUNC_0(13));

 FUNC_5(VAR_15, VAR_3,
  VAR_8 |
  VAR_9 |
  VAR_7 |
  VAR_6 |
  VAR_5 |
  VAR_2 |
  FUNC_1(VAR_4, 1));

 VAR_16 = FUNC_13(VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_15(VAR_1, &VAR_15->mt76.state);

 return 0;
}
