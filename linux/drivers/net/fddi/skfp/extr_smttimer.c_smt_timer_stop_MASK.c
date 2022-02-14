
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smt_timer {scalar_t__ tm_delta; struct smt_timer* tm_next; int tm_active; } ;
struct TYPE_2__ {struct smt_timer* st_queue; } ;
struct s_smc {TYPE_1__ t; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*) ;

void FUNC_1(struct s_smc *VAR_1, struct smt_timer *VAR_2)
{
 struct smt_timer **VAR_3 ;
 struct smt_timer *VAR_4 ;




 VAR_2->tm_active = VAR_0 ;
 if (VAR_1->t.st_queue == VAR_2 && !VAR_2->tm_next) {
  FUNC_0(VAR_1) ;
 }
 for (VAR_3 = &VAR_1->t.st_queue ; (VAR_4 = *VAR_3) ; VAR_3 = &VAR_4->tm_next ) {
  if (VAR_4 == VAR_2) {
   *VAR_3 = VAR_4->tm_next ;
   if (VAR_4->tm_next) {
    VAR_4->tm_next->tm_delta += VAR_4->tm_delta ;
   }
   return ;
  }
 }
}
