
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample_period; int last_period; int state; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 if (!(VAR_3 & VAR_0))
  VAR_2->hw.state = VAR_1;

 if (FUNC_1(VAR_2)) {
  VAR_2->hw.last_period = VAR_2->hw.sample_period;
  FUNC_2(VAR_2);
 }

 return FUNC_0(VAR_2);
}
