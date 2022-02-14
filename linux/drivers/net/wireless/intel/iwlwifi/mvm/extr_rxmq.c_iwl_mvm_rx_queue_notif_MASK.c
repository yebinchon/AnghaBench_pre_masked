
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct iwl_rxq_sync_notification {scalar_t__ payload; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_internal_rxq_notif {scalar_t__ cookie; int type; scalar_t__ sync; scalar_t__ data; } ;
struct iwl_mvm {scalar_t__ queue_sync_cookie; int rx_sync_waitq; int queue_sync_counter; } ;





 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*,int,void*) ;
 int FUNC_3 (struct iwl_mvm*,struct napi_struct*,int,void*) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iwl_mvm *VAR_0, struct napi_struct *VAR_1,
       struct iwl_rx_cmd_buffer *VAR_2, int VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_4(VAR_2);
 struct iwl_rxq_sync_notification *VAR_5;
 struct iwl_mvm_internal_rxq_notif *VAR_6;

 VAR_5 = (void *)VAR_4->data;
 VAR_6 = (void *)VAR_5->payload;

 if (VAR_6->sync &&
     VAR_0->queue_sync_cookie != VAR_6->cookie) {
  FUNC_0(1, "Received expired RX queue sync message\n");
  return;
 }

 switch (VAR_6->type) {
 case 130:
  break;
 case 129:
  FUNC_2(VAR_0, VAR_3, (void *)VAR_6->data);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_1, VAR_3,
      (void *)VAR_6->data);
  break;
 default:
  FUNC_0(1, "Invalid identifier %d", VAR_6->type);
 }

 if (VAR_6->sync &&
     !FUNC_1(&VAR_0->queue_sync_counter))
  FUNC_5(&VAR_0->rx_sync_waitq);
}
