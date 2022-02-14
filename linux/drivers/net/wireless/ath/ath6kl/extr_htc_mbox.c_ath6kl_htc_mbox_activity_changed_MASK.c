
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int tx_lock; int cred_dist_list; int credit_info; struct htc_endpoint* endpoint; } ;
struct TYPE_2__ {int dist_flags; int txq_depth; } ;
struct htc_endpoint {scalar_t__ svc_id; int txq; TYPE_1__ cred_dist; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct htc_target*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct htc_target *VAR_3,
          enum htc_endpoint_id VAR_4,
          bool VAR_5)
{
 struct htc_endpoint *VAR_6 = &VAR_3->endpoint[VAR_4];
 bool VAR_7 = 0;

 if (VAR_6->svc_id == 0) {
  FUNC_0(1);
  return;
 }

 FUNC_5(&VAR_3->tx_lock);

 if (VAR_5) {
  if (!(VAR_6->cred_dist.dist_flags & VAR_2)) {
   VAR_6->cred_dist.dist_flags |= VAR_2;
   VAR_7 = 1;
  }
 } else {
  if (VAR_6->cred_dist.dist_flags & VAR_2) {
   VAR_6->cred_dist.dist_flags &= ~VAR_2;
   VAR_7 = 1;
  }
 }

 if (VAR_7) {
  VAR_6->cred_dist.txq_depth =
   FUNC_3(&VAR_6->txq);

  FUNC_2(VAR_0,
      "htc tx activity ctxt 0x%p dist 0x%p\n",
      VAR_3->credit_info, &VAR_3->cred_dist_list);

  FUNC_1(VAR_3->credit_info,
      &VAR_3->cred_dist_list,
      VAR_1);
 }

 FUNC_6(&VAR_3->tx_lock);

 if (VAR_7 && !VAR_5)
  FUNC_4(VAR_3);
}
