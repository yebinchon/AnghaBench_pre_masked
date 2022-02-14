
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int max_delta_stats; int delta_stats; int accum_stats; } ;
struct iwl_notif_statistics {int flag; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rx_cmd_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_1,
           struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_4(VAR_2);
 struct iwl_notif_statistics *VAR_4 = (void *)VAR_3->data;

 if (FUNC_2(VAR_4->flag) & VAR_0) {
  FUNC_0(VAR_1, "Statistics have been cleared\n");
 }

 FUNC_1(VAR_1, VAR_2);
}
