
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int role_id; } ;
struct TYPE_3__ {int bss_lose_timeout; int synch_fail_thold; } ;
struct TYPE_4__ {TYPE_1__ conn; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_conn_monit_params {void* bss_lose_timeout; void* synch_fail_thold; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_conn_monit_params*) ;
 struct acx_conn_monit_params* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_conn_monit_params*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6,
     bool VAR_7)
{
 struct acx_conn_monit_params *VAR_8;
 u32 VAR_9 = VAR_0;
 u32 VAR_10 = VAR_0;
 int VAR_11;

 FUNC_4(VAR_2, "acx connection monitor parameters: %s",
       VAR_7 ? "enabled" : "disabled");

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_4);
 if (!VAR_8) {
  VAR_11 = -VAR_3;
  goto out;
 }

 if (VAR_7) {
  VAR_9 = VAR_5->conf.conn.synch_fail_thold;
  VAR_10 = VAR_5->conf.conn.bss_lose_timeout;
 }

 VAR_8->role_id = VAR_6->role_id;
 VAR_8->synch_fail_thold = FUNC_0(VAR_9);
 VAR_8->bss_lose_timeout = FUNC_0(VAR_10);

 VAR_11 = FUNC_3(VAR_5, VAR_1,
       VAR_8, sizeof(*VAR_8));
 if (VAR_11 < 0) {
  FUNC_5("failed to set connection monitor "
          "parameters: %d", VAR_11);
  goto out;
 }

out:
 FUNC_1(VAR_8);
 return VAR_11;
}
