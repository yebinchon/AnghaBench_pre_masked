
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_current_tx_power {int current_tx_power; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_current_tx_power*) ;
 struct acx_current_tx_power* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_current_tx_power*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
   int VAR_7)
{
 struct acx_current_tx_power *VAR_8;
 int VAR_9;

 FUNC_3(VAR_0, "acx dot11_cur_tx_pwr %d", VAR_7);

 if (VAR_7 < 0 || VAR_7 > 25)
  return -VAR_2;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  VAR_9 = -VAR_3;
  goto out;
 }

 VAR_8->role_id = VAR_6->role_id;
 VAR_8->current_tx_power = VAR_7 * 10;

 VAR_9 = FUNC_2(VAR_5, VAR_1, VAR_8, sizeof(*VAR_8));
 if (VAR_9 < 0) {
  FUNC_4("configure of tx power failed: %d", VAR_9);
  goto out;
 }

out:
 FUNC_0(VAR_8);
 return VAR_9;
}
