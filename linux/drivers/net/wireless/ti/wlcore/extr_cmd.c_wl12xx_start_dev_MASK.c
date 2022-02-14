
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {scalar_t__ bss_type; int dev_role_id; } ;
struct wl1271 {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct wl1271*,int *) ;
 int FUNC_2 (struct wl1271*,int ,int ,int *) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,int,int) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,int ,int,int) ;
 TYPE_1__* FUNC_6 (struct wl12xx_vif*) ;
 int FUNC_7 (struct wl12xx_vif*) ;

int FUNC_8(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
       enum nl80211_band VAR_6, int VAR_7)
{
 int VAR_8;

 if (FUNC_0(!(VAR_5->bss_type == VAR_1 ||
        VAR_5->bss_type == VAR_0)))
  return -VAR_2;


 if (!FUNC_7(VAR_5)) {
  VAR_8 = FUNC_2(VAR_4,
          FUNC_6(VAR_5)->addr,
          VAR_3,
          &VAR_5->dev_role_id);
  if (VAR_8 < 0)
   goto out;
 }

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto out_disable;

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_5->dev_role_id, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto out_stop;

 return 0;

out_stop:
 FUNC_4(VAR_4, VAR_5);
out_disable:
 if (!FUNC_7(VAR_5))
  FUNC_1(VAR_4, &VAR_5->dev_role_id);
out:
 return VAR_8;
}
