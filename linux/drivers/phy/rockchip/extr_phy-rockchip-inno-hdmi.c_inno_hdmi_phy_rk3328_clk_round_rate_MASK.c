
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pre_pll_config {unsigned long pixclock; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 struct pre_pll_config* VAR_1 ;

__attribute__((used)) static long FUNC_0(struct clk_hw *VAR_2,
      unsigned long VAR_3,
      unsigned long *VAR_4)
{
 const struct pre_pll_config *VAR_5 = VAR_1;

 for (; VAR_5->pixclock != 0; VAR_5++)
  if (VAR_5->pixclock == VAR_3)
   break;

 if (VAR_5->pixclock == 0)
  return -VAR_0;

 return VAR_5->pixclock;
}
