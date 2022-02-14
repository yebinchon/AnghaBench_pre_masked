
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_queue {scalar_t__ capacity; int * link_map_cache; int * pool; int free_pool; int gc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cw1200_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cw1200_queue *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->gc);
 FUNC_0(&VAR_0->free_pool);
 FUNC_3(VAR_0->pool);
 FUNC_3(VAR_0->link_map_cache);
 VAR_0->pool = ((void*)0);
 VAR_0->link_map_cache = ((void*)0);
 VAR_0->capacity = 0;
}
