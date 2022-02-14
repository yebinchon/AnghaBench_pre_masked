
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; scalar_t__ enabled; } ;
struct mt7601u_dev {TYPE_1__ freq_cal; int hw; int cal_work; int state; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct mt7601u_dev*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_hw *VAR_3,
    struct ieee80211_vif *VAR_4)
{
 struct mt7601u_dev *VAR_5 = VAR_3->priv;

 FUNC_2(VAR_5);
 FUNC_0(VAR_0, &VAR_5->state);

 FUNC_1(VAR_5->hw, &VAR_5->cal_work,
         VAR_1);
 if (VAR_5->freq_cal.enabled)
  FUNC_1(VAR_5->hw, &VAR_5->freq_cal.work,
          VAR_2);
}
