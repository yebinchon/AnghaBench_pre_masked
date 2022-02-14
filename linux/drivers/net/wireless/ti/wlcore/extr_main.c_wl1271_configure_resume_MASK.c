
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {scalar_t__ bss_type; int flags; } ;
struct TYPE_3__ {scalar_t__ suspend_wake_up_event; scalar_t__ wake_up_event; scalar_t__ suspend_listen_interval; scalar_t__ listen_interval; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct wl1271*,int *) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 int VAR_6 = 0;
 bool VAR_7 = VAR_5->bss_type == VAR_0;
 bool VAR_8 = VAR_5->bss_type == VAR_1;

 if ((!VAR_7) && (!VAR_8))
  return;

 if ((VAR_8 && !FUNC_0(VAR_3, &VAR_5->flags)) ||
     (VAR_7 && !FUNC_0(VAR_2, &VAR_5->flags)))
  return;

 FUNC_3(VAR_4, ((void*)0));

 if (VAR_8) {
  if ((VAR_4->conf.conn.suspend_wake_up_event ==
       VAR_4->conf.conn.wake_up_event) &&
      (VAR_4->conf.conn.suspend_listen_interval ==
       VAR_4->conf.conn.listen_interval))
   return;

  VAR_6 = FUNC_2(VAR_4, VAR_5,
        VAR_4->conf.conn.wake_up_event,
        VAR_4->conf.conn.listen_interval);

  if (VAR_6 < 0)
   FUNC_4("resume: wake up conditions failed: %d",
         VAR_6);

 } else if (VAR_7) {
  VAR_6 = FUNC_1(VAR_4, VAR_5, 0);
 }
}
