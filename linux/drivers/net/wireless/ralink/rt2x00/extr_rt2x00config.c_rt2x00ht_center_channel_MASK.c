
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct hw_mode_spec {size_t num_channels; TYPE_3__* channels; } ;
struct rt2x00_dev {struct hw_mode_spec spec; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct TYPE_6__ {int channel; } ;
struct TYPE_4__ {size_t hw_value; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_2 (struct ieee80211_conf*) ;

__attribute__((used)) static u16 FUNC_3(struct rt2x00_dev *VAR_0,
       struct ieee80211_conf *VAR_1)
{
 struct hw_mode_spec *VAR_2 = &VAR_0->spec;
 int VAR_3;
 u16 VAR_4;




 VAR_3 = VAR_2->channels[VAR_1->chandef.chan->hw_value].channel;




 if (FUNC_2(VAR_1))
  VAR_3 += 2;
 else if (FUNC_1(VAR_1))
  VAR_3 -= (VAR_3 == 14) ? 1 : 2;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_channels; VAR_4++)
  if (VAR_2->channels[VAR_4].channel == VAR_3)
   return VAR_4;

 FUNC_0(1);
 return VAR_1->chandef.chan->hw_value;
}
