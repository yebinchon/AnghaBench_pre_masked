
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int refcount; int flexible_active; int pinned_active; int event_list; int flexible_groups; int pinned_groups; int active_ctx_list; int mutex; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct perf_event_context *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->active_ctx_list);
 FUNC_2(&VAR_0->pinned_groups);
 FUNC_2(&VAR_0->flexible_groups);
 FUNC_0(&VAR_0->event_list);
 FUNC_0(&VAR_0->pinned_active);
 FUNC_0(&VAR_0->flexible_active);
 FUNC_4(&VAR_0->refcount, 1);
}
