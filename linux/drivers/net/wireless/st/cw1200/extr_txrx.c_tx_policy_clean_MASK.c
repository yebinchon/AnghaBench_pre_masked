
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ usage_count; } ;
struct tx_policy_cache_entry {TYPE_1__ policy; int link; } ;
struct tx_policy_cache {int lock; int free; struct tx_policy_cache_entry* cache; } ;
struct cw1200_common {struct tx_policy_cache tx_policy_cache; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct cw1200_common *VAR_1)
{
 int VAR_2, VAR_3;
 struct tx_policy_cache *VAR_4 = &VAR_1->tx_policy_cache;
 struct tx_policy_cache_entry *VAR_5;

 FUNC_1(VAR_1);
 FUNC_6(&VAR_4->lock);
 VAR_3 = FUNC_3(&VAR_4->free);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_5 = &VAR_4->cache[VAR_2];



  if (FUNC_0(VAR_5->policy.usage_count)) {
   VAR_5->policy.usage_count = 0;
   FUNC_4(&VAR_5->link, &VAR_4->free);
  }
  FUNC_5(&VAR_5->policy, 0, sizeof(VAR_5->policy));
 }
 if (VAR_3)
  FUNC_2(VAR_1);

 FUNC_2(VAR_1);
 FUNC_7(&VAR_4->lock);
}
