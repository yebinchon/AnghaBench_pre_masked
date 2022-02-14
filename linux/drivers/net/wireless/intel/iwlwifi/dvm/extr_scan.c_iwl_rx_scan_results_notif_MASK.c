
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scanresults_notification {int tsf_low; int * statistics; int tsf_high; int num_probe_not_sent; int probe_status; scalar_t__ band; int channel; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ scan_start_tsf; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_0,
          struct iwl_rx_cmd_buffer *VAR_1)
{
}
