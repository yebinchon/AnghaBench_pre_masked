
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int enabled_otg_timer_bits; int next_otg_timer; int lock; int * hr_timeouts; int otg_fsm_hrtimer; } ;
typedef enum otg_fsm_timer { ____Placeholder_otg_fsm_timer } otg_fsm_timer ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,unsigned long,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long,unsigned long) ;
 unsigned long* VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ci_hdrc *VAR_5, enum otg_fsm_timer VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;

 if (VAR_6 >= VAR_3)
  return;

 FUNC_5(&VAR_5->lock, VAR_7);
 VAR_8 = VAR_4[VAR_6] / VAR_1;
 VAR_9 = (VAR_4[VAR_6] % VAR_1) * VAR_2;
 VAR_5->hr_timeouts[VAR_6] = FUNC_1(FUNC_3(),
    FUNC_4(VAR_8, VAR_9));
 VAR_5->enabled_otg_timer_bits |= (1 << VAR_6);
 if ((VAR_5->next_otg_timer == VAR_3) ||
   FUNC_2(VAR_5->hr_timeouts[VAR_5->next_otg_timer],
      VAR_5->hr_timeouts[VAR_6])) {
   VAR_5->next_otg_timer = VAR_6;
   FUNC_0(&VAR_5->otg_fsm_hrtimer,
     VAR_5->hr_timeouts[VAR_6], VAR_2,
       VAR_0);
 }
 FUNC_6(&VAR_5->lock, VAR_7);
}
