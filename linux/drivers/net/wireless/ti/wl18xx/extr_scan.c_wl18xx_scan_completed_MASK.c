
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct TYPE_2__ {int failed; } ;
struct wl1271 {int scan_complete_work; int hw; TYPE_1__ scan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1)
{
 VAR_0->scan.failed = 0;
 FUNC_0(&VAR_0->scan_complete_work);
 FUNC_1(VAR_0->hw, &VAR_0->scan_complete_work,
         FUNC_2(0));
}
