
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct ab_task {int done; scalar_t__ result; int * done_fn; int task_fn; int refcount; struct kmem_cache* cache; } ;
typedef int ab_task_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ab_task* FUNC_1 (struct kmem_cache*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ab_task *FUNC_3(struct kmem_cache *VAR_1,
       ab_task_fn_t VAR_2)
{
 struct ab_task *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->cache = VAR_1;
 FUNC_2(&VAR_3->refcount);
 VAR_3->task_fn = VAR_2;
 VAR_3->done_fn = ((void*)0);
 VAR_3->result = 0;
 FUNC_0(&VAR_3->done);
 return VAR_3;
}
