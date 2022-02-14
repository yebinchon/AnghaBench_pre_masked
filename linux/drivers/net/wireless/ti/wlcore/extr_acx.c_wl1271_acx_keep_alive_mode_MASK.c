
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_keep_alive_mode {int enabled; int role_id; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_acx_keep_alive_mode*) ;
 struct wl1271_acx_keep_alive_mode* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_acx_keep_alive_mode*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
          bool VAR_6)
{
 struct wl1271_acx_keep_alive_mode *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_3(VAR_1, "acx keep alive mode: %d", VAR_6);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->role_id = VAR_5->role_id;
 VAR_7->enabled = VAR_6;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("acx keep alive mode failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
