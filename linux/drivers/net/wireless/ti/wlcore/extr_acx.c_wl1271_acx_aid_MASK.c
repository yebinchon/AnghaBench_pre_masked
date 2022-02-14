
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_aid {int aid; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_aid*) ;
 struct acx_aid* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_aid*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5, u16 VAR_6)
{
 struct acx_aid *VAR_7;
 int VAR_8;

 FUNC_4(VAR_1, "acx aid");

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->role_id = VAR_5->role_id;
 VAR_7->aid = FUNC_0(VAR_6);

 VAR_8 = FUNC_3(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_5("failed to set aid: %d", VAR_8);
  goto out;
 }

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
