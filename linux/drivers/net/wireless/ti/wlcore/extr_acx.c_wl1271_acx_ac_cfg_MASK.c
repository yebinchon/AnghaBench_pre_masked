
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_ac_cfg {void* tx_op_limit; void* aifsn; void* cw_max; void* cw_min; void* ac; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_ac_cfg*) ;
 struct acx_ac_cfg* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_ac_cfg*,int) ;
 int FUNC_4 (int ,char*,void*,void*,int ,void*,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
        u8 VAR_6, u8 VAR_7, u16 VAR_8, u8 VAR_9, u16 VAR_10)
{
 struct acx_ac_cfg *VAR_11;
 int VAR_12 = 0;

 FUNC_4(VAR_1, "acx ac cfg %d cw_ming %d cw_max %d "
       "aifs %d txop %d", VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_3);

 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_11->role_id = VAR_5->role_id;
 VAR_11->ac = VAR_6;
 VAR_11->cw_min = VAR_7;
 VAR_11->cw_max = FUNC_0(VAR_8);
 VAR_11->aifsn = VAR_9;
 VAR_11->tx_op_limit = FUNC_0(VAR_10);

 VAR_12 = FUNC_3(VAR_4, VAR_0, VAR_11, sizeof(*VAR_11));
 if (VAR_12 < 0) {
  FUNC_5("acx ac cfg failed: %d", VAR_12);
  goto out;
 }

out:
 FUNC_1(VAR_11);
 return VAR_12;
}
