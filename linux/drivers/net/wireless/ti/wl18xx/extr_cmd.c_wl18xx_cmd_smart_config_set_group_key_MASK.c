
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl18xx_cmd_smart_config_set_group_key {int key; int group_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl18xx_cmd_smart_config_set_group_key*) ;
 struct wl18xx_cmd_smart_config_set_group_key* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct wl1271*,int ,struct wl18xx_cmd_smart_config_set_group_key*,int,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(struct wl1271 *VAR_5, u16 VAR_6,
       u8 VAR_7, u8 *VAR_8)
{
 struct wl18xx_cmd_smart_config_set_group_key *VAR_9;
 int VAR_10 = 0;

 FUNC_5(VAR_1, "cmd smart config set group key id=0x%x",
       VAR_6);

 if (VAR_7 != sizeof(VAR_9->key)) {
  FUNC_6("invalid group key size: %d", VAR_7);
  return -VAR_2;
 }

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_9->group_id = FUNC_0(VAR_6);
 FUNC_3(VAR_9->key, VAR_8, VAR_7);

 VAR_10 = FUNC_4(VAR_5, VAR_0, VAR_9,
         sizeof(*VAR_9), 0);
 if (VAR_10 < 0) {
  FUNC_6("failed to send smart config set group key cmd");
  goto out_free;
 }

out_free:
 FUNC_1(VAR_9);
out:
 return VAR_10;
}
