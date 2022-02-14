
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt7615_sta {int n_rates; int rate_probe; TYPE_3__* rates; } ;
struct TYPE_6__ {int lock; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta_rates {TYPE_1__* rate; } ;
struct ieee80211_sta {int rates; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct TYPE_7__ {scalar_t__ idx; int count; int flags; } ;
struct TYPE_5__ {scalar_t__ idx; int flags; int count; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mt7615_dev*,struct mt7615_sta*,int *,TYPE_3__*) ;
 struct ieee80211_sta_rates* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
           struct ieee80211_vif *VAR_1,
           struct ieee80211_sta *VAR_2)
{
 struct mt7615_dev *VAR_3 = VAR_0->priv;
 struct mt7615_sta *VAR_4 = (struct mt7615_sta *)VAR_2->drv_priv;
 struct ieee80211_sta_rates *VAR_5 = FUNC_2(VAR_2->rates);
 int VAR_6;

 FUNC_3(&VAR_3->mt76.lock);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->rates); VAR_6++) {
  VAR_4->rates[VAR_6].idx = VAR_5->rate[VAR_6].idx;
  VAR_4->rates[VAR_6].count = VAR_5->rate[VAR_6].count;
  VAR_4->rates[VAR_6].flags = VAR_5->rate[VAR_6].flags;

  if (VAR_4->rates[VAR_6].idx < 0 || !VAR_4->rates[VAR_6].count)
   break;
 }
 VAR_4->n_rates = VAR_6;
 FUNC_1(VAR_3, VAR_4, ((void*)0), VAR_4->rates);
 VAR_4->rate_probe = 0;
 FUNC_4(&VAR_3->mt76.lock);
}
