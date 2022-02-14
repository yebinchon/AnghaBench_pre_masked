
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct adm8211_priv* priv; } ;
struct adm8211_priv {int channel; } ;
struct TYPE_3__ {int center_freq; } ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct adm8211_priv *VAR_2 = VAR_0->priv;
 struct ieee80211_conf *VAR_3 = &VAR_0->conf;
 int VAR_4 =
  FUNC_1(VAR_3->chandef.chan->center_freq);

 if (VAR_4 != VAR_2->channel) {
  VAR_2->channel = VAR_4;
  FUNC_0(VAR_0, VAR_2->channel);
 }

 return 0;
}
