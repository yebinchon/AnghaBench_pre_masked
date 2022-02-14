
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmh_ctrlr {int cache_lock; int batch_cache; } ;
struct batch_cache_req {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct rpmh_ctrlr *VAR_0, struct batch_cache_req *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->cache_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->batch_cache);
 FUNC_2(&VAR_0->cache_lock, VAR_2);
}
