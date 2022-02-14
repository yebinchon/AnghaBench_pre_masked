
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {scalar_t__ config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cluster_pmu {int used_groups; int used_counters; TYPE_1__* l2cache_pmu; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct cluster_pmu *VAR_3,
       struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 int VAR_6;
 int VAR_7 = VAR_3->l2cache_pmu->num_counters - 1;
 unsigned int VAR_8;

 if (VAR_5->config_base == VAR_1) {
  if (FUNC_3(VAR_2, VAR_3->used_counters))
   return -VAR_0;

  return VAR_2;
 }

 VAR_6 = FUNC_1(VAR_3->used_counters, VAR_7);
 if (VAR_6 == VAR_7)

  return -VAR_0;






 VAR_8 = FUNC_0(VAR_5->config_base);
 if (FUNC_4(VAR_8, VAR_3->used_groups))
  return -VAR_0;

 FUNC_2(VAR_6, VAR_3->used_counters);
 FUNC_2(VAR_8, VAR_3->used_groups);

 return VAR_6;
}
