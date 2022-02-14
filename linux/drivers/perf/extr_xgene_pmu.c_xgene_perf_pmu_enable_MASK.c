
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_pmu_dev {int max_counters; int cntr_assign_mask; struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct pmu {int dummy; } ;
struct TYPE_2__ {int (* start_counters ) (struct xgene_pmu_dev*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct xgene_pmu_dev*) ;
 struct xgene_pmu_dev* FUNC_2 (struct pmu*) ;

__attribute__((used)) static void FUNC_3(struct pmu *VAR_0)
{
 struct xgene_pmu_dev *VAR_1 = FUNC_2(VAR_0);
 struct xgene_pmu *VAR_2 = VAR_1->parent;
 int VAR_3 = FUNC_0(VAR_1->cntr_assign_mask,
   VAR_1->max_counters);

 if (!VAR_3)
  return;

 VAR_2->ops->start_counters(VAR_1);
}
