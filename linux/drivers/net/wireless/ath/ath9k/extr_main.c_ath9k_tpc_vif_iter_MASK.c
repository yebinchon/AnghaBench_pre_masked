
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int txpower; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u8 *VAR_1, struct ieee80211_vif *VAR_2)
{
 int *VAR_3 = VAR_0;

 if (*VAR_3 < VAR_2->bss_conf.txpower)
  *VAR_3 = VAR_2->bss_conf.txpower;
}
