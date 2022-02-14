
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ role_id; int channel; int band; } ;
struct wl1271 {int roc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl1271 *VAR_2,
       struct wl12xx_vif *VAR_3)
{
 if (FUNC_1(VAR_2->roc_map,
      VAR_1) < VAR_1)
  return;

 if (FUNC_0(VAR_3->role_id == VAR_0))
  return;

 FUNC_2(VAR_2, VAR_3, VAR_3->role_id, VAR_3->band, VAR_3->channel);
}
