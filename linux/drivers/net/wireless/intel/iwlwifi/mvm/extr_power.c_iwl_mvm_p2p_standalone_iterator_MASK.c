
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;





 int FUNC_0 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 *VAR_1,
         struct ieee80211_vif *VAR_2)
{
 bool *VAR_3 = VAR_0;

 switch (FUNC_0(VAR_2)) {
 case 129:
 case 130:
  *VAR_3 = 0;
  break;
 case 128:
  if (VAR_2->bss_conf.assoc)
   *VAR_3 = 0;
  break;

 default:
  break;
 }
}
