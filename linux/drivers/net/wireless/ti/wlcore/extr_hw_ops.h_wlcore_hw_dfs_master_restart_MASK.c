
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dfs_master_restart ) (struct wl1271*,struct wl12xx_vif*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static inline int
FUNC_1(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2)
{
 if (!VAR_1->ops->dfs_master_restart)
  return -VAR_0;

 return VAR_1->ops->dfs_master_restart(VAR_1, VAR_2);
}
