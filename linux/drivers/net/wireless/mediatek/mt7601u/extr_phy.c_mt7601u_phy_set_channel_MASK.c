
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; scalar_t__ enabled; } ;
struct mt7601u_dev {TYPE_1__ freq_cal; int hw; int cal_work; int state; int hw_atomic_mutex; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mt7601u_dev*,struct cfg80211_chan_def*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct mt7601u_dev *VAR_3,
       struct cfg80211_chan_def *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_3->cal_work);
 FUNC_1(&VAR_3->freq_cal.work);

 FUNC_3(&VAR_3->hw_atomic_mutex);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 FUNC_4(&VAR_3->hw_atomic_mutex);
 if (VAR_5)
  return VAR_5;

 if (FUNC_5(VAR_0, &VAR_3->state))
  return 0;

 FUNC_2(VAR_3->hw, &VAR_3->cal_work,
         VAR_1);
 if (VAR_3->freq_cal.enabled)
  FUNC_2(VAR_3->hw, &VAR_3->freq_cal.work,
          VAR_2);
 return 0;
}
