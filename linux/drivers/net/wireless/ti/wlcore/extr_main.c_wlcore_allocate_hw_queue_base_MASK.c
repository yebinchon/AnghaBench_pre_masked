
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlcore_hw_queue_iter_data {int hw_queue_map; scalar_t__ cur_running; struct ieee80211_vif* vif; } ;
struct wl12xx_vif {int hw_queue_base; scalar_t__ bss_type; } ;
struct wl1271 {scalar_t__* queue_stop_reasons; int hw; } ;
struct ieee80211_vif {scalar_t__ type; int cab_queue; int* hw_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,struct wlcore_hw_queue_iter_data*) ;
 int FUNC_2 (int ,char*,int) ;
 struct ieee80211_vif* FUNC_3 (struct wl12xx_vif*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_9,
      struct wl12xx_vif *VAR_10)
{
 struct ieee80211_vif *VAR_11 = FUNC_3(VAR_10);
 struct wlcore_hw_queue_iter_data VAR_12 = {};
 int VAR_13, VAR_14;

 if (VAR_11->type == VAR_5) {
  VAR_11->cab_queue = VAR_4;
  return 0;
 }

 VAR_12.vif = VAR_11;


 FUNC_1(VAR_9->hw,
     VAR_3,
     VAR_8, &VAR_12);


 if (VAR_12.cur_running) {
  VAR_10->hw_queue_base = VAR_11->hw_queue[0];
  FUNC_2(VAR_1,
        "using pre-allocated hw queue base %d",
        VAR_10->hw_queue_base);


  goto adjust_cab_queue;
 }

 VAR_14 = FUNC_0(VAR_12.hw_queue_map,
         VAR_7);
 if (VAR_14 >= VAR_7)
  return -VAR_2;

 VAR_10->hw_queue_base = VAR_14 * VAR_6;
 FUNC_2(VAR_1, "allocating hw queue base: %d",
       VAR_10->hw_queue_base);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_9->queue_stop_reasons[VAR_10->hw_queue_base + VAR_13] = 0;

  VAR_11->hw_queue[VAR_13] = VAR_10->hw_queue_base + VAR_13;
 }

adjust_cab_queue:

 if (VAR_10->bss_type == VAR_0)
  VAR_11->cab_queue = VAR_6 * VAR_7 +
     VAR_10->hw_queue_base / VAR_6;
 else
  VAR_11->cab_queue = VAR_4;

 return 0;
}
