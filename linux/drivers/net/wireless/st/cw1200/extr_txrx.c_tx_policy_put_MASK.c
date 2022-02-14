
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_policy_cache {int lock; int * cache; int free; } ;
struct cw1200_common {struct tx_policy_cache tx_policy_cache; } ;


 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tx_policy_cache*,int *) ;

__attribute__((used)) static void FUNC_5(struct cw1200_common *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct tx_policy_cache *VAR_4 = &VAR_0->tx_policy_cache;

 FUNC_2(&VAR_4->lock);
 VAR_3 = FUNC_1(&VAR_4->free);
 VAR_2 = FUNC_4(VAR_4, &VAR_4->cache[VAR_1]);
 if (VAR_3 && !VAR_2) {

  FUNC_0(VAR_0);
 }
 FUNC_3(&VAR_4->lock);
}
