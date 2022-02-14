
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl18xx_cmd_dfs_radar_debug {int channel; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl18xx_cmd_dfs_radar_debug*) ;
 struct wl18xx_cmd_dfs_radar_debug* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl18xx_cmd_dfs_radar_debug*,int,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, u8 VAR_5)
{
 struct wl18xx_cmd_dfs_radar_debug *VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_1, "cmd radar detection debug (chan %d)",
       VAR_5);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->channel = VAR_5;

 VAR_7 = FUNC_2(VAR_4, VAR_0,
         VAR_6, sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_4("failed to send radar detection debug command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_6);
 return VAR_7;
}
