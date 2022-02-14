
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_sta {int wcid; } ;
struct mt7601u_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct ieee80211_sta {int rates; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;
struct TYPE_2__ {int flags; int idx; } ;


 int FUNC_0 (struct mt7601u_dev*,int *,struct ieee80211_tx_rate*) ;
 struct ieee80211_sta_rates* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct mt7601u_dev *VAR_3 = VAR_0->priv;
 struct mt76_sta *VAR_4 = (struct mt76_sta *) VAR_2->drv_priv;
 struct ieee80211_sta_rates *VAR_5;
 struct ieee80211_tx_rate VAR_6 = {};

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2->rates);

 if (!VAR_5)
  goto out;

 VAR_6.idx = VAR_5->rate[0].idx;
 VAR_6.flags = VAR_5->rate[0].flags;
 FUNC_0(VAR_3, &VAR_4->wcid, &VAR_6);

out:
 FUNC_3();
}
