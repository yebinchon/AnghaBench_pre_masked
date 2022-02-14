
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {unsigned long rate; unsigned long best_parent_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct clk_hw*,unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1,
           struct clk_rate_request *VAR_2)
{
 struct clk_hw *VAR_3;
 unsigned long VAR_4 = 0;
 int VAR_5, VAR_6 = FUNC_1(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  struct clk_hw *VAR_7 = FUNC_2(VAR_1, VAR_5);
  unsigned long VAR_8, VAR_9;
  if (!VAR_7)
   continue;

  VAR_9 = FUNC_3(VAR_7);

  VAR_8 = FUNC_0(VAR_1, VAR_2->rate, VAR_9);

  if (VAR_8 > VAR_2->rate)
   continue;
  if (VAR_2->rate - VAR_8 < VAR_2->rate - VAR_4) {
   VAR_4 = VAR_8;
   VAR_3 = VAR_7;
  }
 }

 if (!VAR_4)
  return -VAR_0;

 VAR_2->best_parent_hw = VAR_3;
 VAR_2->best_parent_rate = VAR_4;
 VAR_2->rate = VAR_4;

 return 0;
}
