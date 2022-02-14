
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {struct perf_event** events; } ;
struct hw_perf_event {int idx; int state; int prev_count; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int) ;
 int FUNC_3 (struct smmu_pmu*,struct perf_event*) ;
 int FUNC_4 (struct smmu_pmu*,int) ;
 struct smmu_pmu* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 int VAR_6;
 struct smmu_pmu *VAR_7 = FUNC_5(VAR_3->pmu);

 VAR_6 = FUNC_3(VAR_7, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->idx = VAR_6;
 VAR_5->state = VAR_1 | VAR_2;
 VAR_7->events[VAR_6] = VAR_3;
 FUNC_0(&VAR_5->prev_count, 0);

 FUNC_4(VAR_7, VAR_6);

 if (VAR_4 & VAR_0)
  FUNC_2(VAR_3, VAR_4);


 FUNC_1(VAR_3);

 return 0;
}
