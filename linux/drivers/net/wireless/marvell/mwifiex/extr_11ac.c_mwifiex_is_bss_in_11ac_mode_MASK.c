
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_bssdescriptor {int bcn_vht_cap; struct ieee80211_vht_operation* bcn_vht_oper; } ;
struct TYPE_2__ {struct mwifiex_bssdescriptor bss_descriptor; } ;
struct mwifiex_private {TYPE_1__ curr_bss_params; } ;
struct ieee80211_vht_operation {scalar_t__ chan_width; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct mwifiex_private *VAR_1)
{
 struct mwifiex_bssdescriptor *VAR_2;
 struct ieee80211_vht_operation *VAR_3;

 VAR_2 = &VAR_1->curr_bss_params.bss_descriptor;
 VAR_3 = VAR_2->bcn_vht_oper;

 if (!VAR_2->bcn_vht_cap || !VAR_3)
  return 0;

 if (VAR_3->chan_width == VAR_0)
  return 0;

 return 1;
}
