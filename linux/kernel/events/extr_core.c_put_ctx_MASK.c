
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ task; int rcu_head; struct perf_event_context* parent_ctx; int refcount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_event_context *VAR_2)
{
 if (FUNC_2(&VAR_2->refcount)) {
  if (VAR_2->parent_ctx)
   FUNC_3(VAR_2->parent_ctx);
  if (VAR_2->task && VAR_2->task != VAR_0)
   FUNC_1(VAR_2->task);
  FUNC_0(&VAR_2->rcu_head, VAR_1);
 }
}
