
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int cred_dist_list; struct htc_endpoint* endpoint; } ;
struct htc_endpoint {struct htc_target* target; int txq; int rx_bufq; int ep_st; scalar_t__ max_txq_depth; scalar_t__ len_max; scalar_t__ svc_id; int cred_dist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_2)
{
 struct htc_endpoint *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->endpoint[VAR_4];
  FUNC_1(&VAR_3->cred_dist, 0, sizeof(VAR_3->cred_dist));
  VAR_3->svc_id = 0;
  VAR_3->len_max = 0;
  VAR_3->max_txq_depth = 0;
  FUNC_1(&VAR_3->ep_st, 0,
         sizeof(VAR_3->ep_st));
  FUNC_0(&VAR_3->rx_bufq);
  FUNC_0(&VAR_3->txq);
  VAR_3->target = VAR_2;
 }



 FUNC_0(&VAR_2->cred_dist_list);
}
