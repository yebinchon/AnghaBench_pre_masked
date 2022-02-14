
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_gen_timer_table {scalar_t__ tsf2_enabled; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;

void FUNC_1(struct ath_hw *VAR_4)
{
 struct ath_gen_timer_table *VAR_5 = &VAR_4->hw_gen_timers;

 if (VAR_5->tsf2_enabled) {
  FUNC_0(VAR_4, VAR_1, VAR_0);
  FUNC_0(VAR_4, VAR_2, VAR_3);
 }
}
