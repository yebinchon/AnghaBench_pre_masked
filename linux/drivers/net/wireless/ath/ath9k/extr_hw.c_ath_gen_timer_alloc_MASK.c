
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath_gen_timer_table {int tsf2_enabled; struct ath_gen_timer** timers; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {size_t index; void (* trigger ) (void*) ;void (* overflow ) (void*) ;void* arg; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hw*) ;
 struct ath_gen_timer* FUNC_2 (int,int ) ;

struct ath_gen_timer *FUNC_3(struct ath_hw *VAR_3,
       void (*VAR_4)(void *),
       void (*VAR_5)(void *),
       void *VAR_6,
       u8 VAR_7)
{
 struct ath_gen_timer_table *VAR_8 = &VAR_3->hw_gen_timers;
 struct ath_gen_timer *VAR_9;

 if ((VAR_7 < VAR_0) ||
     (VAR_7 >= VAR_1))
  return ((void*)0);

 if ((VAR_7 > VAR_0) &&
     !FUNC_0(VAR_3))
  return ((void*)0);

 VAR_9 = FUNC_2(sizeof(struct ath_gen_timer), VAR_2);
 if (VAR_9 == ((void*)0))
  return ((void*)0);


 VAR_8->timers[VAR_7] = VAR_9;
 VAR_9->index = VAR_7;
 VAR_9->trigger = VAR_4;
 VAR_9->overflow = VAR_5;
 VAR_9->arg = VAR_6;

 if ((VAR_7 > VAR_0) && !VAR_8->tsf2_enabled) {
  VAR_8->tsf2_enabled = 1;
  FUNC_1(VAR_3);
 }

 return VAR_9;
}
