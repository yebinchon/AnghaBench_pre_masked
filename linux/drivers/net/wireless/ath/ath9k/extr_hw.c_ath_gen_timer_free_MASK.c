
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_gen_timer_table {int ** timers; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {size_t index; } ;


 int FUNC_0 (struct ath_gen_timer*) ;

void FUNC_1(struct ath_hw *VAR_0, struct ath_gen_timer *VAR_1)
{
 struct ath_gen_timer_table *VAR_2 = &VAR_0->hw_gen_timers;


 VAR_2->timers[VAR_1->index] = ((void*)0);
 FUNC_0(VAR_1);
}
