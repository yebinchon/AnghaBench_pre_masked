
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_tx_rate_retry_policy {int index; int flags; int rate_count_indices; int long_retries; int short_retries; } ;
struct wsm_set_tx_rate_retry_policy {size_t num; struct wsm_tx_rate_retry_policy* tbl; } ;
struct tx_policy_cache {int lock; TYPE_1__* cache; } ;
struct tx_policy {int uploaded; int tbl; scalar_t__ retry_count; } ;
struct cw1200_common {int long_frame_max_tx_count; int short_frame_max_tx_count; struct tx_policy_cache tx_policy_cache; } ;
struct TYPE_2__ {struct tx_policy policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_set_tx_rate_retry_policy*) ;

__attribute__((used)) static int FUNC_6(struct cw1200_common *VAR_3)
{
 struct tx_policy_cache *VAR_4 = &VAR_3->tx_policy_cache;
 int VAR_5;
 struct wsm_set_tx_rate_retry_policy VAR_6 = {
  .num = 0,
 };
 FUNC_3(&VAR_4->lock);


 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  struct tx_policy *VAR_7 = &VAR_4->cache[VAR_5].policy;
  if (VAR_7->retry_count && !VAR_7->uploaded) {
   struct wsm_tx_rate_retry_policy *VAR_8 =
    &VAR_6.tbl[VAR_6.num];
   VAR_8->index = VAR_5;
   VAR_8->short_retries = VAR_3->short_frame_max_tx_count;
   VAR_8->long_retries = VAR_3->long_frame_max_tx_count;

   VAR_8->flags = VAR_2 |
    VAR_1;
   FUNC_1(VAR_8->rate_count_indices, VAR_7->tbl,
          sizeof(VAR_8->rate_count_indices));
   VAR_7->uploaded = 1;
   ++VAR_6.num;
  }
 }
 FUNC_4(&VAR_4->lock);
 FUNC_0(VAR_3);
 FUNC_2("[TX policy] Upload %d policies\n", VAR_6.num);
 return FUNC_5(VAR_3, &VAR_6);
}
