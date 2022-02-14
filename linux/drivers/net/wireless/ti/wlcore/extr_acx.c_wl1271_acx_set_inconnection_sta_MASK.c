
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_inconnection_sta {int role_id; int addr; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wl1271_acx_inconnection_sta*) ;
 struct wl1271_acx_inconnection_sta* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_inconnection_sta*,int) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5,
        struct wl12xx_vif *VAR_6, u8 *VAR_7)
{
 struct wl1271_acx_inconnection_sta *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_4(VAR_1, "acx set inconnaction sta %pM", VAR_7);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(VAR_8->addr, VAR_7, VAR_3);
 VAR_8->role_id = VAR_6->role_id;

 VAR_9 = FUNC_3(VAR_5, VAR_0,
       VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_5("acx set inconnaction sta failed: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
