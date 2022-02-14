
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_ps_rx_streaming {int tid; int enable; int timeout; int period; int role_id; } ;
struct TYPE_3__ {int queues; int interval; } ;
struct TYPE_4__ {TYPE_1__ rx_streaming; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct wl1271_acx_ps_rx_streaming*) ;
 struct wl1271_acx_ps_rx_streaming* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_ps_rx_streaming*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
          bool VAR_6)
{
 struct wl1271_acx_ps_rx_streaming *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11 = 0;

 FUNC_4(VAR_1, "acx ps rx streaming");

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_8 = VAR_4->conf.rx_streaming.queues;
 if (VAR_6)
  VAR_9 = VAR_8;
 else
  VAR_9 = 0;

 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {





  if (!(VAR_8 & FUNC_0(VAR_10)))
   continue;

  VAR_7->role_id = VAR_5->role_id;
  VAR_7->tid = VAR_10;
  VAR_7->enable = VAR_9 & FUNC_0(VAR_10);
  VAR_7->period = VAR_4->conf.rx_streaming.interval;
  VAR_7->timeout = VAR_4->conf.rx_streaming.interval;

  VAR_11 = FUNC_3(VAR_4, VAR_0,
        VAR_7,
        sizeof(*VAR_7));
  if (VAR_11 < 0) {
   FUNC_5("acx ps rx streaming failed: %d", VAR_11);
   goto out;
  }
 }
out:
 FUNC_1(VAR_7);
 return VAR_11;
}
