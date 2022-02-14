
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ cpu; scalar_t__ group_index; } ;



__attribute__((used)) static bool
FUNC_0(struct perf_event *VAR_0, struct perf_event *VAR_1)
{
 if (VAR_0->cpu < VAR_1->cpu)
  return 1;
 if (VAR_0->cpu > VAR_1->cpu)
  return 0;

 if (VAR_0->group_index < VAR_1->group_index)
  return 1;
 if (VAR_0->group_index > VAR_1->group_index)
  return 0;

 return 0;
}
