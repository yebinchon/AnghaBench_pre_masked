
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int basic_rate; } ;
struct wl1271_acx_config_ps {int null_data_rate; int enter_retries; int exit_retries; } ;
struct TYPE_4__ {int psm_entry_retries; int psm_exit_retries; } ;
struct TYPE_3__ {TYPE_2__ conn; } ;
struct wl1271 {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_config_ps*) ;
 struct wl1271_acx_config_ps* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_config_ps*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct wl1271_acx_config_ps *VAR_6;
 int VAR_7;

 FUNC_4(VAR_1, "acx config ps");

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->exit_retries = VAR_4->conf.conn.psm_exit_retries;
 VAR_6->enter_retries = VAR_4->conf.conn.psm_entry_retries;
 VAR_6->null_data_rate = FUNC_0(VAR_5->basic_rate);

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_6,
       sizeof(*VAR_6));

 if (VAR_7 < 0) {
  FUNC_5("acx config ps failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_6);
 return VAR_7;
}
