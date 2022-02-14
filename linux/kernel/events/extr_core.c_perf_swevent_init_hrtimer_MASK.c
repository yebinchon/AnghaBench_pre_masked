
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long freq; long sample_freq; long sample_period; } ;
struct TYPE_4__ {int function; } ;
struct hw_perf_event {long sample_period; long last_period; int period_left; TYPE_2__ hrtimer; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,long) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;

 if (!FUNC_1(VAR_4))
  return;

 FUNC_0(&VAR_5->hrtimer, VAR_0, VAR_1);
 VAR_5->hrtimer.function = VAR_3;





 if (VAR_4->attr.freq) {
  long VAR_6 = VAR_4->attr.sample_freq;

  VAR_4->attr.sample_period = VAR_2 / VAR_6;
  VAR_5->sample_period = VAR_4->attr.sample_period;
  FUNC_2(&VAR_5->period_left, VAR_5->sample_period);
  VAR_5->last_period = VAR_5->sample_period;
  VAR_4->attr.freq = 0;
 }
}
