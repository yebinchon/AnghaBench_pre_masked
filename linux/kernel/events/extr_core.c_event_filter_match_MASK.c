
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int cpu; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int
FUNC_3(struct perf_event *VAR_0)
{
 return (VAR_0->cpu == -1 || VAR_0->cpu == FUNC_2()) &&
        FUNC_0(VAR_0) && FUNC_1(VAR_0);
}
