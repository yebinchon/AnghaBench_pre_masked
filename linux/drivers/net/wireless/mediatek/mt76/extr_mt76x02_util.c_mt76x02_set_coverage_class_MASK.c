
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct mt76x02_dev {TYPE_1__ mt76; int coverage_class; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
typedef int s16 ;


 int FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
    s16 VAR_1)
{
 struct mt76x02_dev *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->mt76.mutex);
 VAR_2->coverage_class = VAR_1;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->mt76.mutex);
}
