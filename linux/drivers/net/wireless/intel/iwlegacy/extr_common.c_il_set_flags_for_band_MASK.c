
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct il_priv {TYPE_2__ staging; } ;
struct TYPE_3__ {scalar_t__ use_short_slot; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(struct il_priv *VAR_5, enum nl80211_band VAR_6,
        struct ieee80211_vif *VAR_7)
{
 if (VAR_6 == VAR_0) {
  VAR_5->staging.flags &=
      ~(VAR_2 | VAR_1 |
        VAR_3);
  VAR_5->staging.flags |= VAR_4;
 } else {

  if (VAR_7 && VAR_7->bss_conf.use_short_slot)
   VAR_5->staging.flags |= VAR_4;
  else
   VAR_5->staging.flags &= ~VAR_4;

  VAR_5->staging.flags |= VAR_2;
  VAR_5->staging.flags |= VAR_1;
  VAR_5->staging.flags &= ~VAR_3;
 }
}
