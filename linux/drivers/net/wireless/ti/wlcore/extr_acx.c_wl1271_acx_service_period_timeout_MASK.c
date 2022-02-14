
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct TYPE_3__ {int upsd_timeout; int ps_poll_timeout; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_rx_timeout {void* upsd_timeout; void* ps_poll_timeout; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_rx_timeout*) ;
 struct acx_rx_timeout* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_rx_timeout*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4,
          struct wl12xx_vif *VAR_5)
{
 struct acx_rx_timeout *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 FUNC_4(VAR_1, "acx service period timeout");

 VAR_6->role_id = VAR_5->role_id;
 VAR_6->ps_poll_timeout = FUNC_0(VAR_4->conf.rx.ps_poll_timeout);
 VAR_6->upsd_timeout = FUNC_0(VAR_4->conf.rx.upsd_timeout);

 VAR_7 = FUNC_3(VAR_4, VAR_0,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_5("failed to set service period timeout: %d",
          VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_6);
 return VAR_7;
}
