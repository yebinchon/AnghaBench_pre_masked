
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int sta_hlid_map; } ;
struct wl12xx_vif {TYPE_2__ ap; } ;
struct wl1271 {scalar_t__ active_sta_count; TYPE_1__* links; int ap_fw_ps_map; int ap_ps_map; } ;
struct TYPE_3__ {int addr; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,size_t,int ) ;

void FUNC_6(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1, u8 VAR_2)
{
 if (!FUNC_2(VAR_2, VAR_1->ap.sta_hlid_map))
  return;

 FUNC_1(VAR_2, VAR_1->ap.sta_hlid_map);
 FUNC_0(VAR_2, &VAR_0->ap_ps_map);
 FUNC_0(VAR_2, &VAR_0->ap_fw_ps_map);





 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_0->links[VAR_2].addr);

 FUNC_3(VAR_0, VAR_1, &VAR_2);
 VAR_0->active_sta_count--;





 if (VAR_0->active_sta_count == 0)
  FUNC_4(VAR_0);
}
