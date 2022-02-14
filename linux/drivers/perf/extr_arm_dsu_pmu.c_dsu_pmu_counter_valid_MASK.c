
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsu_pmu {scalar_t__ num_counters; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct dsu_pmu *VAR_1, u32 VAR_2)
{
 return (VAR_2 < VAR_1->num_counters) ||
        (VAR_2 == VAR_0);
}
