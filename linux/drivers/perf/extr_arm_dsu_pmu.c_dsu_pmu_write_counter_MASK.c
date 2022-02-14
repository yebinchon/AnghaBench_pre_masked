
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int idx; } ;
struct perf_event {TYPE_2__* pmu; TYPE_1__ hw; } ;
struct dsu_pmu {int pmu_lock; int associated_cpus; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct dsu_pmu*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;
 struct dsu_pmu* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(struct perf_event *VAR_1, u64 VAR_2)
{
 unsigned long VAR_3;
 struct dsu_pmu *VAR_4 = FUNC_9(VAR_1->pmu);
 int VAR_5 = VAR_1->hw.idx;

 if (FUNC_0(!FUNC_3(FUNC_8(),
    &VAR_4->associated_cpus)))
  return;

 if (!FUNC_5(VAR_4, VAR_5)) {
  FUNC_4(VAR_1->pmu->dev,
   "writing to invalid counter %d\n", VAR_5);
  return;
 }

 FUNC_6(&VAR_4->pmu_lock, VAR_3);
 if (VAR_5 == VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_5, VAR_2);
 FUNC_7(&VAR_4->pmu_lock, VAR_3);
}
