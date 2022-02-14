
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htc_ep {int eid; int tx_credit_flow_enabled; struct ath10k_htc* htc; scalar_t__ max_tx_queue_depth; scalar_t__ max_ep_message_len; int service_id; } ;
struct ath10k_htc {struct ath10k_htc_ep* endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ath10k_htc *VAR_3)
{
 struct ath10k_htc_ep *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->endpoint[VAR_5];
  VAR_4->service_id = VAR_2;
  VAR_4->max_ep_message_len = 0;
  VAR_4->max_tx_queue_depth = 0;
  VAR_4->eid = VAR_5;
  VAR_4->htc = VAR_3;
  VAR_4->tx_credit_flow_enabled = 1;
 }
}
