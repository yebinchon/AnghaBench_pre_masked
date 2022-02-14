
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_scanstart_notification {int beacon_timer; int status; int tsf_low; int tsf_high; scalar_t__ band; int channel; } ;
struct TYPE_2__ {scalar_t__ raw; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int scan_start_tsf; } ;


 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct il_rx_pkt* FUNC_2 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_0, struct il_rx_buf *VAR_1)
{
 struct il_rx_pkt *VAR_2 = FUNC_2(VAR_1);
 struct il_scanstart_notification *VAR_3 =
     (struct il_scanstart_notification *)VAR_2->u.raw;
 VAR_0->scan_start_tsf = FUNC_1(VAR_3->tsf_low);
 FUNC_0("Scan start: " "%d [802.11%s] "
        "(TSF: 0x%08X:%08X) - %d (beacon timer %u)\n", VAR_3->channel,
        VAR_3->band ? "bg" : "a", FUNC_1(VAR_3->tsf_high),
        FUNC_1(VAR_3->tsf_low), VAR_3->status, VAR_3->beacon_timer);
}
