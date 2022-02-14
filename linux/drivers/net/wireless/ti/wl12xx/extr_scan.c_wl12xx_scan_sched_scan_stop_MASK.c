
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271_cmd_sched_scan_stop {int tag; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_cmd_sched_scan_stop*) ;
 struct wl1271_cmd_sched_scan_stop* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_cmd_sched_scan_stop*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct wl1271_cmd_sched_scan_stop *VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_1, "cmd periodic scan stop");


 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  FUNC_4("failed to alloc memory to send sched scan stop");
  return;
 }

 VAR_6->role_id = VAR_5->role_id;
 VAR_6->tag = VAR_3;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6,
         sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_4("failed to send sched scan stop command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_6);
}
