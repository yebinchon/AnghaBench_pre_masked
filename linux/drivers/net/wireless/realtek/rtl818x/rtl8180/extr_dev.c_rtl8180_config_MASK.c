
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8180_priv {TYPE_1__* rf; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int (* set_chan ) (struct ieee80211_hw*,struct ieee80211_conf*) ;} ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_conf*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;
 struct ieee80211_conf *VAR_3 = &VAR_0->conf;

 VAR_2->rf->set_chan(VAR_0, VAR_3);

 return 0;
}
