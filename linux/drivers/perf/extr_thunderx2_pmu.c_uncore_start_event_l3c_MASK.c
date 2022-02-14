
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hw_perf_event {int event_base; int prev_count; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0, int VAR_1)
{
 u32 VAR_2;
 struct hw_perf_event *VAR_3 = &VAR_0->hw;


 VAR_2 = FUNC_0(VAR_0) << 3;
 FUNC_2(VAR_2, VAR_3->config_base);
 FUNC_1(&VAR_3->prev_count, 0);
 FUNC_2(0, VAR_3->event_base);
}
