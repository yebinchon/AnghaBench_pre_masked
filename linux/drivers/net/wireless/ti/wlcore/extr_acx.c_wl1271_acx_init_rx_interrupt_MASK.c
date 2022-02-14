
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1271_acx_rx_config_opt {int queue_type; void* mblk_threshold; void* timeout; void* threshold; } ;
struct TYPE_3__ {int queue_type; int irq_blk_threshold; int irq_timeout; int irq_pkt_threshold; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct wl1271 {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_rx_config_opt*) ;
 struct wl1271_acx_rx_config_opt* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_rx_config_opt*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct wl1271_acx_rx_config_opt *VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, "wl1271 rx interrupt config");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_5->threshold = FUNC_0(VAR_4->conf.rx.irq_pkt_threshold);
 VAR_5->timeout = FUNC_0(VAR_4->conf.rx.irq_timeout);
 VAR_5->mblk_threshold = FUNC_0(VAR_4->conf.rx.irq_blk_threshold);
 VAR_5->queue_type = VAR_4->conf.rx.queue_type;

 VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_5,
       sizeof(*VAR_5));
 if (VAR_6 < 0) {
  FUNC_5("wl1271 rx config opt failed: %d", VAR_6);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_6;
}
