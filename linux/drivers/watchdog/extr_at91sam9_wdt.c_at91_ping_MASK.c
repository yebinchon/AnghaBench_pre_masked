
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct at91wdt {scalar_t__ heartbeat; int timer; int wdd; int next_heartbeat; } ;


 int FUNC_0 (struct at91wdt*) ;
 struct at91wdt* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 struct at91wdt* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct at91wdt *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_1);
 if (FUNC_4(VAR_0, VAR_4->next_heartbeat) ||
     !FUNC_5(&VAR_4->wdd)) {
  FUNC_0(VAR_4);
  FUNC_2(&VAR_4->timer, VAR_0 + VAR_4->heartbeat);
 } else {
  FUNC_3("I will reset your machine !\n");
 }
}
