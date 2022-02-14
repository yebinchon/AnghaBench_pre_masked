
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {struct htc_endpoint* endpoint; } ;
struct TYPE_2__ {int tx_credit_flow_enabled; int tx_lookup_queue; } ;
struct htc_endpoint {int eid; TYPE_1__ pipe; struct htc_target* target; int rx_bufq; int txq; scalar_t__ max_txq_depth; scalar_t__ len_max; scalar_t__ svc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct htc_target *VAR_2)
{
 struct htc_endpoint *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->endpoint[VAR_4];
  VAR_3->svc_id = 0;
  VAR_3->len_max = 0;
  VAR_3->max_txq_depth = 0;
  VAR_3->eid = VAR_4;
  FUNC_0(&VAR_3->txq);
  FUNC_0(&VAR_3->pipe.tx_lookup_queue);
  FUNC_0(&VAR_3->rx_bufq);
  VAR_3->target = VAR_2;
  VAR_3->pipe.tx_credit_flow_enabled = 1;
 }
}
