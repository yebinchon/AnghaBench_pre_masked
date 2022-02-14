
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt76x2_tx_power_info {int delta_bw40; int delta_bw80; int target_power; TYPE_2__* chain; } ;
struct mt76_rate_power {int dummy; } ;
struct TYPE_4__ {int width; struct ieee80211_channel* chan; } ;
struct TYPE_6__ {struct mt76_rate_power rate_power; int txpower_cur; int txpower_conf; TYPE_1__ chandef; } ;
struct mt76x02_dev {int target_power; int* target_power_delta; TYPE_3__ mt76; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
struct TYPE_5__ {int target_power; int delta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mt76_rate_power*,int) ;
 int FUNC_2 (struct mt76_rate_power*) ;
 int FUNC_3 (struct mt76_rate_power*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int,int) ;
 int FUNC_5 (struct mt76_rate_power*) ;
 int FUNC_6 (struct mt76x02_dev*,struct mt76x2_tx_power_info*,struct ieee80211_channel*) ;
 int FUNC_7 (struct mt76x02_dev*,struct mt76_rate_power*,struct ieee80211_channel*) ;

void FUNC_8(struct mt76x02_dev *VAR_2)
{
 enum nl80211_chan_width VAR_3 = VAR_2->mt76.chandef.width;
 struct ieee80211_channel *VAR_4 = VAR_2->mt76.chandef.chan;
 struct mt76x2_tx_power_info VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;
 struct mt76_rate_power VAR_9 = {};
 int VAR_10, VAR_11;

 FUNC_6(VAR_2, &VAR_5, VAR_4);

 if (VAR_3 == VAR_0)
  VAR_8 = VAR_5.delta_bw40;
 else if (VAR_3 == VAR_1)
  VAR_8 = VAR_5.delta_bw80;

 FUNC_7(VAR_2, &VAR_9, VAR_4);
 FUNC_1(&VAR_9, VAR_5.target_power + VAR_8);
 FUNC_3(&VAR_9, VAR_2->mt76.txpower_conf);
 VAR_2->mt76.txpower_cur = FUNC_2(&VAR_9);

 VAR_10 = FUNC_5(&VAR_9);
 VAR_8 = VAR_10 - VAR_5.target_power;
 VAR_6 = VAR_5.chain[0].target_power + VAR_5.chain[0].delta + VAR_8;
 VAR_7 = VAR_5.chain[1].target_power + VAR_5.chain[1].delta + VAR_8;

 VAR_11 = FUNC_0(VAR_6, VAR_7);
 if (VAR_11 < 0) {
  VAR_10 -= VAR_11;
  VAR_6 -= VAR_11;
  VAR_7 -= VAR_11;
 } else if (VAR_11 > 0x2f) {
  VAR_10 -= VAR_11 - 0x2f;
  VAR_6 = 0x2f;
  VAR_7 = 0x2f;
 }

 FUNC_1(&VAR_9, -VAR_10);
 VAR_2->target_power = VAR_5.target_power;
 VAR_2->target_power_delta[0] = VAR_6 - VAR_5.chain[0].target_power;
 VAR_2->target_power_delta[1] = VAR_7 - VAR_5.chain[0].target_power;
 VAR_2->mt76.rate_power = VAR_9;

 FUNC_4(VAR_2, VAR_6, VAR_7);
}
