
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_ap_max_tx_retry {int max_tx_retry; int role_id; } ;
struct TYPE_3__ {int max_tx_retries; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_ap_max_tx_retry*) ;
 struct wl1271_acx_ap_max_tx_retry* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_ap_max_tx_retry*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5)
{
 struct wl1271_acx_ap_max_tx_retry *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_4(VAR_1, "acx ap max tx retry");

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->role_id = VAR_5->role_id;
 VAR_6->max_tx_retry = FUNC_0(VAR_4->conf.tx.max_tx_retries);

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_5("acx ap max tx retry failed: %d", VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_6);
 return VAR_7;
}
