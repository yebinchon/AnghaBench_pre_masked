
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct survey_info {int filled; int time; int time_busy; int time_ext_busy; int channel; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {int chan; } ;
struct ieee80211_conf {int flags; TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;

int FUNC_1(struct ieee80211_hw *VAR_9, int VAR_10,
        struct survey_info *VAR_11)
{
 struct rt2x00_dev *VAR_12 = VAR_9->priv;
 struct ieee80211_conf *VAR_13 = &VAR_9->conf;
 u32 VAR_14, VAR_15, VAR_16;

 if (VAR_10 != 0)
  return -VAR_3;

 VAR_11->channel = VAR_13->chandef.chan;

 VAR_14 = FUNC_0(VAR_12, VAR_2);
 VAR_15 = FUNC_0(VAR_12, VAR_0);
 VAR_16 = FUNC_0(VAR_12, VAR_1);

 if (VAR_14 || VAR_15) {
  VAR_11->filled = VAR_6 |
     VAR_7 |
     VAR_8;

  VAR_11->time = (VAR_14 + VAR_15) / 1000;
  VAR_11->time_busy = VAR_15 / 1000;
  VAR_11->time_ext_busy = VAR_16 / 1000;
 }

 if (!(VAR_9->conf.flags & VAR_4))
  VAR_11->filled |= VAR_5;

 return 0;

}
