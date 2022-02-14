
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cluster_pmu {int pmu_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct cluster_pmu *VAR_4,
          u32 VAR_5, u32 VAR_6)
{
 u64 VAR_7;
 u64 VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;

 VAR_9 = VAR_2 * VAR_5;
 VAR_7 = ((u64)(VAR_6 & VAR_3) << VAR_9);

 FUNC_2(&VAR_4->pmu_lock, VAR_10);

 VAR_8 = FUNC_0(VAR_0);
 VAR_8 &= ~(VAR_3 << VAR_9);
 VAR_8 |= VAR_7;
 VAR_8 |= VAR_1;
 FUNC_1(VAR_0, VAR_8);

 FUNC_3(&VAR_4->pmu_lock, VAR_10);
}
