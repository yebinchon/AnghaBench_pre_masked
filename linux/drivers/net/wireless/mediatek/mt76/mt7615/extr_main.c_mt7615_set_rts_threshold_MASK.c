
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;


 int FUNC_0 (struct mt7615_dev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct mt7615_dev *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->mt76.mutex);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->mt76.mutex);

 return 0;
}
