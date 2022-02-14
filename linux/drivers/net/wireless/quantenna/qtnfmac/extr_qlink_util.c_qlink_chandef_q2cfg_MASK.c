
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_2__ {int center_freq; } ;
struct qlink_chandef {int width; int center_freq2; int center_freq1; TYPE_1__ chan; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int width; void* center_freq2; void* center_freq1; struct ieee80211_channel* chan; } ;


 struct ieee80211_channel* FUNC_0 (struct wiphy*,void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wiphy *VAR_0,
    const struct qlink_chandef *VAR_1,
    struct cfg80211_chan_def *VAR_2)
{
 struct ieee80211_channel *VAR_3;

 VAR_3 = FUNC_0(VAR_0, FUNC_1(VAR_1->chan.center_freq));

 VAR_2->chan = VAR_3;
 VAR_2->center_freq1 = FUNC_1(VAR_1->center_freq1);
 VAR_2->center_freq2 = FUNC_1(VAR_1->center_freq2);
 VAR_2->width = FUNC_2(VAR_1->width);
}
