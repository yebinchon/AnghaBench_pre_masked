
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cache_pmu {int pmu_cluster; } ;
struct cluster_pmu {int dummy; } ;


 struct cluster_pmu** FUNC_0 (int ,int) ;

__attribute__((used)) static inline struct cluster_pmu *FUNC_1(
 struct l2cache_pmu *VAR_0, int VAR_1)
{
 return *FUNC_0(VAR_0->pmu_cluster, VAR_1);
}
