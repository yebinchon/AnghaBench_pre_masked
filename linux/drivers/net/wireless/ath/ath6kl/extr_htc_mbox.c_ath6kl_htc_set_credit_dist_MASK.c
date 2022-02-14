
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct htc_target {int cred_dist_list; struct htc_endpoint* endpoint; struct ath6kl_htc_credit_info* credit_info; } ;
struct TYPE_2__ {int list; } ;
struct htc_endpoint {scalar_t__ svc_id; TYPE_1__ cred_dist; } ;
struct ath6kl_htc_credit_info {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_3,
    struct ath6kl_htc_credit_info *VAR_4,
    u16 VAR_5[], int VAR_6)
{
 struct htc_endpoint *VAR_7;
 int VAR_8, VAR_9;

 VAR_3->credit_info = VAR_4;

 FUNC_1(&VAR_3->endpoint[VAR_0].cred_dist.list,
        &VAR_3->cred_dist_list);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  for (VAR_9 = VAR_1; VAR_9 < VAR_2; VAR_9++) {
   VAR_7 = &VAR_3->endpoint[VAR_9];
   if (VAR_7->svc_id == VAR_5[VAR_8]) {
    FUNC_1(&VAR_7->cred_dist.list,
           &VAR_3->cred_dist_list);
    break;
   }
  }
  if (VAR_9 >= VAR_2) {
   FUNC_0(1);
   return;
  }
 }
}
