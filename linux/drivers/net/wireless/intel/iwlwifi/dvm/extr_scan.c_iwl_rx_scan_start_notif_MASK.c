
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scanstart_notification {int beacon_timer; int status; int tsf_low; int tsf_high; scalar_t__ band; int channel; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int scan_start_tsf; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_0,
        struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_2(VAR_1);
 struct iwl_scanstart_notification *VAR_3 = (void *)VAR_2->data;

 VAR_0->scan_start_tsf = FUNC_1(VAR_3->tsf_low);
 FUNC_0(VAR_0, "Scan start: "
         "%d [802.11%s] "
         "(TSF: 0x%08X:%08X) - %d (beacon timer %u)\n",
         VAR_3->channel,
         VAR_3->band ? "bg" : "a",
         FUNC_1(VAR_3->tsf_high),
         FUNC_1(VAR_3->tsf_low),
         VAR_3->status, VAR_3->beacon_timer);
}
