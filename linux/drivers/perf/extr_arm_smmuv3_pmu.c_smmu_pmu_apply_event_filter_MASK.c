
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smmu_pmu {unsigned int num_counters; int * events; int used_counters; int global_filter; } ;
struct perf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__ FUNC_4 (int ,struct perf_event*) ;
 int FUNC_5 (struct perf_event*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct smmu_pmu *VAR_3,
           struct perf_event *VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;
 unsigned int VAR_8 = VAR_3->num_counters;
 bool VAR_9 = !!FUNC_1(VAR_4);

 VAR_6 = VAR_9 ? FUNC_2(VAR_4) :
      VAR_2;
 VAR_7 = VAR_9 ? FUNC_3(VAR_4) :
      VAR_1;


 if (!VAR_3->global_filter) {
  FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
  return 0;
 }


 VAR_5 = FUNC_0(VAR_3->used_counters, VAR_8);
 if (VAR_5 == VAR_8 ||
     FUNC_4(VAR_3->events[VAR_5], VAR_4)) {
  FUNC_5(VAR_4, 0, VAR_6, VAR_7);
  return 0;
 }

 return -VAR_0;
}
