
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct TYPE_3__ {int center_freq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int* VAR_0 ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_1,
       struct ieee80211_conf *VAR_2)
{
 int VAR_3 =
  FUNC_0(VAR_2->chandef.chan->center_freq);

 FUNC_3(VAR_1, VAR_3);
 FUNC_2(VAR_1, 0x7, VAR_0[VAR_3 - 1]);
 if ((FUNC_1(VAR_1, 0x7) & 0x0F80) !=
  VAR_0[VAR_3 - 1])
  FUNC_2(VAR_1, 0x7, VAR_0[VAR_3 - 1]);
 FUNC_4(10000, 20000);
}
