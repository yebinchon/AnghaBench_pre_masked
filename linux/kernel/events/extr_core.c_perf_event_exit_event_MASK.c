
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct perf_event_context {int lock; int is_active; } ;
struct perf_event {int child_mutex; int child_list; TYPE_1__* ctx; struct perf_event* parent; } ;
struct TYPE_2__ {int parent_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event*,int ) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (struct perf_event*) ;
 int FUNC_9 (struct perf_event*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct perf_event*,struct task_struct*) ;

__attribute__((used)) static void
FUNC_13(struct perf_event *VAR_1,
        struct perf_event_context *VAR_2,
        struct task_struct *VAR_3)
{
 struct perf_event *VAR_4 = VAR_1->parent;
 FUNC_10(&VAR_2->lock);
 FUNC_0(VAR_2->is_active);

 if (VAR_4)
  FUNC_8(VAR_1);
 FUNC_2(VAR_1, VAR_2);
 FUNC_6(VAR_1, VAR_0);
 FUNC_11(&VAR_2->lock);




 if (!VAR_4) {
  FUNC_7(VAR_1);
  return;
 }




 FUNC_12(VAR_1, VAR_3);




 FUNC_0(VAR_4->ctx->parent_ctx);
 FUNC_4(&VAR_4->child_mutex);
 FUNC_3(&VAR_1->child_list);
 FUNC_5(&VAR_4->child_mutex);




 FUNC_7(VAR_4);
 FUNC_1(VAR_1);
 FUNC_9(VAR_4);
}
