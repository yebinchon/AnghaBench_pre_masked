
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int flags; } ;
struct TYPE_3__ {scalar_t__ suspend_wake_up_event; scalar_t__ wake_up_event; scalar_t__ suspend_listen_interval; scalar_t__ listen_interval; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct cfg80211_wowlan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct wl1271*,struct cfg80211_wowlan*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_1,
     struct wl12xx_vif *VAR_2,
     struct cfg80211_wowlan *VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_0(VAR_0, &VAR_2->flags))
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4 < 0)
  goto out;

 if ((VAR_1->conf.conn.suspend_wake_up_event ==
      VAR_1->conf.conn.wake_up_event) &&
     (VAR_1->conf.conn.suspend_listen_interval ==
      VAR_1->conf.conn.listen_interval))
  goto out;

 VAR_4 = FUNC_1(VAR_1, VAR_2,
        VAR_1->conf.conn.suspend_wake_up_event,
        VAR_1->conf.conn.suspend_listen_interval);

 if (VAR_4 < 0)
  FUNC_3("suspend: set wake up conditions failed: %d", VAR_4);
out:
 return VAR_4;

}
