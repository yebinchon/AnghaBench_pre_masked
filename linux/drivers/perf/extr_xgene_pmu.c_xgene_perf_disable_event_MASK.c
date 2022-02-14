
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_pmu_dev {struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct perf_event {int pmu; } ;
struct TYPE_2__ {int (* disable_counter_int ) (struct xgene_pmu_dev*,int ) ;int (* disable_counter ) (struct xgene_pmu_dev*,int ) ;} ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct xgene_pmu_dev*,int ) ;
 int FUNC_2 (struct xgene_pmu_dev*,int ) ;
 struct xgene_pmu_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_0)
{
 struct xgene_pmu_dev *VAR_1 = FUNC_3(VAR_0->pmu);
 struct xgene_pmu *VAR_2 = VAR_1->parent;

 VAR_2->ops->disable_counter(VAR_1, FUNC_0(VAR_0));
 VAR_2->ops->disable_counter_int(VAR_1, FUNC_0(VAR_0));
}
