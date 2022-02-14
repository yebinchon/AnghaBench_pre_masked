
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int hrtimer; int period_left; } ;
struct perf_event {struct hw_perf_event hw; } ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;

 if (FUNC_2(VAR_0)) {
  ktime_t VAR_2 = FUNC_1(&VAR_1->hrtimer);
  FUNC_4(&VAR_1->period_left, FUNC_3(VAR_2));

  FUNC_0(&VAR_1->hrtimer);
 }
}
