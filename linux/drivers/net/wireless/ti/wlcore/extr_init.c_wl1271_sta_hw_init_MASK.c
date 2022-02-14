
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;


 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_3(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
