
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_context {int time; } ;
struct perf_event {struct perf_event_context* ctx; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static u64 FUNC_2(struct perf_event *VAR_0)
{
 struct perf_event_context *VAR_1 = VAR_0->ctx;

 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0);

 return VAR_1 ? VAR_1->time : 0;
}
