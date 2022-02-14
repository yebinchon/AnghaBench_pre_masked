
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int flags; } ;
struct wl1271 {TYPE_1__* ops; struct wl12xx_vif* sched_vif; } ;
struct TYPE_2__ {int (* sched_scan_stop ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
       bool VAR_3)
{
 bool VAR_4 = !FUNC_3(VAR_0, &VAR_2->flags);

 if (VAR_3 == VAR_4)
  return;

 if (VAR_3) {
  FUNC_0(VAR_0, &VAR_2->flags);
 } else {

  if (VAR_1->sched_vif == VAR_2)
   VAR_1->ops->sched_scan_stop(VAR_1, VAR_2);

  FUNC_1(VAR_0, &VAR_2->flags);
 }
}
