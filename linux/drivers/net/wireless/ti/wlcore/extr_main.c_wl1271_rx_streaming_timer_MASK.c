
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int rx_streaming_disable_work; struct wl1271* wl; } ;
struct wl1271 {int hw; } ;
struct timer_list {int dummy; } ;


 struct wl12xx_vif* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 struct wl12xx_vif* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct wl12xx_vif *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct wl1271 *VAR_4 = VAR_3->wl;
 FUNC_1(VAR_4->hw, &VAR_3->rx_streaming_disable_work);
}
