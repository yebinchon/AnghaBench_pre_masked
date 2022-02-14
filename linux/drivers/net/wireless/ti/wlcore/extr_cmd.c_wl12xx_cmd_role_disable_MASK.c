
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_cmd_role_disable {scalar_t__ role_id; } ;
struct wl1271 {int roles_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct wl12xx_cmd_role_disable*) ;
 struct wl12xx_cmd_role_disable* FUNC_3 (int,int ) ;
 int FUNC_4 (struct wl1271*,int ,struct wl12xx_cmd_role_disable*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct wl1271 *VAR_6, u8 *VAR_7)
{
 struct wl12xx_cmd_role_disable *VAR_8;
 int VAR_9;

 FUNC_5(VAR_1, "cmd role disable");

 if (FUNC_0(*VAR_7 == VAR_5))
  return -VAR_2;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto out;
 }
 VAR_8->role_id = *VAR_7;

 VAR_9 = FUNC_4(VAR_6, VAR_0, VAR_8, sizeof(*VAR_8), 0);
 if (VAR_9 < 0) {
  FUNC_6("failed to initiate cmd role disable");
  goto out_free;
 }

 FUNC_1(*VAR_7, VAR_6->roles_map);
 *VAR_7 = VAR_5;

out_free:
 FUNC_2(VAR_8);

out:
 return VAR_9;
}
