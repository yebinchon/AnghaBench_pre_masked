
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct survey_info {int filled; void* time_busy; void* time; struct ieee80211_channel* channel; } ;
struct TYPE_4__ {int n_channels; struct ieee80211_channel* channels; } ;
struct mt76_sband {TYPE_2__ sband; } ;
struct mt76_dev {int cc_lock; struct ieee80211_channel* main_chan; struct mt76_sband sband_5g; struct mt76_sband sband_2g; TYPE_1__* drv; } ;
struct mt76_channel_state {int cc_busy; int cc_active; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_3__ {int (* update_survey ) (struct mt76_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (struct survey_info*,int ,int) ;
 struct mt76_channel_state* FUNC_2 (struct mt76_dev*,struct ieee80211_channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mt76_dev*) ;

int FUNC_6(struct ieee80211_hw *VAR_4, int VAR_5,
      struct survey_info *VAR_6)
{
 struct mt76_dev *VAR_7 = VAR_4->priv;
 struct mt76_sband *VAR_8;
 struct ieee80211_channel *VAR_9;
 struct mt76_channel_state *VAR_10;
 int VAR_11 = 0;

 if (VAR_5 == 0 && VAR_7->drv->update_survey)
  VAR_7->drv->update_survey(VAR_7);

 VAR_8 = &VAR_7->sband_2g;
 if (VAR_5 >= VAR_8->sband.n_channels) {
  VAR_5 -= VAR_8->sband.n_channels;
  VAR_8 = &VAR_7->sband_5g;
 }

 if (VAR_5 >= VAR_8->sband.n_channels)
  return -VAR_0;

 VAR_9 = &VAR_8->sband.channels[VAR_5];
 VAR_10 = FUNC_2(VAR_7, VAR_9);

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->channel = VAR_9;
 VAR_6->filled = VAR_2 | VAR_3;
 if (VAR_9 == VAR_7->main_chan)
  VAR_6->filled |= VAR_1;

 FUNC_3(&VAR_7->cc_lock);
 VAR_6->time = FUNC_0(VAR_10->cc_active, 1000);
 VAR_6->time_busy = FUNC_0(VAR_10->cc_busy, 1000);
 FUNC_4(&VAR_7->cc_lock);

 return VAR_11;
}
