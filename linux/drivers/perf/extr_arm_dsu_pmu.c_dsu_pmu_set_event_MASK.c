
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int idx; int config_base; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__* pmu; } ;
struct dsu_pmu {int pmu_lock; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dsu_pmu*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct dsu_pmu *VAR_0,
     struct perf_event *VAR_1)
{
 int VAR_2 = VAR_1->hw.idx;
 unsigned long VAR_3;

 if (!FUNC_2(VAR_0, VAR_2)) {
  FUNC_1(VAR_1->pmu->dev,
   "Trying to set invalid counter %d\n", VAR_2);
  return;
 }

 FUNC_3(&VAR_0->pmu_lock, VAR_3);
 FUNC_0(VAR_2, VAR_1->hw.config_base);
 FUNC_4(&VAR_0->pmu_lock, VAR_3);
}
