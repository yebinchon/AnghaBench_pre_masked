
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_policy_cache {int free; TYPE_1__* cache; int used; int lock; } ;
struct cw1200_common {struct tx_policy_cache tx_policy_cache; } ;
struct TYPE_2__ {int link; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tx_policy_cache*,int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cw1200_common *VAR_1)
{
 struct tx_policy_cache *VAR_2 = &VAR_1->tx_policy_cache;
 int VAR_3;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 FUNC_3(&VAR_2->lock);
 FUNC_0(&VAR_2->used);
 FUNC_0(&VAR_2->free);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_1(&VAR_2->cache[VAR_3].link, &VAR_2->free);
}
