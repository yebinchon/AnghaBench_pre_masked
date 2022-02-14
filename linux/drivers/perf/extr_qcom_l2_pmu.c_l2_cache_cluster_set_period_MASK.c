
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hw_perf_event {scalar_t__ idx; int prev_count; } ;
struct cluster_pmu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct cluster_pmu *VAR_3,
           struct hw_perf_event *VAR_4)
{
 u32 VAR_5 = VAR_4->idx;
 u64 VAR_6;






 if (VAR_5 == VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 FUNC_1(&VAR_4->prev_count, VAR_6);
 FUNC_0(VAR_5, VAR_6);
}
