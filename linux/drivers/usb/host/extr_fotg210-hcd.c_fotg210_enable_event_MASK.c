
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {int enabled_hrtimer_events; unsigned int next_hrtimer_event; int hrtimer; int * hr_timeouts; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct fotg210_hcd *VAR_3, unsigned VAR_4,
  bool VAR_5)
{
 ktime_t *VAR_6 = &VAR_3->hr_timeouts[VAR_4];

 if (VAR_5)
  *VAR_6 = FUNC_1(FUNC_2(), VAR_2[VAR_4]);
 VAR_3->enabled_hrtimer_events |= (1 << VAR_4);


 if (VAR_4 < VAR_3->next_hrtimer_event) {
  VAR_3->next_hrtimer_event = VAR_4;
  FUNC_0(&VAR_3->hrtimer, *VAR_6,
    VAR_1, VAR_0);
 }
}
