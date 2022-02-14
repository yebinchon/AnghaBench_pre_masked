
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event_context {scalar_t__ timestamp; int time; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct perf_event_context *VAR_0)
{
 u64 VAR_1 = FUNC_0();

 VAR_0->time += VAR_1 - VAR_0->timestamp;
 VAR_0->timestamp = VAR_1;
}
