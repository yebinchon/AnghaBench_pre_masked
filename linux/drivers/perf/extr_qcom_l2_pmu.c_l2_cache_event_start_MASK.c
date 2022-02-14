
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hw_perf_event {int idx; scalar_t__ config_base; scalar_t__ state; } ;
struct perf_event {int cpu; int pmu; struct hw_perf_event hw; } ;
struct cluster_pmu {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (struct cluster_pmu*,scalar_t__,scalar_t__) ;
 struct cluster_pmu* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct cluster_pmu*,struct hw_perf_event*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct perf_event *VAR_1, int VAR_2)
{
 struct cluster_pmu *VAR_3;
 struct hw_perf_event *VAR_4 = &VAR_1->hw;
 int VAR_5 = VAR_4->idx;
 u32 VAR_6;
 u32 VAR_7, VAR_8;

 VAR_4->state = 0;

 VAR_3 = FUNC_9(FUNC_11(VAR_1->pmu), VAR_1->cpu);

 FUNC_10(VAR_3, VAR_4);

 if (VAR_4->config_base == VAR_0) {
  FUNC_4(0);
 } else {
  VAR_6 = VAR_4->config_base;
  VAR_7 = FUNC_0(VAR_6);
  VAR_8 = FUNC_1(VAR_6);

  FUNC_5(VAR_5, 0);
  FUNC_7(VAR_5, VAR_8);
  FUNC_8(VAR_3, VAR_8, VAR_7);
  FUNC_6(VAR_5);
 }

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
}
