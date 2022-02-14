
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmu {int dummy; } ;
struct dsu_pmu {int pmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct dsu_pmu* FUNC_4 (struct pmu*) ;

__attribute__((used)) static void FUNC_5(struct pmu *VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;
 struct dsu_pmu *VAR_4 = FUNC_4(VAR_1);

 FUNC_2(&VAR_4->pmu_lock, VAR_3);
 VAR_2 = FUNC_0();
 VAR_2 &= ~VAR_0;
 FUNC_1(VAR_2);
 FUNC_3(&VAR_4->pmu_lock, VAR_3);
}
