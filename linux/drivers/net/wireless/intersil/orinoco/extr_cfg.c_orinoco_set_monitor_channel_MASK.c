
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct hermes {TYPE_2__* ops; } ;
struct orinoco_private {int channel_mask; int channel; scalar_t__ iw_mode; struct hermes hw; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_4__ {int (* cmd_wait ) (struct hermes*,int,int,int *) ;} ;
struct TYPE_3__ {scalar_t__ band; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cfg80211_chan_def*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct hermes*,int,int,int *) ;
 struct orinoco_private* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_8,
           struct cfg80211_chan_def *VAR_9)
{
 struct orinoco_private *VAR_10 = FUNC_5(VAR_8);
 int VAR_11 = 0;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_9->chan)
  return -VAR_1;

 if (FUNC_0(VAR_9) != VAR_5)
  return -VAR_1;

 if (VAR_9->chan->band != VAR_4)
  return -VAR_1;

 VAR_13 = FUNC_1(VAR_9->chan->center_freq);

 if ((VAR_13 < 1) || (VAR_13 > VAR_7) ||
      !(VAR_10->channel_mask & (1 << (VAR_13 - 1))))
  return -VAR_1;

 if (FUNC_2(VAR_10, &VAR_12) != 0)
  return -VAR_0;

 VAR_10->channel = VAR_13;
 if (VAR_10->iw_mode == VAR_6) {

  struct hermes *VAR_14 = &VAR_10->hw;
  VAR_11 = VAR_14->ops->cmd_wait(VAR_14, VAR_2 |
         VAR_3,
     VAR_13, ((void*)0));
 }
 FUNC_3(VAR_10, &VAR_12);

 return VAR_11;
}
