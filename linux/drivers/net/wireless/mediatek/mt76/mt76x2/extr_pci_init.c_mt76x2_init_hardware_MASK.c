
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int rxfilter; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*,int) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;
 int FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 int FUNC_9 (struct mt76x02_dev*,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct mt76x02_dev *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);
 FUNC_9(VAR_2, 1);
 FUNC_8(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 VAR_2->mt76.rxfilter = FUNC_0(VAR_2, VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_10(VAR_0, &VAR_2->mt76.state);
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_6(VAR_2, 0);

 return 0;
}
