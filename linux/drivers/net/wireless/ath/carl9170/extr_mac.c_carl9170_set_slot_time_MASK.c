
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ use_short_slot; } ;
struct ieee80211_vif {TYPE_5__ bss_conf; } ;
struct ar9170 {TYPE_4__* hw; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ conf; } ;
struct TYPE_6__ {scalar_t__ band; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_vif* FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct ar9170 *VAR_2)
{
 struct ieee80211_vif *VAR_3;
 u32 VAR_4 = 20;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_3();
  return 0;
 }

 if ((VAR_2->hw->conf.chandef.chan->band == VAR_1) ||
     VAR_3->bss_conf.use_short_slot)
  VAR_4 = 9;

 FUNC_3();

 return FUNC_1(VAR_2, VAR_0,
      VAR_4 << 10);
}
