
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu_dev {int ** pmu_counter_event; } ;
struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;


 int FUNC_0 (struct perf_event*) ;
 int VAR_0 ;
 int FUNC_1 (struct xgene_pmu_dev*,int ) ;
 int FUNC_2 (struct perf_event*) ;
 struct xgene_pmu_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1, int VAR_2)
{
 struct xgene_pmu_dev *VAR_3 = FUNC_3(VAR_1->pmu);
 struct hw_perf_event *VAR_4 = &VAR_1->hw;

 FUNC_4(VAR_1, VAR_0);


 FUNC_1(VAR_3, FUNC_0(VAR_1));

 FUNC_2(VAR_1);
 VAR_3->pmu_counter_event[VAR_4->idx] = ((void*)0);
}
