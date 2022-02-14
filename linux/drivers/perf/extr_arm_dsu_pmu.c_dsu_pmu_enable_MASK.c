
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmu {int dummy; } ;
struct TYPE_2__ {int used_mask; } ;
struct dsu_pmu {int pmu_lock; TYPE_1__ hw_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct dsu_pmu* FUNC_5 (struct pmu*) ;

__attribute__((used)) static void FUNC_6(struct pmu *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;
 struct dsu_pmu *VAR_5 = FUNC_5(VAR_2);


 if (FUNC_2(VAR_5->hw_events.used_mask, VAR_1))
  return;

 FUNC_3(&VAR_5->pmu_lock, VAR_4);
 VAR_3 = FUNC_0();
 VAR_3 |= VAR_0;
 FUNC_1(VAR_3);
 FUNC_4(&VAR_5->pmu_lock, VAR_4);
}
