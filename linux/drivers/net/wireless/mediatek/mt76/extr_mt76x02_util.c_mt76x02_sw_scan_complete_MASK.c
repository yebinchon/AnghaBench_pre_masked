
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int low_gain; scalar_t__ gain_init_done; } ;
struct TYPE_3__ {int state; } ;
struct mt76x02_dev {int cal_work; TYPE_2__ cal; TYPE_1__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int ) ;

void FUNC_2(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2)
{
 struct mt76x02_dev *VAR_3 = VAR_1->priv;

 FUNC_0(VAR_0, &VAR_3->mt76.state);
 if (VAR_3->cal.gain_init_done) {

  VAR_3->cal.low_gain = -1;
  FUNC_1(VAR_1, &VAR_3->cal_work, 0);
 }
}
