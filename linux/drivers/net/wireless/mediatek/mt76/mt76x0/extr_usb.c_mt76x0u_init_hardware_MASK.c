
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int mt76; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*,int,int) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;

__attribute__((used)) static int FUNC_9(struct mt76x02_dev *VAR_12, bool VAR_13)
{
 int VAR_14;

 FUNC_5(VAR_12, 1, VAR_13);

 if (!FUNC_3(&VAR_12->mt76))
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_7(VAR_12);
 VAR_14 = FUNC_6(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_4(VAR_12);

 FUNC_1(VAR_12, VAR_10, VAR_11, 0x1e);
 FUNC_2(VAR_12, VAR_7,
  FUNC_0(VAR_9, 0x3f) |
  FUNC_0(VAR_8, 0x58));

 FUNC_2(VAR_12, VAR_1,
  VAR_5 |
  VAR_6 |
  VAR_4 |
  VAR_3 |
  VAR_2);

 return 0;
}
