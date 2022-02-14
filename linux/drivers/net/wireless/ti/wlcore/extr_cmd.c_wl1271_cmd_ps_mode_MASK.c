
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_cmd_ps_params {int auto_ps_timeout; int ps_mode; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_cmd_ps_params*) ;
 struct wl1271_cmd_ps_params* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_cmd_ps_params*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
         u8 VAR_6, u16 VAR_7)
{
 struct wl1271_cmd_ps_params *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_3(VAR_1, "cmd set ps mode");

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_8->role_id = VAR_5->role_id;
 VAR_8->ps_mode = VAR_6;
 VAR_8->auto_ps_timeout = VAR_7;

 VAR_9 = FUNC_2(VAR_4, VAR_0, VAR_8,
         sizeof(*VAR_8), 0);
 if (VAR_9 < 0) {
  FUNC_4("cmd set_ps_mode failed");
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
