
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt7603_sta {int n_rates; int rate_probe; TYPE_3__* rates; } ;
struct TYPE_6__ {int lock; } ;
struct mt7603_dev {TYPE_2__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct ieee80211_sta {scalar_t__ smps_mode; int rates; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
struct TYPE_7__ {scalar_t__ idx; int count; int flags; } ;
struct TYPE_5__ {scalar_t__ idx; int flags; int count; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mt7603_dev*,struct mt7603_sta*,int *,TYPE_3__*) ;
 int FUNC_2 (struct mt7603_dev*,struct mt7603_sta*,int) ;
 struct ieee80211_sta_rates* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
      struct ieee80211_sta *VAR_3)
{
 struct mt7603_dev *VAR_4 = VAR_1->priv;
 struct mt7603_sta *VAR_5 = (struct mt7603_sta *)VAR_3->drv_priv;
 struct ieee80211_sta_rates *VAR_6 = FUNC_3(VAR_3->rates);
 int VAR_7;

 FUNC_4(&VAR_4->mt76.lock);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->rates); VAR_7++) {
  VAR_5->rates[VAR_7].idx = VAR_6->rate[VAR_7].idx;
  VAR_5->rates[VAR_7].count = VAR_6->rate[VAR_7].count;
  VAR_5->rates[VAR_7].flags = VAR_6->rate[VAR_7].flags;

  if (VAR_5->rates[VAR_7].idx < 0 || !VAR_5->rates[VAR_7].count)
   break;
 }
 VAR_5->n_rates = VAR_7;
 FUNC_1(VAR_4, VAR_5, ((void*)0), VAR_5->rates);
 VAR_5->rate_probe = 0;
 FUNC_2(VAR_4, VAR_5,
        VAR_3->smps_mode == VAR_0);
 FUNC_5(&VAR_4->mt76.lock);
}
