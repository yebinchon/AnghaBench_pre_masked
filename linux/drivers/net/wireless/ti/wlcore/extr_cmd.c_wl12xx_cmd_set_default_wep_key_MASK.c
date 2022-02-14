
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1271_cmd_set_keys {int key_type; int key_action; int lid_key_type; void* key_id; void* hlid; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_cmd_set_keys*) ;
 struct wl1271_cmd_set_keys* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_cmd_set_keys*,int,int ) ;
 int FUNC_4 (int ,char*,void*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct wl1271_cmd_set_keys *VAR_10;
 int VAR_11 = 0;

 FUNC_4(VAR_1, "cmd set_default_wep_key %d", VAR_8);

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10->hlid = VAR_9;
 VAR_10->key_id = VAR_8;
 VAR_10->lid_key_type = VAR_6;
 VAR_10->key_action = FUNC_0(VAR_4);
 VAR_10->key_type = VAR_5;

 VAR_11 = FUNC_3(VAR_7, VAR_0, VAR_10, sizeof(*VAR_10), 0);
 if (VAR_11 < 0) {
  FUNC_5("cmd set_default_wep_key failed: %d", VAR_11);
  goto out;
 }

out:
 FUNC_1(VAR_10);

 return VAR_11;
}
