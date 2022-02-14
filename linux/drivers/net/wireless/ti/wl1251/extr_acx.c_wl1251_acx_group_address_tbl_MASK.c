
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int dummy; } ;
struct acx_dot11_grp_addr_tbl {int enabled; int num_groups; int mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_dot11_grp_addr_tbl*) ;
 struct acx_dot11_grp_addr_tbl* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (struct wl1251*,int ,struct acx_dot11_grp_addr_tbl*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1251 *VAR_5, bool VAR_6,
     void *VAR_7, u32 VAR_8)
{
 struct acx_dot11_grp_addr_tbl *VAR_9;
 int VAR_10;

 FUNC_4(VAR_0, "acx group address tbl");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_2;


 VAR_9->enabled = VAR_6;
 VAR_9->num_groups = VAR_8;
 FUNC_2(VAR_9->mac_table, VAR_7, VAR_8 * VAR_3);

 VAR_10 = FUNC_3(VAR_5, VAR_1,
       VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0) {
  FUNC_5("failed to set group addr table: %d", VAR_10);
  goto out;
 }

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
