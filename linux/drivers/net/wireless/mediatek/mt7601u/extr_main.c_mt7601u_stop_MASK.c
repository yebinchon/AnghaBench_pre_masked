
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int mutex; int mac_work; int cal_work; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct mt7601u_dev *VAR_1 = VAR_0->priv;

 FUNC_2(&VAR_1->mutex);

 FUNC_0(&VAR_1->cal_work);
 FUNC_0(&VAR_1->mac_work);
 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->mutex);
}
