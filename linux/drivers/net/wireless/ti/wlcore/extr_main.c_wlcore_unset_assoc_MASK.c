
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int klv_template_id; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_1__ sta; int channel_switch_work; int flags; int * probereq; scalar_t__ aid; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_vif*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,int ,int ) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*) ;
 struct ieee80211_vif* FUNC_9 (struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_10(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6)
{
 int VAR_7;
 bool VAR_8 = VAR_6->bss_type == VAR_1;


 if (VAR_8 &&
     !FUNC_3(VAR_4, &VAR_6->flags))
  return 0;


 if (!VAR_8 &&
     FUNC_3(VAR_3, &VAR_6->flags))
  return 0;

 if (VAR_8) {

  VAR_6->aid = 0;


  FUNC_1(VAR_6->probereq);
  VAR_6->probereq = ((void*)0);


  VAR_7 = FUNC_5(VAR_5, VAR_6, 0);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_7 = FUNC_7(VAR_5, VAR_6, 0);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_7 = FUNC_4(VAR_5, VAR_6, 0);
  if (VAR_7 < 0)
   return VAR_7;
 }

 if (FUNC_3(VAR_2, &VAR_6->flags)) {
  struct ieee80211_vif *VAR_9 = FUNC_9(VAR_6);

  FUNC_8(VAR_5, VAR_6);
  FUNC_2(VAR_9, 0);
  FUNC_0(&VAR_6->channel_switch_work);
 }


 FUNC_6(VAR_5, VAR_6,
         VAR_6->sta.klv_template_id,
         VAR_0);

 return 0;
}
