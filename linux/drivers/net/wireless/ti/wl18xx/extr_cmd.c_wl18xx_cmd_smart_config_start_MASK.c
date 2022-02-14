
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl18xx_cmd_smart_config_start {int group_id_bitmask; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl18xx_cmd_smart_config_start*) ;
 struct wl18xx_cmd_smart_config_start* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl18xx_cmd_smart_config_start*,int,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct wl1271 *VAR_4, u32 VAR_5)
{
 struct wl18xx_cmd_smart_config_start *VAR_6;
 int VAR_7 = 0;

 FUNC_4(VAR_1, "cmd smart config start group_bitmap=0x%x",
       VAR_5);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->group_id_bitmask = FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6), 0);
 if (VAR_7 < 0) {
  FUNC_5("failed to send smart config start command");
  goto out_free;
 }

out_free:
 FUNC_1(VAR_6);
out:
 return VAR_7;
}
