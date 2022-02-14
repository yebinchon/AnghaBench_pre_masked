
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_round_data {unsigned int min; unsigned int max; unsigned long rate; int arg; int func; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int VAR_0 ;
 long FUNC_1 (struct clk_rate_round_data*) ;

long FUNC_2(struct clk *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, unsigned long VAR_4)
{
 struct clk_rate_round_data VAR_5 = {
  .min = VAR_2,
  .max = VAR_3,
  .func = VAR_0,
  .arg = FUNC_0(VAR_1),
  .rate = VAR_4,
 };

 return FUNC_1(&VAR_5);
}
