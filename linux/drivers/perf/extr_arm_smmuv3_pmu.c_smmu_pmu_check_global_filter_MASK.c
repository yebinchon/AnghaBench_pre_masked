
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;

__attribute__((used)) static bool FUNC_3(struct perf_event *VAR_0,
      struct perf_event *VAR_1)
{
 if (FUNC_0(VAR_1) != FUNC_0(VAR_0))
  return 0;

 if (!FUNC_0(VAR_1))
  return 1;

 return FUNC_1(VAR_1) == FUNC_1(VAR_0) &&
        FUNC_2(VAR_1) == FUNC_2(VAR_0);
}
