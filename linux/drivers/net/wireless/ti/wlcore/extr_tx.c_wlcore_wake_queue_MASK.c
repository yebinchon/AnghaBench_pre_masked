
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int wl_lock; int hw; scalar_t__* queue_stop_reasons; } ;
typedef enum wlcore_queue_stop_reason { ____Placeholder_wlcore_queue_stop_reason } wlcore_queue_stop_reason ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (struct wl12xx_vif*,int ) ;

void FUNC_6(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1, u8 VAR_2,
         enum wlcore_queue_stop_reason VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = FUNC_5(VAR_1, VAR_2);

 FUNC_2(&VAR_0->wl_lock, VAR_4);


 FUNC_0(!FUNC_4(VAR_3, &VAR_0->queue_stop_reasons[VAR_5]));

 if (VAR_0->queue_stop_reasons[VAR_5])
  goto out;

 FUNC_1(VAR_0->hw, VAR_5);

out:
 FUNC_3(&VAR_0->wl_lock, VAR_4);
}
