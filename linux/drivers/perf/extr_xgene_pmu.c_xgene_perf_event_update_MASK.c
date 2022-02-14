
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xgene_pmu_dev {scalar_t__ max_period; struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct hw_perf_event {int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; int pmu; } ;
struct TYPE_2__ {scalar_t__ (* read_counter ) (struct xgene_pmu_dev*,int ) ;} ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct xgene_pmu_dev*,int ) ;
 struct xgene_pmu_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_0)
{
 struct xgene_pmu_dev *VAR_1 = FUNC_5(VAR_0->pmu);
 struct xgene_pmu *VAR_2 = VAR_1->parent;
 struct hw_perf_event *VAR_3 = &VAR_0->hw;
 u64 VAR_4, VAR_5, VAR_6;

again:
 VAR_5 = FUNC_3(&VAR_3->prev_count);
 VAR_6 = VAR_2->ops->read_counter(VAR_1, FUNC_0(VAR_0));

 if (FUNC_2(&VAR_3->prev_count, VAR_5,
       VAR_6) != VAR_5)
  goto again;

 VAR_4 = (VAR_6 - VAR_5) & VAR_1->max_period;

 FUNC_1(VAR_4, &VAR_0->count);
}
