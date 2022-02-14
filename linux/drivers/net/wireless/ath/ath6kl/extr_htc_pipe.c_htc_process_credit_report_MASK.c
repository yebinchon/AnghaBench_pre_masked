
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int tx_lock; struct htc_endpoint* endpoint; } ;
struct TYPE_2__ {scalar_t__ credits; } ;
struct htc_endpoint {int txq; TYPE_1__ cred_dist; } ;
struct htc_credit_report {size_t eid; scalar_t__ credits; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct htc_target*,struct htc_endpoint*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct htc_target *VAR_2,
          struct htc_credit_report *VAR_3,
          int VAR_4,
          enum htc_endpoint_id VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct htc_endpoint *VAR_8;


 FUNC_4(&VAR_2->tx_lock);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_3++) {
  if (VAR_3->eid >= VAR_1) {
   FUNC_0(1);
   FUNC_5(&VAR_2->tx_lock);
   return;
  }

  VAR_8 = &VAR_2->endpoint[VAR_3->eid];
  VAR_8->cred_dist.credits += VAR_3->credits;

  if (VAR_8->cred_dist.credits && FUNC_2(&VAR_8->txq)) {
   FUNC_5(&VAR_2->tx_lock);
   FUNC_3(VAR_2, VAR_8, ((void*)0));
   FUNC_4(&VAR_2->tx_lock);
  }

  VAR_6 += VAR_3->credits;
 }
 FUNC_1(VAR_0,
     "Report indicated %d credits to distribute\n",
     VAR_6);

 FUNC_5(&VAR_2->tx_lock);
}
