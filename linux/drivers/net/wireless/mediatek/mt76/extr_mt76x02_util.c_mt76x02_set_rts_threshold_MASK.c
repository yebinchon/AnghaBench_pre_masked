
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 struct mt76x02_dev *VAR_3 = VAR_1->priv;

 if (VAR_2 != ~0 && VAR_2 > 0xffff)
  return -VAR_0;

 FUNC_1(&VAR_3->mt76.mutex);
 FUNC_0(VAR_3, VAR_2);
 FUNC_2(&VAR_3->mt76.mutex);

 return 0;
}
