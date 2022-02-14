
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_context {int dummy; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (struct perf_event*,int *,int *) ;
 struct perf_event_context* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;

u64 FUNC_3(struct perf_event *VAR_0, u64 *VAR_1, u64 *VAR_2)
{
 struct perf_event_context *VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_3);

 return VAR_4;
}
