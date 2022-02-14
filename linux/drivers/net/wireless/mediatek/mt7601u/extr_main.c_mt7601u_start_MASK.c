
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int mutex; int cal_work; int hw; int mac_work; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct mt7601u_dev *VAR_2 = VAR_1->priv;
 int VAR_3;

 FUNC_2(&VAR_2->mutex);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;

 FUNC_0(VAR_2->hw, &VAR_2->mac_work,
         VAR_0);
 FUNC_0(VAR_2->hw, &VAR_2->cal_work,
         VAR_0);
out:
 FUNC_3(&VAR_2->mutex);
 return VAR_3;
}
