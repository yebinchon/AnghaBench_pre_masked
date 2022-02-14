
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_sta_iter_data {int assoc; } ;
struct TYPE_2__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2,
           struct ieee80211_vif *VAR_3)
{
 struct iwl_sta_iter_data *VAR_4 = VAR_1;

 if (VAR_3->type != VAR_0)
  return;

 if (VAR_3->bss_conf.assoc)
  VAR_4->assoc = 1;
}
