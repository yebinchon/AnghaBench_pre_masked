
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; } ;
struct perf_event {int child_mutex; int child_list; struct perf_event* parent; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_0,
       struct perf_event_context *VAR_1)
{
 struct perf_event *VAR_2 = VAR_0->parent;

 if (FUNC_0(!VAR_2))
  return;

 FUNC_4(&VAR_2->child_mutex);
 FUNC_3(&VAR_0->child_list);
 FUNC_5(&VAR_2->child_mutex);

 FUNC_7(VAR_2);

 FUNC_8(&VAR_1->lock);
 FUNC_6(VAR_0);
 FUNC_2(VAR_0, VAR_1);
 FUNC_9(&VAR_1->lock);
 FUNC_1(VAR_0);
}
