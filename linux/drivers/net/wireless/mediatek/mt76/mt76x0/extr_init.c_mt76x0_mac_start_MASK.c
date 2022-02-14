
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rxfilter; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

int FUNC_2(struct mt76x02_dev *VAR_5)
{
 FUNC_0(VAR_5, VAR_1, VAR_3);

 if (!FUNC_1(&VAR_5->mt76, 200000))
  return -VAR_0;

 FUNC_0(VAR_5, VAR_4, VAR_5->mt76.rxfilter);
 FUNC_0(VAR_5, VAR_1,
  VAR_3 | VAR_2);

 return !FUNC_1(&VAR_5->mt76, 50) ? -VAR_0 : 0;
}
