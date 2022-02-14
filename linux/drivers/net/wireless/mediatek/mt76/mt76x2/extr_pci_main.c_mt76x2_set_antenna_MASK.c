
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chainmask; int antenna_mask; int mutex; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1, u32 VAR_2,
         u32 VAR_3)
{
 struct mt76x02_dev *VAR_4 = VAR_1->priv;

 if (!VAR_2 || VAR_2 > 3 || VAR_2 != VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_4->mt76.mutex);

 VAR_4->mt76.chainmask = (VAR_2 == 3) ? 0x202 : 0x101;
 VAR_4->mt76.antenna_mask = VAR_2;

 FUNC_0(&VAR_4->mt76, 1);
 FUNC_1(VAR_4);

 FUNC_3(&VAR_4->mt76.mutex);

 return 0;
}
