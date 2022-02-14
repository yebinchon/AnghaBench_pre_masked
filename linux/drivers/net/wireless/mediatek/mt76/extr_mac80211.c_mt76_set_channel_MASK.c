
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cfg80211_chan_def {int chan; } ;
struct mt76_dev {int main_chan; struct cfg80211_chan_def chandef; TYPE_2__* drv; int tx_wait; struct ieee80211_hw* hw; } ;
struct mt76_channel_state {int dummy; } ;
struct TYPE_3__ {int flags; struct cfg80211_chan_def chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; } ;
struct TYPE_4__ {int (* update_survey ) (struct mt76_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_channel_state*,int ,int) ;
 struct mt76_channel_state* FUNC_1 (struct mt76_dev*,int ) ;
 int FUNC_2 (struct mt76_dev*) ;
 int FUNC_3 (struct mt76_dev*) ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5(struct mt76_dev *VAR_2)
{
 struct ieee80211_hw *VAR_3 = VAR_2->hw;
 struct cfg80211_chan_def *VAR_4 = &VAR_3->conf.chandef;
 struct mt76_channel_state *VAR_5;
 bool VAR_6 = VAR_3->conf.flags & VAR_1;
 int VAR_7 = VAR_0 / 5;

 FUNC_4(VAR_2->tx_wait, !FUNC_2(VAR_2), VAR_7);

 if (VAR_2->drv->update_survey)
  VAR_2->drv->update_survey(VAR_2);

 VAR_2->chandef = *VAR_4;

 if (!VAR_6)
  VAR_2->main_chan = VAR_4->chan;

 if (VAR_4->chan != VAR_2->main_chan) {
  VAR_5 = FUNC_1(VAR_2, VAR_4->chan);
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 }
}
