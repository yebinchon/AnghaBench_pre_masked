
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {int cpu; struct hw_perf_event hw; int pmu; } ;
struct arm_spe_pmu {int supported_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 () ;
 struct arm_spe_pmu* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 struct arm_spe_pmu *VAR_9 = FUNC_3(VAR_6->pmu);
 struct hw_perf_event *VAR_10 = &VAR_6->hw;
 int VAR_11 = VAR_6->cpu == -1 ? FUNC_2() : VAR_6->cpu;

 if (!FUNC_1(VAR_11, &VAR_9->supported_cpus))
  return -VAR_1;

 VAR_10->state = VAR_5 | VAR_4;

 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_6, VAR_2);
  if (VAR_10->state & VAR_4)
   VAR_8 = -VAR_0;
 }

 return VAR_8;
}
