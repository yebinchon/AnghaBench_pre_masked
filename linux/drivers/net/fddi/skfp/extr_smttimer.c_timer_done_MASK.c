
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct smt_timer {scalar_t__ tm_delta; int tm_token; struct smt_timer* tm_next; int tm_active; } ;
struct TYPE_2__ {struct smt_timer* st_queue; } ;
struct s_smc {TYPE_1__ t; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct s_smc*,scalar_t__) ;
 int FUNC_2 (struct s_smc*,int ) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_1, int VAR_2)
{
 u_long VAR_3 ;
 struct smt_timer *VAR_4 ;
 struct smt_timer *VAR_5 ;
 struct smt_timer **VAR_6 ;
 int VAR_7 = 0 ;

 VAR_3 = FUNC_0(VAR_1) ;
 VAR_6 = &VAR_1->t.st_queue ;
 VAR_4 = VAR_1->t.st_queue ;
 while (VAR_4 && !VAR_7) {
  if (VAR_3 >= VAR_4->tm_delta) {
   VAR_4->tm_active = VAR_0 ;
   VAR_3 -= VAR_4->tm_delta ;
   VAR_6 = &VAR_4->tm_next ;
   VAR_4 = VAR_4->tm_next ;
  }
  else {
   VAR_4->tm_delta -= VAR_3 ;
   VAR_3 = 0 ;
   VAR_7 = 1 ;
  }
 }
 *VAR_6 = ((void*)0);
 VAR_5 = VAR_1->t.st_queue ;
 VAR_1->t.st_queue = VAR_4 ;

 for ( VAR_4 = VAR_5 ; VAR_4 ; VAR_4 = VAR_5) {
  VAR_5 = VAR_4->tm_next ;
  FUNC_2(VAR_1,VAR_4->tm_token) ;
 }

 if (VAR_2 && VAR_1->t.st_queue)
  FUNC_1(VAR_1,VAR_1->t.st_queue->tm_delta) ;
}
