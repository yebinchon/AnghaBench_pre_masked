
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1271 {int * sched_vif; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct wl1271 *VAR_1,
           u8 VAR_2)
{
 FUNC_1(VAR_0, "PERIODIC_SCAN_COMPLETE_EVENT (status 0x%0x)",
       VAR_2);

 if (VAR_1->sched_vif) {
  FUNC_0(VAR_1->hw);
  VAR_1->sched_vif = ((void*)0);
 }
}
