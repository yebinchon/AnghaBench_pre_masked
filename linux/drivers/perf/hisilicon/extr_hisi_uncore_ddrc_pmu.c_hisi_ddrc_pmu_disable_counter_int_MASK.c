
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_perf_event {int dummy; } ;
struct hisi_pmu {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hw_perf_event*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hisi_pmu *VAR_1,
           struct hw_perf_event *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_1(VAR_1->base + VAR_0);
 VAR_3 |= (1 << FUNC_0(VAR_2));
 FUNC_2(VAR_3, VAR_1->base + VAR_0);
}
