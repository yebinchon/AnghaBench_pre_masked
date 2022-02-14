
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_cmd_dfs_master_restart {int role_id; } ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl18xx_cmd_dfs_master_restart*) ;
 struct wl18xx_cmd_dfs_master_restart* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl18xx_cmd_dfs_master_restart*,int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct wl18xx_cmd_dfs_master_restart *VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_1, "cmd dfs master restart (role %d)",
       VAR_5->role_id);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->role_id = VAR_5->role_id;

 VAR_7 = FUNC_2(VAR_4, VAR_0,
         VAR_6, sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_4("failed to send dfs master restart command");
  goto out_free;
 }
out_free:
 FUNC_0(VAR_6);
 return VAR_7;
}
