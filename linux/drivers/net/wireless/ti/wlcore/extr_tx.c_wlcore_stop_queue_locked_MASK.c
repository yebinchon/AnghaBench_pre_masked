
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int hw; int * queue_stop_reasons; } ;
typedef enum wlcore_queue_stop_reason { ____Placeholder_wlcore_queue_stop_reason } wlcore_queue_stop_reason ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct wl12xx_vif*,int ) ;

void FUNC_4(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
         u8 VAR_2, enum wlcore_queue_stop_reason VAR_3)
{
 int VAR_4 = FUNC_3(VAR_1, VAR_2);
 bool VAR_5 = !!VAR_0->queue_stop_reasons[VAR_4];


 FUNC_0(FUNC_2(VAR_3, &VAR_0->queue_stop_reasons[VAR_4]));

 if (VAR_5)
  return;

 FUNC_1(VAR_0->hw, VAR_4);
}
