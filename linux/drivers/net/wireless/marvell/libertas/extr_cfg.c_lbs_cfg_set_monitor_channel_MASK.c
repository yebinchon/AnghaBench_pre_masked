
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct lbs_private {int dummy; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_2__ {int hw_value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cfg80211_chan_def*) ;
 int FUNC_1 (struct lbs_private*,int ) ;
 struct lbs_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2,
           struct cfg80211_chan_def *VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = -VAR_0;

 if (FUNC_0(VAR_3) != VAR_1)
  goto out;

 VAR_5 = FUNC_1(VAR_4, VAR_3->chan->hw_value);

 out:
 return VAR_5;
}
