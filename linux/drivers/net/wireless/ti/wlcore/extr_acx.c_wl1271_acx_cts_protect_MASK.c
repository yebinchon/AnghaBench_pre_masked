
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_ctsprotect {int ctsprotect; int role_id; } ;
typedef enum acx_ctsprotect_type { ____Placeholder_acx_ctsprotect_type } acx_ctsprotect_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_ctsprotect*) ;
 struct acx_ctsprotect* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_ctsprotect*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
      enum acx_ctsprotect_type VAR_6)
{
 struct acx_ctsprotect *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx_set_ctsprotect");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->role_id = VAR_5->role_id;
 VAR_7->ctsprotect = VAR_6;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("Setting of ctsprotect failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
