
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zd_mac {int chip; int lock; int channel; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct TYPE_3__ {int hw_value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct zd_mac* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct zd_mac *VAR_2 = FUNC_3(VAR_0);
 struct ieee80211_conf *VAR_3 = &VAR_0->conf;

 FUNC_0(&VAR_2->lock);
 VAR_2->channel = VAR_3->chandef.chan->hw_value;
 FUNC_1(&VAR_2->lock);

 return FUNC_2(&VAR_2->chip, VAR_3->chandef.chan->hw_value);
}
