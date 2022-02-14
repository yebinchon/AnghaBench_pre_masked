
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ generation; scalar_t__ parent_gen; struct perf_event_context* parent_ctx; scalar_t__ pin_count; int lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct perf_event_context *VAR_0,
    struct perf_event_context *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 FUNC_0(&VAR_1->lock);


 if (VAR_0->pin_count || VAR_1->pin_count)
  return 0;


 if (VAR_0 == VAR_1->parent_ctx && VAR_0->generation == VAR_1->parent_gen)
  return 1;


 if (VAR_0->parent_ctx == VAR_1 && VAR_0->parent_gen == VAR_1->generation)
  return 1;





 if (VAR_0->parent_ctx && VAR_0->parent_ctx == VAR_1->parent_ctx &&
   VAR_0->parent_gen == VAR_1->parent_gen)
  return 1;


 return 0;
}
