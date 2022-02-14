
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl8180_priv {TYPE_3__* rf; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct TYPE_6__ {scalar_t__ init; } ;
struct TYPE_4__ {int center_freq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
       struct ieee80211_conf *VAR_3)
{
 struct rtl8180_priv *VAR_4 = VAR_2->priv;
 int VAR_5 =
  FUNC_0(VAR_3->chandef.chan->center_freq);

 if (VAR_4->rf->init == VAR_1)
  FUNC_2(VAR_2, VAR_5);
 else
  FUNC_4(VAR_2, VAR_5);

 FUNC_3(VAR_2, 0x7, VAR_0[VAR_5 - 1]);
 FUNC_1(10);
}
