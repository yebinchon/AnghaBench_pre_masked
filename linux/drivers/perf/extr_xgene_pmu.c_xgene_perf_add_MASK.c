
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu_dev {struct perf_event** pmu_counter_event; } ;
struct hw_perf_event {int state; size_t idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct xgene_pmu_dev*) ;
 struct xgene_pmu_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_5, int VAR_6)
{
 struct xgene_pmu_dev *VAR_7 = FUNC_1(VAR_5->pmu);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;

 VAR_8->state = VAR_4 | VAR_3;


 VAR_8->idx = FUNC_0(VAR_7);
 if (VAR_8->idx < 0)
  return -VAR_0;


 VAR_7->pmu_counter_event[VAR_8->idx] = VAR_5;

 if (VAR_6 & VAR_2)
  FUNC_2(VAR_5, VAR_1);

 return 0;
}
