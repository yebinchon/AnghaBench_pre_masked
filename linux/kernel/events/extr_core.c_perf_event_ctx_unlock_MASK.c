
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int mutex; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event_context*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0,
      struct perf_event_context *VAR_1)
{
 FUNC_0(&VAR_1->mutex);
 FUNC_1(VAR_1);
}
