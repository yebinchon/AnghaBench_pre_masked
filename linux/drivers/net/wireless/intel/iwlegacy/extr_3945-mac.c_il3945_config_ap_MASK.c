
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int filter_flags; scalar_t__ assoc_id; } ;
struct il_priv {TYPE_2__ staging; int status; struct ieee80211_vif* vif; } ;
struct TYPE_3__ {scalar_t__ use_short_slot; scalar_t__ use_short_preamble; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6(struct il_priv *VAR_5)
{
 struct ieee80211_vif *VAR_6 = VAR_5->vif;
 int VAR_7 = 0;

 if (FUNC_5(VAR_4, &VAR_5->status))
  return;


 if (!(FUNC_3(VAR_5))) {


  VAR_5->staging.filter_flags &= ~VAR_0;
  FUNC_1(VAR_5);


  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   FUNC_0("C_RXON_TIMING failed - "
    "Attempting to continue.\n");

  VAR_5->staging.assoc_id = 0;

  if (VAR_6->bss_conf.use_short_preamble)
   VAR_5->staging.flags |= VAR_2;
  else
   VAR_5->staging.flags &= ~VAR_2;

  if (VAR_5->staging.flags & VAR_1) {
   if (VAR_6->bss_conf.use_short_slot)
    VAR_5->staging.flags |= VAR_3;
   else
    VAR_5->staging.flags &= ~VAR_3;
  }

  VAR_5->staging.filter_flags |= VAR_0;
  FUNC_1(VAR_5);
 }
 FUNC_2(VAR_5);
}
