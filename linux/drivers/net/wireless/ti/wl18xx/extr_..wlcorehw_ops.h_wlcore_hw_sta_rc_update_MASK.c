
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sta_rc_update ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int FUNC_0 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static inline void
FUNC_1(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1)
{
 if (VAR_0->ops->sta_rc_update)
  VAR_0->ops->sta_rc_update(VAR_0, VAR_1);
}
