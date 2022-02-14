
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
struct TYPE_10__ {int basic_rates; } ;
struct ieee80211_vif {TYPE_5__ bss_conf; } ;
struct ar9170 {TYPE_4__* hw; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ conf; } ;
struct TYPE_6__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ieee80211_vif* FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct ar9170 *VAR_3)
{
 struct ieee80211_vif *VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_5();
 VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4) {
  FUNC_6();
  return 0;
 }

 VAR_5 = (VAR_4->bss_conf.basic_rates & 0xf);
 VAR_5 |= (VAR_4->bss_conf.basic_rates & 0xff0) << 4;
 FUNC_6();

 if (VAR_3->hw->conf.chandef.chan->band == VAR_2)
  VAR_6 = 0xff00;
 else
  VAR_6 = 0xff0f;

 FUNC_2(VAR_3);
 FUNC_1(VAR_0, VAR_5);
 FUNC_1(VAR_1, VAR_6);
 FUNC_3();

 return FUNC_4();
}
