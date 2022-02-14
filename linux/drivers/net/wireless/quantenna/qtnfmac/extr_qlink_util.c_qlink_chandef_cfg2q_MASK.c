
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; void* center_freq; void* hw_value; } ;
struct qlink_chandef {int width; void* center_freq2; void* center_freq1; TYPE_1__ chan; } ;
struct ieee80211_channel {int flags; int center_freq; int hw_value; } ;
struct cfg80211_chan_def {int width; int center_freq2; int center_freq1; struct ieee80211_channel* chan; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(const struct cfg80211_chan_def *VAR_0,
    struct qlink_chandef *VAR_1)
{
 struct ieee80211_channel *VAR_2 = VAR_0->chan;

 VAR_1->chan.hw_value = FUNC_0(VAR_2->hw_value);
 VAR_1->chan.center_freq = FUNC_0(VAR_2->center_freq);
 VAR_1->chan.flags = FUNC_1(VAR_2->flags);

 VAR_1->center_freq1 = FUNC_0(VAR_0->center_freq1);
 VAR_1->center_freq2 = FUNC_0(VAR_0->center_freq2);
 VAR_1->width = FUNC_2(VAR_0->width);
}
