
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mutex; int antenna_mask; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0, u32 *VAR_1,
         u32 *VAR_2)
{
 struct mt76x02_dev *VAR_3 = VAR_0->priv;

 FUNC_0(&VAR_3->mt76.mutex);
 *VAR_1 = VAR_3->mt76.antenna_mask;
 *VAR_2 = VAR_3->mt76.antenna_mask;
 FUNC_1(&VAR_3->mt76.mutex);

 return 0;
}
