
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int power_level; } ;
struct wl1271 {scalar_t__ radar_debug_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_2->power_level);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_1->radar_debug_mode)
  FUNC_2(VAR_1, VAR_2,
           VAR_0,
           VAR_1->radar_debug_mode, 0);

 return 0;
}
