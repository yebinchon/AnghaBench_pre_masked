
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl12xx_vif {int bss_type; TYPE_1__* wl; int flags; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int active_sta_count; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct wl12xx_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct wl12xx_vif *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5 = 0;
 int *VAR_6 = (int *)VAR_1;






 switch (VAR_4->bss_type) {
 case 128:
  if (FUNC_0(VAR_0, &VAR_4->flags))
   VAR_5 = 1;
  break;

 case 129:
  if (VAR_4->wl->active_sta_count > 0)
   VAR_5 = 1;
  break;

 default:
  break;
 }

 if (VAR_5)
  (*VAR_6)++;
}
