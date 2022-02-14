
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rxfilter; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*,int,int,int *) ;
 int FUNC_2 (struct mt76x02_dev*,int,int ,int *) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 int FUNC_9 (struct mt76x02_dev*) ;
 int FUNC_10 (struct mt76x02_dev*) ;
 int FUNC_11 (struct mt76x02_dev*) ;
 int FUNC_12 (struct mt76x02_dev*) ;

int FUNC_13(struct mt76x02_dev *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_6(&VAR_4->mt76, 1000))
  return -VAR_0;


 if (!FUNC_4(&VAR_4->mt76))
  return -VAR_1;

 FUNC_12(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_3, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_9(VAR_4);

 if (!FUNC_5(&VAR_4->mt76))
  return -VAR_0;

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->mt76.rxfilter = FUNC_0(VAR_4, VAR_2);

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   FUNC_1(VAR_4, VAR_6, VAR_7, ((void*)0));

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
  FUNC_2(VAR_4, VAR_6, 0, ((void*)0));

 FUNC_11(VAR_4);

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_10(VAR_4);

 return 0;
}
