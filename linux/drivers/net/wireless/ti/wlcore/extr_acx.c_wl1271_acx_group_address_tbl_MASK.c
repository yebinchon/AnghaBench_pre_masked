
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_dot11_grp_addr_tbl {int enabled; int num_groups; int mac_table; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_dot11_grp_addr_tbl*) ;
 struct acx_dot11_grp_addr_tbl* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_dot11_grp_addr_tbl*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
     bool VAR_7, void *VAR_8, u32 VAR_9)
{
 struct acx_dot11_grp_addr_tbl *VAR_10;
 int VAR_11;

 FUNC_4(VAR_0, "acx group address tbl");

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_4);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }


 VAR_10->role_id = VAR_6->role_id;
 VAR_10->enabled = VAR_7;
 VAR_10->num_groups = VAR_9;
 FUNC_2(VAR_10->mac_table, VAR_8, VAR_9 * VAR_3);

 VAR_11 = FUNC_3(VAR_5, VAR_1,
       VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_5("failed to set group addr table: %d", VAR_11);
  goto out;
 }

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
