
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlcore_hw_queue_iter_data {int cur_running; int hw_queue_map; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {scalar_t__ type; int* hw_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, u8 *VAR_4,
     struct ieee80211_vif *VAR_5)
{
 struct wlcore_hw_queue_iter_data *VAR_6 = VAR_3;

 if (VAR_5->type == VAR_1 ||
     FUNC_0(VAR_5->hw_queue[0] == VAR_0))
  return;

 if (VAR_6->cur_running || VAR_5 == VAR_6->vif) {
  VAR_6->cur_running = 1;
  return;
 }

 FUNC_1(VAR_5->hw_queue[0] / VAR_2, VAR_6->hw_queue_map);
}
