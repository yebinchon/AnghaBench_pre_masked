
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage_count; } ;
struct tx_policy_cache_entry {int link; TYPE_1__ policy; } ;
struct tx_policy_cache {int used; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct tx_policy_cache *VAR_0,
     struct tx_policy_cache_entry *VAR_1)
{
 ++VAR_1->policy.usage_count;
 FUNC_0(&VAR_1->link, &VAR_0->used);
}
