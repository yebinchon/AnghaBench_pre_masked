
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {int txpower_cur; int antenna_mask; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
       int *VAR_2)
{
 struct mt76_dev *VAR_3 = VAR_0->priv;
 int VAR_4 = FUNC_1(VAR_3->antenna_mask);

 *VAR_2 = FUNC_0(VAR_3->txpower_cur, 2);




 switch (VAR_4) {
 case 4:
  *VAR_2 += 6;
  break;
 case 3:
  *VAR_2 += 4;
  break;
 case 2:
  *VAR_2 += 3;
  break;
 default:
  break;
 }

 return 0;
}
