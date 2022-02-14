
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int pmu; } ;
struct arm_pmu {int (* filter_match ) (struct perf_event*) ;int supported_cpus; } ;


 int FUNC_0 (unsigned int,int *) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (struct perf_event*) ;
 struct arm_pmu* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_0)
{
 struct arm_pmu *VAR_1 = FUNC_3(VAR_0->pmu);
 unsigned int VAR_2 = FUNC_1();
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1->supported_cpus);
 if (VAR_3 && VAR_1->filter_match)
  return VAR_1->filter_match(VAR_0);

 return VAR_3;
}
