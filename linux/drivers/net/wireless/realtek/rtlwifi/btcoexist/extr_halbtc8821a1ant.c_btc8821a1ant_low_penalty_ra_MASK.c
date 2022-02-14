
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btc_coexist {int dummy; } ;
struct TYPE_2__ {int cur_low_penalty_ra; int pre_low_penalty_ra; } ;


 int FUNC_0 (struct btc_coexist*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_1,
     bool VAR_2, bool VAR_3)
{
 VAR_0->cur_low_penalty_ra = VAR_3;

 if (!VAR_2) {
  if (VAR_0->pre_low_penalty_ra == VAR_0->cur_low_penalty_ra)
   return;
 }
 FUNC_0(VAR_1,
         VAR_0->cur_low_penalty_ra);

 VAR_0->pre_low_penalty_ra = VAR_0->cur_low_penalty_ra;
}
