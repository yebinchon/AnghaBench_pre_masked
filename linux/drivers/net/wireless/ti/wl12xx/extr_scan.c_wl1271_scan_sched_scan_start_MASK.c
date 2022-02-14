
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; int role_id; int flags; } ;
struct wl1271_cmd_sched_scan_start {int tag; int role_id; } ;
struct wl1271 {int quirks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct wl1271_cmd_sched_scan_start*) ;
 struct wl1271_cmd_sched_scan_start* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_cmd_sched_scan_start*,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_10, struct wl12xx_vif *VAR_11)
{
 struct wl1271_cmd_sched_scan_start *VAR_12;
 int VAR_13 = 0;

 FUNC_4(VAR_2, "cmd periodic scan start");

 if (VAR_11->bss_type != VAR_0)
  return -VAR_5;

 if ((VAR_10->quirks & VAR_8) &&
     FUNC_2(VAR_9, &VAR_11->flags))
  return -VAR_3;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->role_id = VAR_11->role_id;
 VAR_12->tag = VAR_7;

 VAR_13 = FUNC_3(VAR_10, VAR_1, VAR_12,
         sizeof(*VAR_12), 0);
 if (VAR_13 < 0) {
  FUNC_5("failed to send scan start command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_12);
 return VAR_13;
}
