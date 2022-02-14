
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wlcore_cmd_generic_cfg {void* value; void* enable; void* feature; int role_id; } ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wlcore_cmd_generic_cfg*) ;
 struct wlcore_cmd_generic_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wlcore_cmd_generic_cfg*,int,int ) ;
 int FUNC_3 (int ,char*,int ,void*,void*,void*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
      u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct wlcore_cmd_generic_cfg *VAR_9;
 int VAR_10;

 FUNC_3(VAR_1,
       "cmd generic cfg (role %d feature %d enable %d value %d)",
       VAR_5->role_id, VAR_6, VAR_7, VAR_8);

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->role_id = VAR_5->role_id;
 VAR_9->feature = VAR_6;
 VAR_9->enable = VAR_7;
 VAR_9->value = VAR_8;

 VAR_10 = FUNC_2(VAR_4, VAR_0, VAR_9, sizeof(*VAR_9), 0);
 if (VAR_10 < 0) {
  FUNC_4("failed to send generic cfg command");
  goto out_free;
 }
out_free:
 FUNC_0(VAR_9);
 return VAR_10;
}
