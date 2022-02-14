
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct xgene_pmu_dev {struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct hw_perf_event {int idx; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct TYPE_2__ {int (* write_counter ) (struct xgene_pmu_dev*,int ,unsigned long long) ;} ;


 int FUNC_0 (int *,unsigned long long) ;
 int FUNC_1 (struct xgene_pmu_dev*,int ,unsigned long long) ;
 struct xgene_pmu_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 struct xgene_pmu_dev *VAR_1 = FUNC_2(VAR_0->pmu);
 struct xgene_pmu *VAR_2 = VAR_1->parent;
 struct hw_perf_event *VAR_3 = &VAR_0->hw;







 u64 VAR_4 = 1ULL << 31;

 FUNC_0(&VAR_3->prev_count, VAR_4);
 VAR_2->ops->write_counter(VAR_1, VAR_3->idx, VAR_4);
}
