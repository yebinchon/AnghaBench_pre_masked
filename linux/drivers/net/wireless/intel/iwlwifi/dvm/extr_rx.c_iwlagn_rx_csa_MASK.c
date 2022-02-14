
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ channel; } ;
struct iwl_rxon_context {TYPE_1__ staging; int active; } ;
struct iwl_rxon_cmd {scalar_t__ channel; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ switch_channel; int status; struct iwl_rxon_context* contexts; } ;
struct iwl_csa_notification {scalar_t__ channel; int status; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_priv*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct iwl_rx_packet* FUNC_5 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_priv *VAR_2, struct iwl_rx_cmd_buffer *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_5(VAR_3);
 struct iwl_csa_notification *VAR_5 = (void *)VAR_4->data;




 struct iwl_rxon_context *VAR_6 = &VAR_2->contexts[VAR_0];
 struct iwl_rxon_cmd *VAR_7 = (void *)&VAR_6->active;

 if (!FUNC_6(VAR_1, &VAR_2->status))
  return;

 if (!FUNC_4(VAR_5->status) && VAR_5->channel == VAR_2->switch_channel) {
  VAR_7->channel = VAR_5->channel;
  VAR_6->staging.channel = VAR_5->channel;
  FUNC_0(VAR_2, "CSA notif: channel %d\n",
         FUNC_3(VAR_5->channel));
  FUNC_2(VAR_2, 1);
 } else {
  FUNC_1(VAR_2, "CSA notif (fail) : channel %d\n",
   FUNC_3(VAR_5->channel));
  FUNC_2(VAR_2, 0);
 }
}
