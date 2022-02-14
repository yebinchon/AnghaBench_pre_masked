
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; scalar_t__ config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cluster_pmu {int used_groups; int used_counters; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct cluster_pmu *VAR_1,
          struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 int VAR_4 = VAR_3->idx;

 FUNC_1(VAR_4, VAR_1->used_counters);
 if (VAR_3->config_base != VAR_0)
  FUNC_1(FUNC_0(VAR_3->config_base), VAR_1->used_groups);
}
