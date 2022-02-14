
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {unsigned int num_counters; int used_counters; } ;
struct perf_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct smmu_pmu*,struct perf_event*,int) ;

__attribute__((used)) static int FUNC_3(struct smmu_pmu *VAR_1,
      struct perf_event *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5 = VAR_1->num_counters;

 VAR_3 = FUNC_0(VAR_1->used_counters, VAR_5);
 if (VAR_3 == VAR_5)

  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3, VAR_1->used_counters);

 return VAR_3;
}
