
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl12xx_cmd_stop_channel_switch {int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl12xx_cmd_stop_channel_switch*) ;
 struct wl12xx_cmd_stop_channel_switch* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_stop_channel_switch*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct wl12xx_cmd_stop_channel_switch *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "cmd stop channel switch");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->role_id = VAR_5->role_id;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_4("failed to stop channel switch command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_6);

out:
 return VAR_7;
}
