
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ cpu; } ;
struct cpumask {int dummy; } ;


 struct cpumask const* VAR_0 ;
 struct cpumask const* FUNC_0 (scalar_t__) ;

__attribute__((used)) static const struct cpumask *FUNC_1(struct perf_event *VAR_1)
{
 if (VAR_1->cpu >= 0)
  return FUNC_0(VAR_1->cpu);
 return VAR_0;
}
