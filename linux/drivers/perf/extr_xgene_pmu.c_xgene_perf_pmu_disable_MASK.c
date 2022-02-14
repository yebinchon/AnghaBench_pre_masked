
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_pmu_dev {struct xgene_pmu* parent; } ;
struct xgene_pmu {TYPE_1__* ops; } ;
struct pmu {int dummy; } ;
struct TYPE_2__ {int (* stop_counters ) (struct xgene_pmu_dev*) ;} ;


 int FUNC_0 (struct xgene_pmu_dev*) ;
 struct xgene_pmu_dev* FUNC_1 (struct pmu*) ;

__attribute__((used)) static void FUNC_2(struct pmu *VAR_0)
{
 struct xgene_pmu_dev *VAR_1 = FUNC_1(VAR_0);
 struct xgene_pmu *VAR_2 = VAR_1->parent;

 VAR_2->ops->stop_counters(VAR_1);
}
